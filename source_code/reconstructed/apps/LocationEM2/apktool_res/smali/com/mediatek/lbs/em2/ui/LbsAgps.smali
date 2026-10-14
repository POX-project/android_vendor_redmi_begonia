.class public Lcom/mediatek/lbs/em2/ui/LbsAgps;
.super Landroid/app/Activity;
.source "LbsAgps.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;
    }
.end annotation


# static fields
.field protected static sContext:Landroid/content/Context;


# instance fields
.field protected delayListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

.field protected externalAddrListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

.field protected hAccListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

.field protected locationAgeListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

.field protected lppeCrowdSourceConfidentListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

.field protected mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

.field protected mAgpsdExisted:Z

.field protected mButtonAreaAbort:Landroid/widget/Button;

.field protected mButtonAreaStart:Landroid/widget/Button;

.field protected mButtonDelay:Landroid/widget/Button;

.field protected mButtonHAcc:Landroid/widget/Button;

.field protected mButtonLocationAge:Landroid/widget/Button;

.field protected mButtonLppeCrowdSourceConfident:Landroid/widget/Button;

.field protected mButtonPeriodicAbort:Landroid/widget/Button;

.field protected mButtonPeriodicStart:Landroid/widget/Button;

.field protected mButtonReset2Default:Landroid/widget/Button;

.field protected mButtonResetAgpsd:Landroid/widget/Button;

.field protected mButtonShowQoP:Landroid/widget/ToggleButton;

.field protected mButtonSlpAddr:Landroid/widget/Button;

.field protected mButtonSlpPort:Landroid/widget/Button;

.field protected mButtonSlpTemplate:Landroid/widget/Button;

.field protected mButtonSuplUt2:Landroid/widget/Button;

.field protected mButtonSuplUt3:Landroid/widget/Button;

.field protected mButtonSuplVerMinor:Landroid/widget/Button;

.field protected mButtonSuplVerSerInd:Landroid/widget/Button;

.field protected mButtonTcpKeepAlive:Landroid/widget/Button;

.field protected mButtonTestButton:Landroid/widget/Button;

.field protected mButtonTriggerTest:Landroid/widget/Button;

.field protected mButtonVAcc:Landroid/widget/Button;

.field protected mCheckBoxAFLT:Landroid/widget/CheckBox;

.field protected mCheckBoxAbeidouEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxAgalileoEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxAglonassEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxAgpsEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxAllowNiForGpsOffEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxAospPosModeEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxAospProfileEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxAuto:Landroid/widget/CheckBox;

.field protected mCheckBoxAutoProfileEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxBeidouSatelliteEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxCertFromSdcard:Landroid/widget/CheckBox;

.field protected mCheckBoxCertVerify:Landroid/widget/CheckBox;

.field protected mCheckBoxCpAutoReset:Landroid/widget/CheckBox;

.field protected mCheckBoxDefaultNlpEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxE911GpsIconEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxECID:Landroid/widget/CheckBox;

.field protected mCheckBoxEnableAgps:Landroid/widget/CheckBox;

.field protected mCheckBoxEpcMolrPduEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxExternalAddr:Landroid/widget/CheckBox;

.field protected mCheckBoxForceOtdoaAssistEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxGalileoSatelliteEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxGlonassSatelliteEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxGpsSatelliteEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxImsiEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxIngoreSiForE911:Landroid/widget/CheckBox;

.field protected mCheckBoxLPP:Landroid/widget/CheckBox;

.field protected mCheckBoxLbsLogEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxLogSensitiveData:Landroid/widget/CheckBox;

.field protected mCheckBoxLppeCpDbhEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxLppeCpEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxLppeCpSensorEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxLppeCpSrnEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxLppeCpWlanEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxLppeHideWifiBtStatus:Landroid/widget/CheckBox;

.field protected mCheckBoxLppeNetworkLocationDisable:Landroid/widget/CheckBox;

.field protected mCheckBoxLppeUpDbhEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxLppeUpEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxLppeUpSensorEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxLppeUpSrnEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxLppeUpWlanEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxMSA:Landroid/widget/CheckBox;

.field protected mCheckBoxMSB:Landroid/widget/CheckBox;

.field protected mCheckBoxMlcNumber:Landroid/widget/CheckBox;

.field protected mCheckBoxNiAllow:Landroid/widget/CheckBox;

.field protected mCheckBoxNlpSettings2SuplEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxOTDOA:Landroid/widget/CheckBox;

.field protected mCheckBoxPrivacyOverrideEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxRoamingAllow:Landroid/widget/CheckBox;

.field protected mCheckBoxSib8Sib16Enable:Landroid/widget/CheckBox;

.field protected mCheckBoxSupl2File:Landroid/widget/CheckBox;

.field protected mCheckBoxSuplApnEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxSyncToSlp:Landroid/widget/CheckBox;

.field protected mCheckBoxTls:Landroid/widget/CheckBox;

.field protected mCheckBoxUdpEnable:Landroid/widget/CheckBox;

.field protected mCheckBoxUpLppIn2g3gDisable:Landroid/widget/CheckBox;

.field protected mCheckBoxUpRrlpIn4gDisable:Landroid/widget/CheckBox;

.field protected mCheckBoxUpSiDisable:Landroid/widget/CheckBox;

.field private mGnssProxyPackageName:Ljava/lang/String;

.field private mHandler:Landroid/os/Handler;

.field protected mIsKValueUnit:Z

.field protected mLayoutCdmaSetting:Landroid/widget/LinearLayout;

.field protected mLayoutCpSetting:Landroid/widget/LinearLayout;

.field protected mLayoutDebug:Landroid/widget/LinearLayout;

.field protected mLayoutQoP:Landroid/widget/LinearLayout;

.field protected mLayoutSUPL2:Landroid/widget/LinearLayout;

.field protected mLayoutUpSetting:Landroid/widget/LinearLayout;

.field private mPackageManager:Landroid/content/pm/PackageManager;

.field protected mPopupSlpTemplate:Landroid/widget/PopupMenu;

.field protected mPopupSuplUt2:Landroid/widget/PopupMenu;

.field protected mPopupSuplUt3:Landroid/widget/PopupMenu;

.field protected mPopupSuplVerMinor:Landroid/widget/PopupMenu;

.field protected mPopupSuplVerSerInd:Landroid/widget/PopupMenu;

.field protected mPopupTestButton:Landroid/widget/PopupMenu;

.field protected mPopupTriggerTest:Landroid/widget/PopupMenu;

.field protected mRadioButtonAssistanceData:Landroid/widget/RadioButton;

.field protected mRadioButtonCDMAForce:Landroid/widget/RadioButton;

.field protected mRadioButtonCP:Landroid/widget/RadioButton;

.field protected mRadioButtonEnter:Landroid/widget/RadioButton;

.field protected mRadioButtonInside:Landroid/widget/RadioButton;

.field protected mRadioButtonIpV4:Landroid/widget/RadioButton;

.field protected mRadioButtonIpV6:Landroid/widget/RadioButton;

.field protected mRadioButtonKValue:Landroid/widget/RadioButton;

.field protected mRadioButtonLeave:Landroid/widget/RadioButton;

.field protected mRadioButtonLocationEstimate:Landroid/widget/RadioButton;

.field protected mRadioButtonMSA:Landroid/widget/RadioButton;

.field protected mRadioButtonMSB:Landroid/widget/RadioButton;

.field protected mRadioButtonMeter:Landroid/widget/RadioButton;

.field protected mRadioButtonNoPref:Landroid/widget/RadioButton;

.field protected mRadioButtonOutside:Landroid/widget/RadioButton;

.field protected mRadioButtonSUPL1:Landroid/widget/RadioButton;

.field protected mRadioButtonSUPL2:Landroid/widget/RadioButton;

.field protected mRadioButtonTLS10:Landroid/widget/RadioButton;

.field protected mRadioButtonTLS11:Landroid/widget/RadioButton;

.field protected mRadioButtonTLS12:Landroid/widget/RadioButton;

.field protected mRadioButtonUP:Landroid/widget/RadioButton;

.field protected mRadioButtonWCDMAPrefer:Landroid/widget/RadioButton;

.field protected mTextLppeServiceInstalled:Landroid/widget/TextView;

.field protected mTextViewCpLppeSupported:Landroid/widget/TextView;

.field protected mTextViewDelay:Landroid/widget/TextView;

.field protected mTextViewEmulatorMode:Landroid/widget/TextView;

.field protected mTextViewExternalAddr:Landroid/widget/TextView;

.field protected mTextViewGnssLppeSupported:Landroid/widget/TextView;

.field protected mTextViewHAcc:Landroid/widget/TextView;

.field protected mTextViewLocationAge:Landroid/widget/TextView;

.field protected mTextViewLppeCrowdSourceConfident:Landroid/widget/TextView;

.field protected mTextViewMlcNumber:Landroid/widget/TextView;

.field protected mTextViewProfilingInfo:Landroid/widget/TextView;

.field protected mTextViewSlpAddr:Landroid/widget/TextView;

.field protected mTextViewSlpPort:Landroid/widget/TextView;

.field protected mTextViewSuplUt2:Landroid/widget/TextView;

.field protected mTextViewSuplUt3:Landroid/widget/TextView;

.field protected mTextViewSuplVerMinor:Landroid/widget/TextView;

.field protected mTextViewSuplVerSerInd:Landroid/widget/TextView;

.field protected mTextViewTcpKeepAliveInterval:Landroid/widget/TextView;

.field protected mTextViewUncaliPresureSupported:Landroid/widget/TextView;

.field protected mTextViewVAcc:Landroid/widget/TextView;

.field protected mXml:Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;

.field protected mlcNumberListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

.field protected slpAddrListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

.field protected slpPortListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

.field protected tcpKeepAliveListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

.field protected vAccListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 66
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    const/4 v0, 0x1

    .line 74
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mIsKValueUnit:Z

    const/4 v0, 0x0

    .line 77
    iput-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsdExisted:Z

    .line 206
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsAgps$3;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$3;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mHandler:Landroid/os/Handler;

    .line 1559
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsAgps$115;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$115;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->slpAddrListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

    .line 1585
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsAgps$116;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$116;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->slpPortListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

    .line 1612
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsAgps$117;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$117;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->tcpKeepAliveListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

    .line 1639
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsAgps$118;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$118;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->lppeCrowdSourceConfidentListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

    .line 1666
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsAgps$119;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$119;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->hAccListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

    .line 1698
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsAgps$120;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$120;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->vAccListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

    .line 1730
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsAgps$121;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$121;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->locationAgeListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

    .line 1750
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsAgps$122;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$122;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->delayListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

    .line 1774
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsAgps$123;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$123;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->externalAddrListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

    .line 1788
    new-instance v0, Lcom/mediatek/lbs/em2/ui/LbsAgps$124;

    invoke-direct {v0, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$124;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mlcNumberListener:Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/lbs/em2/ui/LbsAgps;)Ljava/lang/String;
    .locals 0

    .line 66
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mGnssProxyPackageName:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$100(Lcom/mediatek/lbs/em2/ui/LbsAgps;)Landroid/content/pm/PackageManager;
    .locals 0

    .line 66
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPackageManager:Landroid/content/pm/PackageManager;

    return-object p0
.end method

.method static synthetic access$200(Lcom/mediatek/lbs/em2/ui/LbsAgps;Ljava/lang/String;)V
    .locals 0

    .line 66
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->launchPackageSettings(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic access$300(Lcom/mediatek/lbs/em2/ui/LbsAgps;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V
    .locals 0

    .line 66
    invoke-direct {p0, p1, p2}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->showConfirmDialog(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V

    return-void
.end method

.method static synthetic access$400(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V
    .locals 0

    .line 66
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->showLogConfirmDialog()V

    return-void
.end method

.method protected static calcKFromMeter(I)I
    .locals 4

    int-to-double v0, p0

    const-wide/high16 v2, 0x4024000000000000L    # 10.0

    div-double/2addr v0, v2

    const-wide/high16 v2, 0x3ff0000000000000L    # 1.0

    add-double/2addr v0, v2

    .line 2138
    invoke-static {v0, v1}, Ljava/lang/Math;->log(D)D

    move-result-wide v0

    const-wide v2, 0x3ff199999999999aL    # 1.1

    invoke-static {v2, v3}, Ljava/lang/Math;->log(D)D

    move-result-wide v2

    div-double/2addr v0, v2

    .line 2139
    invoke-static {v0, v1}, Ljava/lang/Math;->floor(D)D

    move-result-wide v0

    double-to-int p0, v0

    return p0
.end method

.method protected static calcMeterFromK(I)I
    .locals 4

    const/4 v0, 0x1

    if-ne p0, v0, :cond_0

    return v0

    :cond_0
    const-wide v0, 0x3ff199999999999aL    # 1.1

    int-to-double v2, p0

    .line 2132
    invoke-static {v0, v1, v2, v3}, Ljava/lang/Math;->pow(DD)D

    move-result-wide v0

    const-wide/high16 v2, 0x3ff0000000000000L    # 1.0

    sub-double/2addr v0, v2

    const-wide/high16 v2, 0x4024000000000000L    # 10.0

    mul-double/2addr v0, v2

    .line 2133
    invoke-static {v0, v1}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v0

    double-to-int p0, v0

    return p0
.end method

.method private checkLocationProxyAppPermission()V
    .locals 3

    .line 136
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mGnssProxyPackageName:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->isPackageInstalled(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 137
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mGnssProxyPackageName:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->hasLocationPermission(Ljava/lang/String;)Z

    move-result v0

    .line 138
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "proxyApp = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mGnssProxyPackageName:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " proxyAppLocationGranted = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->log(Ljava/lang/Object;)V

    if-nez v0, :cond_1

    const/4 v0, 0x0

    .line 141
    invoke-direct {p0, v0, v0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->sendMessage(II)V

    goto :goto_0

    .line 144
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Skip dialog, because package is not installed: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mGnssProxyPackageName:Ljava/lang/String;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->log(Ljava/lang/Object;)V

    :cond_1
    :goto_0
    return-void
.end method

.method protected static getTimeString(J)Ljava/lang/String;
    .locals 3

    .line 2585
    new-instance v0, Ljava/util/GregorianCalendar;

    invoke-direct {v0}, Ljava/util/GregorianCalendar;-><init>()V

    .line 2586
    invoke-virtual {v0, p0, p1}, Ljava/util/Calendar;->setTimeInMillis(J)V

    .line 2592
    sget-object p0, Ljava/util/Locale;->US:Ljava/util/Locale;

    const/4 p1, 0x4

    new-array p1, p1, [Ljava/lang/Object;

    const/16 v1, 0xb

    .line 2593
    invoke-virtual {v0, v1}, Ljava/util/Calendar;->get(I)I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, p1, v2

    const/16 v1, 0xc

    invoke-virtual {v0, v1}, Ljava/util/Calendar;->get(I)I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x1

    aput-object v1, p1, v2

    const/16 v1, 0xd

    .line 2594
    invoke-virtual {v0, v1}, Ljava/util/Calendar;->get(I)I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x2

    aput-object v1, p1, v2

    const/16 v1, 0xe

    invoke-virtual {v0, v1}, Ljava/util/Calendar;->get(I)I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const/4 v1, 0x3

    aput-object v0, p1, v1

    const-string v0, "%02d:%02d:%02d.%03d"

    .line 2592
    invoke-static {p0, v0, p1}, Ljava/lang/String;->format(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private hasLocationPermission(Ljava/lang/String;)Z
    .locals 1

    .line 191
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPackageManager:Landroid/content/pm/PackageManager;

    const-string v0, "android.permission.ACCESS_FINE_LOCATION"

    invoke-virtual {p0, v0, p1}, Landroid/content/pm/PackageManager;->checkPermission(Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method private isPackageInstalled(Ljava/lang/String;)Z
    .locals 1

    const/4 v0, 0x0

    .line 2633
    :try_start_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPackageManager:Landroid/content/pm/PackageManager;

    invoke-virtual {p0, p1, v0}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p0, 0x1

    return p0

    :catch_0
    return v0
.end method

.method private isUncaliPressureSupported()Z
    .locals 1

    .line 2641
    sget-object p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->sContext:Landroid/content/Context;

    const-string v0, "sensor"

    .line 2642
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/hardware/SensorManager;

    if-eqz p0, :cond_0

    const/4 v0, 0x6

    .line 2644
    invoke-virtual {p0, v0}, Landroid/hardware/SensorManager;->getDefaultSensor(I)Landroid/hardware/Sensor;

    move-result-object p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private launchPackageSettings(Ljava/lang/String;)V
    .locals 3

    .line 178
    :try_start_0
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "android.settings.APPLICATION_DETAILS_SETTINGS"

    .line 179
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "package"

    const/4 v2, 0x0

    .line 180
    invoke-static {v1, p1, v2}, Landroid/net/Uri;->fromParts(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    .line 181
    invoke-virtual {v0, p1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 182
    invoke-virtual {p0, v0}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 184
    :catch_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Failed to launch package settings: "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mGnssProxyPackageName:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "LocationEM"

    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 185
    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const/4 p1, 0x1

    const-string v0, "ERR: start settings failed!!"

    invoke-static {p0, v0, p1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    .line 186
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    :goto_0
    return-void
.end method

.method protected static log(Ljava/lang/Object;)V
    .locals 2

    .line 2599
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

.method protected static loge(Ljava/lang/Object;)V
    .locals 2

    .line 2607
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[agps] ERR: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "LocationEM"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 2608
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ERR: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->showToast(Ljava/lang/Object;)V

    return-void
.end method

.method private sendMessage(II)V
    .locals 1

    .line 200
    new-instance v0, Landroid/os/Message;

    invoke-direct {v0}, Landroid/os/Message;-><init>()V

    .line 201
    iput p1, v0, Landroid/os/Message;->what:I

    .line 202
    iput p2, v0, Landroid/os/Message;->arg1:I

    .line 203
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mHandler:Landroid/os/Handler;

    invoke-virtual {p0, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method

.method private showConfirmDialog(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V
    .locals 1

    .line 149
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 150
    invoke-virtual {v0, p1}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    .line 151
    invoke-virtual {v0, p2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    const/4 p1, 0x0

    .line 152
    invoke-virtual {v0, p1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 154
    new-instance p1, Lcom/mediatek/lbs/em2/ui/LbsAgps$1;

    invoke-direct {p1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$1;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    const-string p2, "Yes"

    invoke-virtual {v0, p2, p1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 167
    new-instance p1, Lcom/mediatek/lbs/em2/ui/LbsAgps$2;

    invoke-direct {p1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$2;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    const-string p0, "No"

    invoke-virtual {v0, p0, p1}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 172
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object p0

    .line 173
    invoke-virtual {p0}, Landroid/app/AlertDialog;->show()V

    return-void
.end method

.method protected static showEditDialog(Landroid/content/Context;Ljava/lang/String;IILandroid/widget/TextView;Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;)V
    .locals 4

    .line 1319
    invoke-virtual {p4}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1320
    new-instance v1, Landroid/app/Dialog;

    invoke-direct {v1, p0}, Landroid/app/Dialog;-><init>(Landroid/content/Context;)V

    .line 1321
    invoke-virtual {v1, p1}, Landroid/app/Dialog;->setTitle(Ljava/lang/CharSequence;)V

    const p0, 0x7f070003

    .line 1322
    invoke-virtual {v1, p0}, Landroid/app/Dialog;->setContentView(I)V

    const/4 p0, 0x0

    .line 1323
    invoke-virtual {v1, p0}, Landroid/app/Dialog;->setCancelable(Z)V

    .line 1324
    invoke-virtual {v1}, Landroid/app/Dialog;->show()V

    const p1, 0x7f05009c

    .line 1326
    invoke-virtual {v1, p1}, Landroid/app/Dialog;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/EditText;

    const/4 v2, 0x1

    new-array v2, v2, [Landroid/text/InputFilter;

    .line 1328
    new-instance v3, Landroid/text/InputFilter$LengthFilter;

    invoke-direct {v3, p2}, Landroid/text/InputFilter$LengthFilter;-><init>(I)V

    aput-object v3, v2, p0

    .line 1329
    invoke-virtual {p1, v2}, Landroid/widget/EditText;->setFilters([Landroid/text/InputFilter;)V

    .line 1330
    invoke-virtual {p1, p3}, Landroid/widget/EditText;->setInputType(I)V

    .line 1331
    invoke-virtual {p1, v0}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    const p0, 0x7f050009

    .line 1334
    invoke-virtual {v1, p0}, Landroid/app/Dialog;->findViewById(I)Landroid/view/View;

    move-result-object p0

    check-cast p0, Landroid/widget/Button;

    const p2, 0x7f050008

    .line 1336
    invoke-virtual {v1, p2}, Landroid/app/Dialog;->findViewById(I)Landroid/view/View;

    move-result-object p2

    check-cast p2, Landroid/widget/Button;

    .line 1337
    new-instance p3, Lcom/mediatek/lbs/em2/ui/LbsAgps$113;

    invoke-direct {p3, p5, p4, p1, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps$113;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;Landroid/widget/TextView;Landroid/widget/EditText;Landroid/app/Dialog;)V

    invoke-virtual {p0, p3}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1347
    new-instance p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$114;

    invoke-direct {p0, p5, v1, v0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$114;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;Landroid/app/Dialog;Ljava/lang/String;)V

    invoke-virtual {p2, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method private showLogConfirmDialog()V
    .locals 3

    .line 2678
    new-instance v0, Landroid/app/AlertDialog$Builder;

    invoke-direct {v0, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const-string v1, "Enable Log sensitive Data may save sensitve data into files, are you sure to enable it?"

    .line 2679
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    const/4 v1, 0x0

    .line 2680
    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    .line 2682
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$125;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$125;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    const-string v2, "Yes"

    invoke-virtual {v0, v2, v1}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 2690
    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$126;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$126;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    const-string p0, "No"

    invoke-virtual {v0, p0, v1}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 2696
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object p0

    .line 2697
    invoke-virtual {p0}, Landroid/app/AlertDialog;->show()V

    return-void
.end method

.method protected static showToast(Ljava/lang/Object;)V
    .locals 3

    .line 2612
    sget-object v0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->sContext:Landroid/content/Context;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const/4 v1, 0x1

    invoke-static {v0, p0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    const/16 v0, 0x11

    const/4 v1, 0x0

    .line 2613
    invoke-virtual {p0, v0, v1, v1}, Landroid/widget/Toast;->setGravity(III)V

    .line 2614
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    return-void
.end method


# virtual methods
.method protected addOnClickListener()V
    .locals 2

    .line 571
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonTriggerTest:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$11;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$11;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 577
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonTestButton:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$12;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$12;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 583
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonResetAgpsd:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$13;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$13;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 591
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxEnableAgps:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$14;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$14;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 598
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonUP:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$15;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$15;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 605
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonCP:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$16;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$16;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 614
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonWCDMAPrefer:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$17;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$17;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 621
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonCDMAForce:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$18;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$18;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 629
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonMSA:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$19;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$19;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 635
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonMSB:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$20;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$20;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 641
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonNoPref:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$21;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$21;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 647
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxMSA:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$22;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$22;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 653
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxMSB:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$23;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$23;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 659
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxECID:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$24;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$24;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 665
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxOTDOA:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$25;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$25;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 671
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAuto:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$26;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$26;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 677
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAFLT:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$27;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$27;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 684
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLPP:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$28;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$28;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 691
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonSUPL1:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$29;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$29;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 698
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonSUPL2:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$30;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$30;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 706
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonTLS10:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$31;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$31;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 713
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonTLS11:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$32;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$32;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 720
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonTLS12:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$33;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$33;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 728
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxCertVerify:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$34;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$34;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 736
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxUdpEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$35;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$35;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 755
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonSuplUt2:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$36;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$36;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 762
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonSuplUt3:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$37;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$37;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 769
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonSlpTemplate:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$38;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$38;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 775
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonSlpAddr:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$39;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$39;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 783
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonSlpPort:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$40;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$40;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 791
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonTcpKeepAlive:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$41;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$41;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 799
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonLppeCrowdSourceConfident:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$42;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$42;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 807
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxTls:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$43;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$43;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 813
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonSuplVerMinor:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$44;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$44;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 819
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonSuplVerSerInd:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$45;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$45;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 826
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonPeriodicStart:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$46;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$46;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 832
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonPeriodicAbort:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$47;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$47;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 838
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonAreaStart:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$48;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$48;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 844
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonAreaAbort:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$49;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$49;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 850
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonEnter:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$50;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$50;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 856
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonInside:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$51;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$51;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 862
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonOutside:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$52;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$52;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 868
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonLeave:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$53;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$53;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 874
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonShowQoP:Landroid/widget/ToggleButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$54;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$54;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/ToggleButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 880
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonKValue:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$55;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$55;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 895
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonMeter:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$56;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$56;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 910
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonHAcc:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$57;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$57;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 918
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonVAcc:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$58;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$58;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 926
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonLocationAge:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$59;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$59;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 934
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonDelay:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$60;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$60;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 943
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonLocationEstimate:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$61;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$61;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 950
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonAssistanceData:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$62;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$62;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 957
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxExternalAddr:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$63;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$63;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 970
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxMlcNumber:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$64;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$64;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 984
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxCpAutoReset:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$65;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$65;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 990
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxEpcMolrPduEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$66;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$66;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 998
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxNiAllow:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$67;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$67;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1004
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxRoamingAllow:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$68;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$68;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1011
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxSupl2File:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$69;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$69;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1017
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLogSensitiveData:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$70;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$70;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1028
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxCertFromSdcard:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$71;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$71;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1039
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAutoProfileEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$72;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$72;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1045
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxSuplApnEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$73;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$73;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1052
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxSyncToSlp:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$74;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$74;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1058
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxImsiEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$75;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$75;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1064
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxE911GpsIconEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$76;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$76;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1070
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeHideWifiBtStatus:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$77;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$77;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1076
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeNetworkLocationDisable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$78;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$78;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1082
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeCpEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$79;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$79;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1088
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeUpEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$80;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$80;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1094
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAospProfileEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$81;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$81;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1100
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxNlpSettings2SuplEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$82;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$82;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1106
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLbsLogEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$83;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$83;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1113
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxIngoreSiForE911:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$84;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$84;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1120
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeCpWlanEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$85;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$85;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1127
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeCpSrnEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$86;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$86;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1134
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeCpSensorEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$87;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$87;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1141
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeCpDbhEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$88;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$88;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1148
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeUpWlanEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$89;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$89;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1155
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeUpSrnEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$90;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$90;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1162
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeUpSensorEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$91;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$91;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1169
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeUpDbhEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$92;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$92;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1176
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxUpLppIn2g3gDisable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$93;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$93;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1183
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxUpRrlpIn4gDisable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$94;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$94;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1190
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxUpSiDisable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$95;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$95;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1197
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxDefaultNlpEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$96;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$96;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1204
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxForceOtdoaAssistEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$97;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$97;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1211
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAospPosModeEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$98;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$98;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1218
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxPrivacyOverrideEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$99;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$99;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1227
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAllowNiForGpsOffEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$100;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$100;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1234
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonIpV6:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$101;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$101;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1241
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonIpV4:Landroid/widget/RadioButton;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$102;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$102;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/RadioButton;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1248
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxSib8Sib16Enable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$103;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$103;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1254
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxGpsSatelliteEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$104;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$104;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1261
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxGlonassSatelliteEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$105;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$105;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1268
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxBeidouSatelliteEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$106;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$106;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1275
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxGalileoSatelliteEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$107;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$107;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1282
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAgpsEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$108;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$108;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1288
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAglonassEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$109;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$109;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1294
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAbeidouEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$110;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$110;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1300
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAgalileoEnable:Landroid/widget/CheckBox;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$111;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$111;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/CheckBox;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1306
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonReset2Default:Landroid/widget/Button;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$112;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$112;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method protected agpsInterfaceAutoUT()V
    .locals 9

    .line 2145
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setResetToDefault()V

    .line 2146
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v0

    .line 2147
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mXml:Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    .line 2148
    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2151
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->curSuplProfile:Lcom/mediatek/lbs/em2/utils/SuplProfile;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v2}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getSuplProfile()Lcom/mediatek/lbs/em2/utils/SuplProfile;

    move-result-object v2

    invoke-virtual {p0, v1, v2}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareSuplProfile(Lcom/mediatek/lbs/em2/utils/SuplProfile;Lcom/mediatek/lbs/em2/utils/SuplProfile;)V

    .line 2154
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setAgpsEnabled(Z)V

    .line 2155
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->agpsSetting:Lcom/mediatek/lbs/em2/utils/AgpsSetting;

    iput-boolean v2, v1, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->agpsEnable:Z

    .line 2156
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2158
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    const/4 v3, 0x1

    invoke-virtual {v1, v3}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setAgpsEnabled(Z)V

    .line 2159
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->agpsSetting:Lcom/mediatek/lbs/em2/utils/AgpsSetting;

    iput-boolean v3, v1, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->agpsEnable:Z

    .line 2160
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2163
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v2}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setAllowNI(Z)V

    .line 2164
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput-boolean v2, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->niRequest:Z

    .line 2165
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2167
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v3}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setAllowNI(Z)V

    .line 2168
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput-boolean v3, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->niRequest:Z

    .line 2169
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2172
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v2}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setAllowRoaming(Z)V

    .line 2173
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput-boolean v2, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->roaming:Z

    .line 2174
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2176
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v3}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setAllowRoaming(Z)V

    .line 2177
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput-boolean v3, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->roaming:Z

    .line 2178
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2181
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v2}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setCdmaPref(I)V

    .line 2182
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput v2, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->cdmaPreferred:I

    .line 2183
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2185
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v3}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setCdmaPref(I)V

    .line 2186
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput v3, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->cdmaPreferred:I

    .line 2187
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2189
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    const/4 v4, 0x2

    invoke-virtual {v1, v4}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setCdmaPref(I)V

    .line 2190
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput v4, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->cdmaPreferred:I

    .line 2191
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2194
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v2}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setCpAutoReset(Z)V

    .line 2195
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->cpSetting:Lcom/mediatek/lbs/em2/utils/CpSetting;

    iput-boolean v2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpAutoReset:Z

    .line 2196
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2198
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v3}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setCpAutoReset(Z)V

    .line 2199
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->cpSetting:Lcom/mediatek/lbs/em2/utils/CpSetting;

    iput-boolean v3, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpAutoReset:Z

    .line 2200
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2203
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    const-string v5, "123"

    invoke-virtual {v1, v2, v5}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setExternalAddr(ZLjava/lang/String;)V

    .line 2204
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->cpSetting:Lcom/mediatek/lbs/em2/utils/CpSetting;

    iput-boolean v2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->externalAddrEnable:Z

    .line 2205
    iput-object v5, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->externalAddr:Ljava/lang/String;

    .line 2206
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2208
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    const-string v6, "abc"

    invoke-virtual {v1, v3, v6}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setExternalAddr(ZLjava/lang/String;)V

    .line 2209
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->cpSetting:Lcom/mediatek/lbs/em2/utils/CpSetting;

    iput-boolean v3, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->externalAddrEnable:Z

    .line 2210
    iput-object v6, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->externalAddr:Ljava/lang/String;

    .line 2211
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2214
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v2, v5}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setMlcNumber(ZLjava/lang/String;)V

    .line 2215
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->cpSetting:Lcom/mediatek/lbs/em2/utils/CpSetting;

    iput-boolean v2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->mlcNumberEnable:Z

    .line 2216
    iput-object v5, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->mlcNumber:Ljava/lang/String;

    .line 2217
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2219
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v3, v6}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setMlcNumber(ZLjava/lang/String;)V

    .line 2220
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->cpSetting:Lcom/mediatek/lbs/em2/utils/CpSetting;

    iput-boolean v3, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->mlcNumberEnable:Z

    .line 2221
    iput-object v6, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->mlcNumber:Ljava/lang/String;

    .line 2222
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2225
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v2}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setMolrPosMethod(I)V

    .line 2226
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->cpSetting:Lcom/mediatek/lbs/em2/utils/CpSetting;

    iput v2, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->molrPosMethod:I

    .line 2227
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2229
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v3}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setMolrPosMethod(I)V

    .line 2230
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->cpSetting:Lcom/mediatek/lbs/em2/utils/CpSetting;

    iput v3, v1, Lcom/mediatek/lbs/em2/utils/CpSetting;->molrPosMethod:I

    .line 2231
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2234
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v2}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setPosTechnologyECID(Z)V

    .line 2235
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput-boolean v2, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->ecidEnable:Z

    .line 2236
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2238
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v3}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setPosTechnologyECID(Z)V

    .line 2239
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput-boolean v3, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->ecidEnable:Z

    .line 2240
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2243
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v2}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setPosTechnologyMSA(Z)V

    .line 2244
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput-boolean v2, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->msaEnable:Z

    .line 2245
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2247
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v3}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setPosTechnologyMSA(Z)V

    .line 2248
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput-boolean v3, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->msaEnable:Z

    .line 2249
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2252
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v2}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setPosTechnologyMSB(Z)V

    .line 2253
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput-boolean v2, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->msbEnable:Z

    .line 2254
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2256
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v3}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setPosTechnologyMSB(Z)V

    .line 2257
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput-boolean v3, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->msbEnable:Z

    .line 2258
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2261
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v2}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setPosTechnologyOTDOA(Z)V

    .line 2262
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput-boolean v2, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->otdoaEnable:Z

    .line 2263
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2265
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v3}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setPosTechnologyOTDOA(Z)V

    .line 2266
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput-boolean v3, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->otdoaEnable:Z

    .line 2267
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2270
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v3}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setProtocol(I)V

    .line 2271
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->agpsSetting:Lcom/mediatek/lbs/em2/utils/AgpsSetting;

    iput v3, v1, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->agpsProtocol:I

    .line 2272
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2274
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v2}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setProtocol(I)V

    .line 2275
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->agpsSetting:Lcom/mediatek/lbs/em2/utils/AgpsSetting;

    iput v2, v1, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->agpsProtocol:I

    .line 2276
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2279
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    const/4 v7, 0x3

    const/4 v8, 0x4

    invoke-virtual {v1, v3, v4, v7, v8}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setQop(IIII)V

    .line 2280
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput v3, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopHacc:I

    .line 2281
    iput v4, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopVacc:I

    .line 2282
    iput v7, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopLocAge:I

    .line 2283
    iput v8, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopDelay:I

    .line 2284
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2287
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v2}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setSupl2file(Z)V

    .line 2288
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput-boolean v2, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplLog:Z

    .line 2289
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2291
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v3}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setSupl2file(Z)V

    .line 2292
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput-boolean v3, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplLog:Z

    .line 2293
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2296
    new-instance v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;

    invoke-direct {v1}, Lcom/mediatek/lbs/em2/utils/SuplProfile;-><init>()V

    .line 2297
    iput-object v6, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->name:Ljava/lang/String;

    const-string v7, "www.hugo.com"

    .line 2298
    iput-object v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addr:Ljava/lang/String;

    const/16 v7, 0x3039

    .line 2299
    iput v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->port:I

    .line 2300
    iput-boolean v3, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->tls:Z

    const-string v7, "12345"

    .line 2301
    iput-object v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->mccMnc:Ljava/lang/String;

    const-string v7, "appId"

    .line 2302
    iput-object v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->appId:Ljava/lang/String;

    const-string v7, "providerID"

    .line 2303
    iput-object v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->providerId:Ljava/lang/String;

    const-string v7, "default"

    .line 2304
    iput-object v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->defaultApn:Ljava/lang/String;

    const-string v7, "opt1"

    .line 2305
    iput-object v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn:Ljava/lang/String;

    const-string v7, "opt2"

    .line 2306
    iput-object v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn2:Ljava/lang/String;

    const-string v7, "addrType"

    .line 2307
    iput-object v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addressType:Ljava/lang/String;

    .line 2309
    iget-object v7, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v7, v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setSuplProfile(Lcom/mediatek/lbs/em2/utils/SuplProfile;)V

    .line 2310
    iput-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->curSuplProfile:Lcom/mediatek/lbs/em2/utils/SuplProfile;

    .line 2311
    iget-object v7, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v7}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v7

    invoke-virtual {p0, v0, v7}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    const-string v7, "abc1"

    .line 2313
    iput-object v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->name:Ljava/lang/String;

    const-string v7, "www.hugo.com1"

    .line 2314
    iput-object v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addr:Ljava/lang/String;

    const/16 v7, 0x4d2

    .line 2315
    iput v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->port:I

    .line 2316
    iput-boolean v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->tls:Z

    const-string v7, "1234"

    .line 2317
    iput-object v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->mccMnc:Ljava/lang/String;

    const-string v7, "appId1"

    .line 2318
    iput-object v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->appId:Ljava/lang/String;

    const-string v7, "providerID1"

    .line 2319
    iput-object v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->providerId:Ljava/lang/String;

    const-string v7, "default1"

    .line 2320
    iput-object v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->defaultApn:Ljava/lang/String;

    const-string v7, "opt11"

    .line 2321
    iput-object v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn:Ljava/lang/String;

    const-string v7, "opt21"

    .line 2322
    iput-object v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn2:Ljava/lang/String;

    const/4 v7, 0x0

    .line 2323
    iput-object v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addressType:Ljava/lang/String;

    .line 2325
    iget-object v7, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v7, v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setSuplProfile(Lcom/mediatek/lbs/em2/utils/SuplProfile;)V

    .line 2326
    iput-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->curSuplProfile:Lcom/mediatek/lbs/em2/utils/SuplProfile;

    const-string v7, ""

    .line 2327
    iput-object v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addressType:Ljava/lang/String;

    .line 2328
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2331
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    const/16 v7, 0x1bc

    invoke-virtual {v1, v6, v7, v2}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setSuplProfile(Ljava/lang/String;IZ)V

    .line 2332
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->curSuplProfile:Lcom/mediatek/lbs/em2/utils/SuplProfile;

    iput-object v6, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addr:Ljava/lang/String;

    .line 2333
    iput v7, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->port:I

    .line 2334
    iput-boolean v2, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->tls:Z

    .line 2335
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2337
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    const/16 v6, 0x22b

    invoke-virtual {v1, v5, v6, v3}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setSuplProfile(Ljava/lang/String;IZ)V

    .line 2338
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->curSuplProfile:Lcom/mediatek/lbs/em2/utils/SuplProfile;

    iput-object v5, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addr:Ljava/lang/String;

    .line 2339
    iput v6, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->port:I

    .line 2340
    iput-boolean v3, v1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->tls:Z

    .line 2341
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2344
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v3}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setSuplVersion(I)V

    .line 2345
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput v3, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplVersion:I

    .line 2346
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2348
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v4}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setSuplVersion(I)V

    .line 2349
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput v4, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplVersion:I

    .line 2350
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2353
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v2}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setUpPrefMethod(I)V

    .line 2354
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput v2, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->prefMethod:I

    .line 2355
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2357
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v3}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setUpPrefMethod(I)V

    .line 2358
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput v3, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->prefMethod:I

    .line 2359
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2361
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1, v4}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setUpPrefMethod(I)V

    .line 2362
    iget-object v1, v0, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iput v4, v1, Lcom/mediatek/lbs/em2/utils/UpSetting;->prefMethod:I

    .line 2363
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V

    .line 2366
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsProfilingInfo()Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo;

    .line 2369
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    const-string v1, "abc__"

    const-string v2, "def"

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getSystemProperty(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0, v2}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->stringEquals(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2376
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->coderTest()V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 2378
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    .line 2382
    :goto_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getEmulatorMode()I

    .line 2385
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setResetToDefault()V

    .line 2386
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->applyAgpsConfigToUI()V

    const-string p0, "agpsInterfaceAutoUT test done"

    .line 2388
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->showToast(Ljava/lang/Object;)V

    return-void

    .line 2371
    :cond_0
    new-instance p0, Ljava/lang/RuntimeException;

    const-string v0, "getSystemProperty failed"

    invoke-direct {p0, v0}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method protected applyAgpsConfigToUI()V
    .locals 7

    .line 1829
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    if-nez v0, :cond_0

    const-string p0, "agpsInterface is null"

    .line 1830
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->loge(Ljava/lang/Object;)V

    return-void

    .line 1834
    :cond_0
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getEmulatorMode()I

    move-result v0

    const v1, -0xff0100

    const/high16 v2, -0x10000

    const/4 v3, 0x1

    if-eqz v0, :cond_4

    if-eq v0, v3, :cond_3

    const/4 v4, 0x2

    if-eq v0, v4, :cond_2

    const/4 v4, 0x3

    if-eq v0, v4, :cond_1

    goto :goto_0

    .line 1853
    :cond_1
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewEmulatorMode:Landroid/widget/TextView;

    const-string v4, "EmulatorMode=[COMPORT]"

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1854
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewEmulatorMode:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setTextColor(I)V

    goto :goto_0

    .line 1849
    :cond_2
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewEmulatorMode:Landroid/widget/TextView;

    const-string v4, "EmulatorMode=[Dual Talk]"

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1850
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewEmulatorMode:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setTextColor(I)V

    goto :goto_0

    .line 1845
    :cond_3
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewEmulatorMode:Landroid/widget/TextView;

    const-string v4, "EmulatorMode=[Gemini]"

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1846
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewEmulatorMode:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setTextColor(I)V

    goto :goto_0

    .line 1837
    :cond_4
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->isDebugModeEnabled(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 1838
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewEmulatorMode:Landroid/widget/TextView;

    const-string v4, "EmulatorMode=[Off]"

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1839
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewEmulatorMode:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextColor(I)V

    goto :goto_0

    .line 1841
    :cond_5
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewEmulatorMode:Landroid/widget/TextView;

    const-string v4, ""

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1860
    :goto_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsConfigV24()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v0

    .line 1861
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxEnableAgps:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getAgpsSetting()Lcom/mediatek/lbs/em2/utils/AgpsSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->agpsEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1862
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getAgpsSetting()Lcom/mediatek/lbs/em2/utils/AgpsSetting;

    move-result-object v4

    iget v4, v4, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->agpsProtocol:I

    if-nez v4, :cond_6

    .line 1863
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonUP:Landroid/widget/RadioButton;

    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_1

    .line 1865
    :cond_6
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonCP:Landroid/widget/RadioButton;

    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 1868
    :goto_1
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v4

    iget v4, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->cdmaPreferred:I

    if-nez v4, :cond_7

    .line 1869
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonWCDMAPrefer:Landroid/widget/RadioButton;

    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_2

    .line 1870
    :cond_7
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v4

    iget v4, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->cdmaPreferred:I

    if-ne v4, v3, :cond_8

    .line 1871
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonWCDMAPrefer:Landroid/widget/RadioButton;

    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_2

    .line 1873
    :cond_8
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonCDMAForce:Landroid/widget/RadioButton;

    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 1876
    :goto_2
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v4

    iget v4, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->prefMethod:I

    if-nez v4, :cond_9

    .line 1877
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonMSA:Landroid/widget/RadioButton;

    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_3

    .line 1878
    :cond_9
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v4

    iget v4, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->prefMethod:I

    if-ne v4, v3, :cond_a

    .line 1879
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonMSB:Landroid/widget/RadioButton;

    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_3

    .line 1881
    :cond_a
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonNoPref:Landroid/widget/RadioButton;

    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 1884
    :goto_3
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxMSA:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->msaEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1885
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxMSB:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->msbEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1886
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxECID:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->ecidEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1887
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxOTDOA:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->otdoaEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1888
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAuto:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->autonomousEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1889
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAFLT:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->afltEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1890
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLPP:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->lppEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1892
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v4

    iget v4, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplVersion:I

    if-ne v4, v3, :cond_b

    .line 1893
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonSUPL1:Landroid/widget/RadioButton;

    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_4

    .line 1895
    :cond_b
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonSUPL2:Landroid/widget/RadioButton;

    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 1898
    :goto_4
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v4

    iget v4, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->tlsVersion:I

    if-nez v4, :cond_c

    .line 1899
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonTLS10:Landroid/widget/RadioButton;

    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_5

    .line 1900
    :cond_c
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v4

    iget v4, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->tlsVersion:I

    if-ne v4, v3, :cond_d

    .line 1901
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonTLS11:Landroid/widget/RadioButton;

    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_5

    .line 1903
    :cond_d
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonTLS12:Landroid/widget/RadioButton;

    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 1906
    :goto_5
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxCertVerify:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->caEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1907
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxUdpEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->udpEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1909
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewSuplUt2:Landroid/widget/TextView;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-byte v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->ut2:B

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1910
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewSuplUt3:Landroid/widget/TextView;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-byte v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->ut3:B

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1912
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewSuplVerMinor:Landroid/widget/TextView;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-byte v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplVerMinor:B

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1913
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewSuplVerSerInd:Landroid/widget/TextView;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-byte v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplVerSerInd:B

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1915
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewSlpAddr:Landroid/widget/TextView;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCurSuplProfile()Lcom/mediatek/lbs/em2/utils/SuplProfile;

    move-result-object v5

    iget-object v5, v5, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addr:Ljava/lang/String;

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1916
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewSlpPort:Landroid/widget/TextView;

    .line 1917
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCurSuplProfile()Lcom/mediatek/lbs/em2/utils/SuplProfile;

    move-result-object v5

    iget v5, v5, Lcom/mediatek/lbs/em2/utils/SuplProfile;->port:I

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1918
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxTls:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCurSuplProfile()Lcom/mediatek/lbs/em2/utils/SuplProfile;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/SuplProfile;->tls:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1920
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v4

    iget v4, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopHacc:I

    .line 1921
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopVacc:I

    .line 1922
    iget-object v6, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonMeter:Landroid/widget/RadioButton;

    invoke-virtual {v6}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v6

    if-eqz v6, :cond_e

    .line 1923
    invoke-static {v4}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->calcMeterFromK(I)I

    move-result v4

    .line 1924
    invoke-static {v5}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->calcMeterFromK(I)I

    move-result v5

    .line 1926
    :cond_e
    iget-object v6, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewHAcc:Landroid/widget/TextView;

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v6, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1927
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewVAcc:Landroid/widget/TextView;

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1929
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewLocationAge:Landroid/widget/TextView;

    .line 1930
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopLocAge:I

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1931
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewDelay:Landroid/widget/TextView;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopDelay:I

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1933
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCpSetting()Lcom/mediatek/lbs/em2/utils/CpSetting;

    move-result-object v4

    iget v4, v4, Lcom/mediatek/lbs/em2/utils/CpSetting;->molrPosMethod:I

    if-nez v4, :cond_f

    .line 1934
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonLocationEstimate:Landroid/widget/RadioButton;

    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_6

    .line 1936
    :cond_f
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonAssistanceData:Landroid/widget/RadioButton;

    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 1938
    :goto_6
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxExternalAddr:Landroid/widget/CheckBox;

    .line 1939
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCpSetting()Lcom/mediatek/lbs/em2/utils/CpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/CpSetting;->externalAddrEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1940
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewExternalAddr:Landroid/widget/TextView;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCpSetting()Lcom/mediatek/lbs/em2/utils/CpSetting;

    move-result-object v5

    iget-object v5, v5, Lcom/mediatek/lbs/em2/utils/CpSetting;->externalAddr:Ljava/lang/String;

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1941
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxMlcNumber:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCpSetting()Lcom/mediatek/lbs/em2/utils/CpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/CpSetting;->mlcNumberEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1942
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewMlcNumber:Landroid/widget/TextView;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCpSetting()Lcom/mediatek/lbs/em2/utils/CpSetting;

    move-result-object v5

    iget-object v5, v5, Lcom/mediatek/lbs/em2/utils/CpSetting;->mlcNumber:Ljava/lang/String;

    invoke-virtual {v4, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1943
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxCpAutoReset:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCpSetting()Lcom/mediatek/lbs/em2/utils/CpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpAutoReset:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1944
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxEpcMolrPduEnable:Landroid/widget/CheckBox;

    .line 1945
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCpSetting()Lcom/mediatek/lbs/em2/utils/CpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/CpSetting;->epcMolrLppPayloadEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1947
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxNiAllow:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->niRequest:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1948
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxRoamingAllow:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->roaming:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1949
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxSupl2File:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplLog:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1950
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLogSensitiveData:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->noSensitiveLog:Z

    xor-int/2addr v5, v3

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1951
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxCertFromSdcard:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->certFromSdcard:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1952
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAutoProfileEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->autoProfileEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1953
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxSuplApnEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->apnEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1954
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxSyncToSlp:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->syncToslp:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1955
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxImsiEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->imsiEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1956
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxE911GpsIconEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getAgpsSetting()Lcom/mediatek/lbs/em2/utils/AgpsSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->e911GpsIconEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1957
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeHideWifiBtStatus:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getAgpsSetting()Lcom/mediatek/lbs/em2/utils/AgpsSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->lppeHideWifiBtStatus:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1958
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeNetworkLocationDisable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getAgpsSetting()Lcom/mediatek/lbs/em2/utils/AgpsSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->lppeNetworkLocationDisable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1959
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeCpEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCpSetting()Lcom/mediatek/lbs/em2/utils/CpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpLppeEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1960
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeUpEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->upLppeEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1961
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAospProfileEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->aospProfileEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1962
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxNlpSettings2SuplEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->bindNlpSettingToSupl:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1963
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLbsLogEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getAgpsSetting()Lcom/mediatek/lbs/em2/utils/AgpsSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->lbsLogEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1965
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxIngoreSiForE911:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getAgpsSetting()Lcom/mediatek/lbs/em2/utils/AgpsSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->ignoreSiForE911:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1966
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeCpWlanEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCpSetting()Lcom/mediatek/lbs/em2/utils/CpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpLppeWlanEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1967
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeCpSrnEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCpSetting()Lcom/mediatek/lbs/em2/utils/CpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpLppeSrnEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1968
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeCpSensorEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCpSetting()Lcom/mediatek/lbs/em2/utils/CpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpLppeSensorEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1969
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeCpDbhEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCpSetting()Lcom/mediatek/lbs/em2/utils/CpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpLppeDbhEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1970
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeUpWlanEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->upLppeWlanEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1971
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeUpSrnEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->upLppeSrnEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1972
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeUpSensorEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->upLppeSensorEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1973
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeUpDbhEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->upLppeDbhEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1974
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxUpLppIn2g3gDisable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->upLppIn2g3gDisable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1975
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxUpRrlpIn4gDisable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->upRrlpIn4gDisable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1976
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxUpSiDisable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->upSiDisable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1977
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxDefaultNlpEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getAgpsSetting()Lcom/mediatek/lbs/em2/utils/AgpsSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->defaultNlpEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1978
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxForceOtdoaAssistEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->forceOtdoaAssistReq:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1979
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAospPosModeEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->aospPosModeEnable:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1980
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxPrivacyOverrideEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->privacyOverrideMode:I

    if-lez v5, :cond_10

    move v5, v3

    goto :goto_7

    :cond_10
    const/4 v5, 0x0

    :goto_7
    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1981
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAllowNiForGpsOffEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v5

    iget-boolean v5, v5, Lcom/mediatek/lbs/em2/utils/UpSetting;->allowNiForGpsOff:Z

    invoke-virtual {v4, v5}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1983
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v4

    iget v4, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->ipVersionPrefer:I

    if-nez v4, :cond_11

    .line 1984
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonIpV6:Landroid/widget/RadioButton;

    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_8

    .line 1986
    :cond_11
    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonIpV4:Landroid/widget/RadioButton;

    invoke-virtual {v4, v3}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 1989
    :goto_8
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewTcpKeepAliveInterval:Landroid/widget/TextView;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getUpSetting()Lcom/mediatek/lbs/em2/utils/UpSetting;

    move-result-object v4

    iget v4, v4, Lcom/mediatek/lbs/em2/utils/UpSetting;->tcpKeepAlive:I

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1990
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewLppeCrowdSourceConfident:Landroid/widget/TextView;

    .line 1991
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getAgpsSetting()Lcom/mediatek/lbs/em2/utils/AgpsSetting;

    move-result-object v4

    iget v4, v4, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->lppeCrowdSourceConfident:I

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    .line 1990
    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1992
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxSib8Sib16Enable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getGnssSetting()Lcom/mediatek/lbs/em2/utils/GnssSetting;

    move-result-object v4

    iget-boolean v4, v4, Lcom/mediatek/lbs/em2/utils/GnssSetting;->sib8sib16Enable:Z

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 1994
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getGnssSetting()Lcom/mediatek/lbs/em2/utils/GnssSetting;

    move-result-object v3

    iget-boolean v3, v3, Lcom/mediatek/lbs/em2/utils/GnssSetting;->glonassSatelliteSupport:Z

    const/16 v4, 0x8

    if-nez v3, :cond_12

    .line 1995
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxGlonassSatelliteEnable:Landroid/widget/CheckBox;

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 1996
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAglonassEnable:Landroid/widget/CheckBox;

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 1998
    :cond_12
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getGnssSetting()Lcom/mediatek/lbs/em2/utils/GnssSetting;

    move-result-object v3

    iget-boolean v3, v3, Lcom/mediatek/lbs/em2/utils/GnssSetting;->beidousSatelliteSupport:Z

    if-nez v3, :cond_13

    .line 1999
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxBeidouSatelliteEnable:Landroid/widget/CheckBox;

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 2000
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAbeidouEnable:Landroid/widget/CheckBox;

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 2002
    :cond_13
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getGnssSetting()Lcom/mediatek/lbs/em2/utils/GnssSetting;

    move-result-object v3

    iget-boolean v3, v3, Lcom/mediatek/lbs/em2/utils/GnssSetting;->galileoSatelliteSupport:Z

    if-nez v3, :cond_14

    .line 2003
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxGalileoSatelliteEnable:Landroid/widget/CheckBox;

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 2004
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAgalileoEnable:Landroid/widget/CheckBox;

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 2007
    :cond_14
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxGpsSatelliteEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getGnssSetting()Lcom/mediatek/lbs/em2/utils/GnssSetting;

    move-result-object v4

    iget-boolean v4, v4, Lcom/mediatek/lbs/em2/utils/GnssSetting;->gpsSatelliteEnable:Z

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 2008
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxGlonassSatelliteEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getGnssSetting()Lcom/mediatek/lbs/em2/utils/GnssSetting;

    move-result-object v4

    iget-boolean v4, v4, Lcom/mediatek/lbs/em2/utils/GnssSetting;->glonassSatelliteEnable:Z

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 2009
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxBeidouSatelliteEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getGnssSetting()Lcom/mediatek/lbs/em2/utils/GnssSetting;

    move-result-object v4

    iget-boolean v4, v4, Lcom/mediatek/lbs/em2/utils/GnssSetting;->beidouSatelliteEnable:Z

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 2010
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxGalileoSatelliteEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getGnssSetting()Lcom/mediatek/lbs/em2/utils/GnssSetting;

    move-result-object v4

    iget-boolean v4, v4, Lcom/mediatek/lbs/em2/utils/GnssSetting;->galileoSatelliteEnable:Z

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 2012
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAgpsEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getGnssSetting()Lcom/mediatek/lbs/em2/utils/GnssSetting;

    move-result-object v4

    iget-boolean v4, v4, Lcom/mediatek/lbs/em2/utils/GnssSetting;->aGpsSatelliteEnable:Z

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 2013
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAgpsEnable:Landroid/widget/CheckBox;

    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxGpsSatelliteEnable:Landroid/widget/CheckBox;

    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v4

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 2014
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAglonassEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getGnssSetting()Lcom/mediatek/lbs/em2/utils/GnssSetting;

    move-result-object v4

    iget-boolean v4, v4, Lcom/mediatek/lbs/em2/utils/GnssSetting;->aGlonassSatelliteEnable:Z

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 2015
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAglonassEnable:Landroid/widget/CheckBox;

    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxGlonassSatelliteEnable:Landroid/widget/CheckBox;

    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v4

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 2016
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAbeidouEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getGnssSetting()Lcom/mediatek/lbs/em2/utils/GnssSetting;

    move-result-object v4

    iget-boolean v4, v4, Lcom/mediatek/lbs/em2/utils/GnssSetting;->aBeidouSatelliteEnable:Z

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 2017
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAbeidouEnable:Landroid/widget/CheckBox;

    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxBeidouSatelliteEnable:Landroid/widget/CheckBox;

    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v4

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 2018
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAgalileoEnable:Landroid/widget/CheckBox;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getGnssSetting()Lcom/mediatek/lbs/em2/utils/GnssSetting;

    move-result-object v4

    iget-boolean v4, v4, Lcom/mediatek/lbs/em2/utils/GnssSetting;->aGalileoSatelliteEnable:Z

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 2019
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAgalileoEnable:Landroid/widget/CheckBox;

    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxGalileoSatelliteEnable:Landroid/widget/CheckBox;

    invoke-virtual {v4}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v4

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setEnabled(Z)V

    .line 2021
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getCpSetting()Lcom/mediatek/lbs/em2/utils/CpSetting;

    move-result-object v3

    iget-boolean v3, v3, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpLppeSupport:Z

    const-string v4, "Yes"

    const-string v5, "No"

    if-eqz v3, :cond_15

    .line 2022
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewCpLppeSupported:Landroid/widget/TextView;

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 2023
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewCpLppeSupported:Landroid/widget/TextView;

    invoke-virtual {v3, v1}, Landroid/widget/TextView;->setTextColor(I)V

    goto :goto_9

    .line 2025
    :cond_15
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewCpLppeSupported:Landroid/widget/TextView;

    invoke-virtual {v3, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 2026
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewCpLppeSupported:Landroid/widget/TextView;

    invoke-virtual {v3, v2}, Landroid/widget/TextView;->setTextColor(I)V

    .line 2029
    :goto_9
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getGnssSetting()Lcom/mediatek/lbs/em2/utils/GnssSetting;

    move-result-object v0

    iget-boolean v0, v0, Lcom/mediatek/lbs/em2/utils/GnssSetting;->lppeSupport:Z

    if-eqz v0, :cond_16

    .line 2030
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewGnssLppeSupported:Landroid/widget/TextView;

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 2031
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewGnssLppeSupported:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextColor(I)V

    goto :goto_a

    .line 2033
    :cond_16
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewGnssLppeSupported:Landroid/widget/TextView;

    invoke-virtual {v0, v5}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 2034
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewGnssLppeSupported:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setTextColor(I)V

    .line 2037
    :goto_a
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->setLayoutDependency()V

    .line 2039
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->showAgpsProfilingInfo()V

    return-void
.end method

.method protected compareAgpsConfig(Lcom/mediatek/lbs/em2/utils/AgpsConfig;Lcom/mediatek/lbs/em2/utils/AgpsConfig;)V
    .locals 2

    .line 2559
    iget-object v0, p1, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->agpsSetting:Lcom/mediatek/lbs/em2/utils/AgpsSetting;

    iget-object v1, p2, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->agpsSetting:Lcom/mediatek/lbs/em2/utils/AgpsSetting;

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareAgpsSetting(Lcom/mediatek/lbs/em2/utils/AgpsSetting;Lcom/mediatek/lbs/em2/utils/AgpsSetting;)V

    .line 2560
    iget-object v0, p1, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->cpSetting:Lcom/mediatek/lbs/em2/utils/CpSetting;

    iget-object v1, p2, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->cpSetting:Lcom/mediatek/lbs/em2/utils/CpSetting;

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareCpSetting(Lcom/mediatek/lbs/em2/utils/CpSetting;Lcom/mediatek/lbs/em2/utils/CpSetting;)V

    .line 2561
    iget-object v0, p1, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    iget-object v1, p2, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->upSetting:Lcom/mediatek/lbs/em2/utils/UpSetting;

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareUpSetting(Lcom/mediatek/lbs/em2/utils/UpSetting;Lcom/mediatek/lbs/em2/utils/UpSetting;)V

    .line 2562
    iget-object p1, p1, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->curSuplProfile:Lcom/mediatek/lbs/em2/utils/SuplProfile;

    iget-object p2, p2, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->curSuplProfile:Lcom/mediatek/lbs/em2/utils/SuplProfile;

    invoke-virtual {p0, p1, p2}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->compareSuplProfile(Lcom/mediatek/lbs/em2/utils/SuplProfile;Lcom/mediatek/lbs/em2/utils/SuplProfile;)V

    return-void
.end method

.method protected compareAgpsSetting(Lcom/mediatek/lbs/em2/utils/AgpsSetting;Lcom/mediatek/lbs/em2/utils/AgpsSetting;)V
    .locals 3

    .line 2453
    iget-boolean p0, p1, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->agpsEnable:Z

    iget-boolean v0, p2, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->agpsEnable:Z

    const-string v1, " "

    if-ne p0, v0, :cond_2

    .line 2457
    iget p0, p1, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->agpsProtocol:I

    iget v0, p2, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->agpsProtocol:I

    if-ne p0, v0, :cond_1

    .line 2461
    iget-boolean p0, p1, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->gpevt:Z

    iget-boolean v0, p2, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->gpevt:Z

    if-ne p0, v0, :cond_0

    return-void

    .line 2462
    :cond_0
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "gpevt failed "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p1, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->gpevt:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p2, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->gpevt:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2458
    :cond_1
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "agpsProtocol failed "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->agpsProtocol:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p2, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->agpsProtocol:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2454
    :cond_2
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "agpsEnable failed "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p1, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->agpsEnable:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p2, Lcom/mediatek/lbs/em2/utils/AgpsSetting;->agpsEnable:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method protected compareCpSetting(Lcom/mediatek/lbs/em2/utils/CpSetting;Lcom/mediatek/lbs/em2/utils/CpSetting;)V
    .locals 5

    .line 2468
    iget v0, p1, Lcom/mediatek/lbs/em2/utils/CpSetting;->molrPosMethod:I

    iget v1, p2, Lcom/mediatek/lbs/em2/utils/CpSetting;->molrPosMethod:I

    const-string v2, " "

    if-ne v0, v1, :cond_5

    .line 2472
    iget-boolean v0, p1, Lcom/mediatek/lbs/em2/utils/CpSetting;->externalAddrEnable:Z

    iget-boolean v1, p2, Lcom/mediatek/lbs/em2/utils/CpSetting;->externalAddrEnable:Z

    if-ne v0, v1, :cond_4

    .line 2476
    iget-object v0, p1, Lcom/mediatek/lbs/em2/utils/CpSetting;->externalAddr:Ljava/lang/String;

    iget-object v1, p2, Lcom/mediatek/lbs/em2/utils/CpSetting;->externalAddr:Ljava/lang/String;

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->stringEquals(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    const-string v1, "]"

    const-string v3, "] ["

    if-eqz v0, :cond_3

    .line 2480
    iget-boolean v0, p1, Lcom/mediatek/lbs/em2/utils/CpSetting;->mlcNumberEnable:Z

    iget-boolean v4, p2, Lcom/mediatek/lbs/em2/utils/CpSetting;->mlcNumberEnable:Z

    if-ne v0, v4, :cond_2

    .line 2484
    iget-object v0, p1, Lcom/mediatek/lbs/em2/utils/CpSetting;->mlcNumber:Ljava/lang/String;

    iget-object v4, p2, Lcom/mediatek/lbs/em2/utils/CpSetting;->mlcNumber:Ljava/lang/String;

    invoke-virtual {p0, v0, v4}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->stringEquals(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_1

    .line 2488
    iget-boolean p0, p1, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpAutoReset:Z

    iget-boolean v0, p2, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpAutoReset:Z

    if-ne p0, v0, :cond_0

    return-void

    .line 2489
    :cond_0
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "cpAutoReset failed "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p1, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpAutoReset:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p2, Lcom/mediatek/lbs/em2/utils/CpSetting;->cpAutoReset:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2485
    :cond_1
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "mlcNumber failed ["

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/utils/CpSetting;->mlcNumber:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p2, Lcom/mediatek/lbs/em2/utils/CpSetting;->mlcNumber:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2481
    :cond_2
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mlcNumberEnable failed "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p1, Lcom/mediatek/lbs/em2/utils/CpSetting;->mlcNumberEnable:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p2, Lcom/mediatek/lbs/em2/utils/CpSetting;->mlcNumberEnable:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2477
    :cond_3
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "externalAddr failed ["

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/utils/CpSetting;->externalAddr:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p2, Lcom/mediatek/lbs/em2/utils/CpSetting;->externalAddr:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2473
    :cond_4
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "externalAddrEnable failed "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p1, Lcom/mediatek/lbs/em2/utils/CpSetting;->externalAddrEnable:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p2, Lcom/mediatek/lbs/em2/utils/CpSetting;->externalAddrEnable:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2469
    :cond_5
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "molrPosMethod failed "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Lcom/mediatek/lbs/em2/utils/CpSetting;->molrPosMethod:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p2, Lcom/mediatek/lbs/em2/utils/CpSetting;->molrPosMethod:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method protected compareSuplProfile(Lcom/mediatek/lbs/em2/utils/SuplProfile;Lcom/mediatek/lbs/em2/utils/SuplProfile;)V
    .locals 5

    .line 2408
    iget-object v0, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->name:Ljava/lang/String;

    iget-object v1, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->name:Ljava/lang/String;

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->stringEquals(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    const-string v1, "]"

    const-string v2, "] ["

    if-eqz v0, :cond_a

    .line 2412
    iget-object v0, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addr:Ljava/lang/String;

    iget-object v3, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addr:Ljava/lang/String;

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->stringEquals(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 2416
    iget v0, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->port:I

    iget v3, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->port:I

    const-string v4, " "

    if-ne v0, v3, :cond_8

    .line 2419
    iget-boolean v0, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->tls:Z

    iget-boolean v3, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->tls:Z

    if-ne v0, v3, :cond_7

    .line 2422
    iget-object v0, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->mccMnc:Ljava/lang/String;

    iget-object v3, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->mccMnc:Ljava/lang/String;

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->stringEquals(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 2426
    iget-object v0, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->appId:Ljava/lang/String;

    iget-object v3, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->appId:Ljava/lang/String;

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->stringEquals(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 2430
    iget-object v0, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->providerId:Ljava/lang/String;

    iget-object v3, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->providerId:Ljava/lang/String;

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->stringEquals(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 2434
    iget-object v0, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->defaultApn:Ljava/lang/String;

    iget-object v3, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->defaultApn:Ljava/lang/String;

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->stringEquals(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 2438
    iget-object v0, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn:Ljava/lang/String;

    iget-object v3, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn:Ljava/lang/String;

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->stringEquals(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 2442
    iget-object v0, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn2:Ljava/lang/String;

    iget-object v3, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn2:Ljava/lang/String;

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->stringEquals(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 2446
    iget-object v0, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addressType:Ljava/lang/String;

    iget-object v3, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addressType:Ljava/lang/String;

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->stringEquals(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_0

    return-void

    .line 2447
    :cond_0
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "addressType failed ["

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addressType:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addressType:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2443
    :cond_1
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "optionalApn2 failed ["

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn2:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn2:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2439
    :cond_2
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "optionalApn failed ["

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->optionalApn:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2435
    :cond_3
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "defaultApn failed ["

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->defaultApn:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->defaultApn:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2431
    :cond_4
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "providerId failed ["

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->providerId:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->providerId:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2427
    :cond_5
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "appId failed ["

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->appId:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->appId:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2423
    :cond_6
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mccMnc failed ["

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->mccMnc:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->mccMnc:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2420
    :cond_7
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "tls failed "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->tls:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->tls:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2417
    :cond_8
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "port failed "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->port:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->port:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2413
    :cond_9
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "addr failed ["

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addr:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->addr:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2409
    :cond_a
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "name failed ["

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/utils/SuplProfile;->name:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->name:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method protected compareUpSetting(Lcom/mediatek/lbs/em2/utils/UpSetting;Lcom/mediatek/lbs/em2/utils/UpSetting;)V
    .locals 3

    .line 2496
    iget-boolean p0, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->caEnable:Z

    iget-boolean v0, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->caEnable:Z

    const-string v1, " "

    if-ne p0, v0, :cond_e

    .line 2500
    iget-boolean p0, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->niRequest:Z

    iget-boolean v0, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->niRequest:Z

    if-ne p0, v0, :cond_d

    .line 2504
    iget-boolean p0, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->roaming:Z

    iget-boolean v0, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->roaming:Z

    if-ne p0, v0, :cond_c

    .line 2508
    iget p0, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->cdmaPreferred:I

    iget v0, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->cdmaPreferred:I

    if-ne p0, v0, :cond_b

    .line 2512
    iget p0, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->prefMethod:I

    iget v0, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->prefMethod:I

    if-ne p0, v0, :cond_a

    .line 2516
    iget p0, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplVersion:I

    iget v0, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplVersion:I

    if-ne p0, v0, :cond_9

    .line 2520
    iget-boolean p0, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplLog:Z

    iget-boolean v0, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplLog:Z

    if-ne p0, v0, :cond_8

    .line 2524
    iget-boolean p0, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->msaEnable:Z

    iget-boolean v0, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->msaEnable:Z

    if-ne p0, v0, :cond_7

    .line 2528
    iget-boolean p0, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->msbEnable:Z

    iget-boolean v0, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->msbEnable:Z

    if-ne p0, v0, :cond_6

    .line 2532
    iget-boolean p0, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->ecidEnable:Z

    iget-boolean v0, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->ecidEnable:Z

    if-ne p0, v0, :cond_5

    .line 2536
    iget-boolean p0, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->otdoaEnable:Z

    iget-boolean v0, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->otdoaEnable:Z

    if-ne p0, v0, :cond_4

    .line 2540
    iget p0, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopHacc:I

    iget v0, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopHacc:I

    if-ne p0, v0, :cond_3

    .line 2544
    iget p0, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopVacc:I

    iget v0, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopVacc:I

    if-ne p0, v0, :cond_2

    .line 2548
    iget p0, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopLocAge:I

    iget v0, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopLocAge:I

    if-ne p0, v0, :cond_1

    .line 2552
    iget p0, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopDelay:I

    iget v0, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopDelay:I

    if-ne p0, v0, :cond_0

    return-void

    .line 2553
    :cond_0
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "qopDelay failed "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopDelay:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopDelay:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2549
    :cond_1
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "qopLocAge failed "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopLocAge:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopLocAge:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2545
    :cond_2
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "qopVacc failed "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopVacc:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopVacc:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2541
    :cond_3
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "qopHacc failed "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopHacc:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->qopHacc:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2537
    :cond_4
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "otdoaEnable failed "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->otdoaEnable:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->otdoaEnable:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2533
    :cond_5
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "ecidEnable failed "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->ecidEnable:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->ecidEnable:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2529
    :cond_6
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "msbEnable failed "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->msbEnable:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->msbEnable:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2525
    :cond_7
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "msaEnable failed "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->msaEnable:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->msaEnable:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2521
    :cond_8
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "suplLog failed "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplLog:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplLog:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2517
    :cond_9
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "suplVersion failed "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplVersion:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->suplVersion:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2513
    :cond_a
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "prefMethod failed "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->prefMethod:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->prefMethod:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2509
    :cond_b
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "cdmaPreferred failed "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->cdmaPreferred:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->cdmaPreferred:I

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2505
    :cond_c
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "roaming failed "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->roaming:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->roaming:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2501
    :cond_d
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "niRequest failed "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->niRequest:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->niRequest:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 2497
    :cond_e
    new-instance p0, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "caEnable failed "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p1, Lcom/mediatek/lbs/em2/utils/UpSetting;->caEnable:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p2, Lcom/mediatek/lbs/em2/utils/UpSetting;->caEnable:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method protected enableDebugMode(Z)V
    .locals 2

    .line 2107
    new-instance v0, Ljava/io/File;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Landroid/app/Activity;->getFilesDir()Ljava/io/File;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p0, "/../show"

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    if-eqz p1, :cond_0

    .line 2110
    :try_start_0
    invoke-virtual {v0}, Ljava/io/File;->createNewFile()Z
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 2112
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    goto :goto_0

    .line 2115
    :cond_0
    invoke-virtual {v0}, Ljava/io/File;->delete()Z

    :goto_0
    return-void
.end method

.method protected getAreaEventType()I
    .locals 2

    .line 1813
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonEnter:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 1816
    :cond_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonInside:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 p0, 0x1

    return p0

    .line 1819
    :cond_1
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonOutside:Landroid/widget/RadioButton;

    invoke-virtual {v0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v0

    if-eqz v0, :cond_2

    const/4 p0, 0x2

    return p0

    .line 1822
    :cond_2
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonLeave:Landroid/widget/RadioButton;

    invoke-virtual {p0}, Landroid/widget/RadioButton;->isChecked()Z

    move-result p0

    if-eqz p0, :cond_3

    const/4 p0, 0x3

    return p0

    :cond_3
    return v1
.end method

.method protected initAgpsInterface()V
    .locals 1

    .line 1805
    :try_start_0
    new-instance v0, Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-direct {v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;-><init>()V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    const-string v0, "agps interface connection failure"

    .line 1807
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->loge(Ljava/lang/Object;)V

    .line 1808
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method protected initPopupMenu()V
    .locals 11

    .line 404
    new-instance v0, Landroid/widget/PopupMenu;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonSuplUt2:Landroid/widget/Button;

    invoke-direct {v0, p0, v1}, Landroid/widget/PopupMenu;-><init>(Landroid/content/Context;Landroid/view/View;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupSuplUt2:Landroid/widget/PopupMenu;

    const/4 v0, 0x1

    move v1, v0

    :goto_0
    const/16 v2, 0x3c

    const-string v3, ""

    const/4 v4, 0x0

    if-gt v1, v2, :cond_0

    .line 406
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupSuplUt2:Landroid/widget/PopupMenu;

    invoke-virtual {v2}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v2

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v2, v4, v1, v4, v3}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 408
    :cond_0
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupSuplUt2:Landroid/widget/PopupMenu;

    new-instance v5, Lcom/mediatek/lbs/em2/ui/LbsAgps$4;

    invoke-direct {v5, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$4;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    .line 409
    invoke-virtual {v1, v5}, Landroid/widget/PopupMenu;->setOnMenuItemClickListener(Landroid/widget/PopupMenu$OnMenuItemClickListener;)V

    .line 419
    new-instance v1, Landroid/widget/PopupMenu;

    iget-object v5, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonSuplUt3:Landroid/widget/Button;

    invoke-direct {v1, p0, v5}, Landroid/widget/PopupMenu;-><init>(Landroid/content/Context;Landroid/view/View;)V

    iput-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupSuplUt3:Landroid/widget/PopupMenu;

    move v1, v0

    :goto_1
    if-gt v1, v2, :cond_1

    .line 421
    iget-object v5, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupSuplUt3:Landroid/widget/PopupMenu;

    invoke-virtual {v5}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v5

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v5, v4, v1, v4, v6}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    add-int/lit8 v1, v1, 0x1

    goto :goto_1

    .line 423
    :cond_1
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupSuplUt3:Landroid/widget/PopupMenu;

    new-instance v2, Lcom/mediatek/lbs/em2/ui/LbsAgps$5;

    invoke-direct {v2, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$5;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    .line 424
    invoke-virtual {v1, v2}, Landroid/widget/PopupMenu;->setOnMenuItemClickListener(Landroid/widget/PopupMenu$OnMenuItemClickListener;)V

    .line 434
    new-instance v1, Landroid/widget/PopupMenu;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonSlpTemplate:Landroid/widget/Button;

    invoke-direct {v1, p0, v2}, Landroid/widget/PopupMenu;-><init>(Landroid/content/Context;Landroid/view/View;)V

    iput-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupSlpTemplate:Landroid/widget/PopupMenu;

    .line 435
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mXml:Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;

    if-eqz v1, :cond_3

    move v1, v4

    .line 436
    :goto_2
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mXml:Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;

    invoke-virtual {v2}, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getSuplProfiles()Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_2

    .line 437
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mXml:Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;

    invoke-virtual {v2}, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;->getAgpsConfig()Lcom/mediatek/lbs/em2/utils/AgpsConfig;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mediatek/lbs/em2/utils/AgpsConfig;->getSuplProfiles()Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/lbs/em2/utils/SuplProfile;

    .line 438
    iget-object v5, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupSlpTemplate:Landroid/widget/PopupMenu;

    invoke-virtual {v5}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v5

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "["

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, v2, Lcom/mediatek/lbs/em2/utils/SuplProfile;->name:Ljava/lang/String;

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "]"

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v5, v4, v1, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    add-int/lit8 v1, v1, 0x1

    goto :goto_2

    .line 442
    :cond_2
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupSlpTemplate:Landroid/widget/PopupMenu;

    new-instance v2, Lcom/mediatek/lbs/em2/ui/LbsAgps$6;

    invoke-direct {v2, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$6;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    .line 443
    invoke-virtual {v1, v2}, Landroid/widget/PopupMenu;->setOnMenuItemClickListener(Landroid/widget/PopupMenu$OnMenuItemClickListener;)V

    .line 458
    :cond_3
    new-instance v1, Landroid/widget/PopupMenu;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonTriggerTest:Landroid/widget/Button;

    invoke-direct {v1, p0, v2}, Landroid/widget/PopupMenu;-><init>(Landroid/content/Context;Landroid/view/View;)V

    iput-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTriggerTest:Landroid/widget/PopupMenu;

    .line 459
    invoke-virtual {v1}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v1

    const-string v2, "Coder Test"

    invoke-interface {v1, v4, v4, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 460
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTriggerTest:Landroid/widget/PopupMenu;

    invoke-virtual {v1}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v1

    const-string v2, "AgpsInterface Auto UT"

    invoke-interface {v1, v4, v0, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 461
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTriggerTest:Landroid/widget/PopupMenu;

    invoke-virtual {v1}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v1

    const/4 v2, 0x2

    const-string v5, "NI request"

    invoke-interface {v1, v4, v2, v4, v5}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 462
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTriggerTest:Landroid/widget/PopupMenu;

    invoke-virtual {v1}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v1

    const/4 v5, 0x3

    const-string v6, "Test 03"

    invoke-interface {v1, v4, v5, v4, v6}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 463
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTriggerTest:Landroid/widget/PopupMenu;

    invoke-virtual {v1}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v1

    const/4 v6, 0x4

    const-string v7, "Test 04"

    invoke-interface {v1, v4, v6, v4, v7}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 464
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTriggerTest:Landroid/widget/PopupMenu;

    invoke-virtual {v1}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v1

    const/4 v7, 0x5

    const-string v8, "Test 05"

    invoke-interface {v1, v4, v7, v4, v8}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 465
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTriggerTest:Landroid/widget/PopupMenu;

    invoke-virtual {v1}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v1

    const/4 v8, 0x6

    const-string v9, "Test 06"

    invoke-interface {v1, v4, v8, v4, v9}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 466
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTriggerTest:Landroid/widget/PopupMenu;

    invoke-virtual {v1}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v1

    const/4 v9, 0x7

    const-string v10, "Test 07"

    invoke-interface {v1, v4, v9, v4, v10}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 467
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTriggerTest:Landroid/widget/PopupMenu;

    new-instance v10, Lcom/mediatek/lbs/em2/ui/LbsAgps$7;

    invoke-direct {v10, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$7;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    .line 468
    invoke-virtual {v1, v10}, Landroid/widget/PopupMenu;->setOnMenuItemClickListener(Landroid/widget/PopupMenu$OnMenuItemClickListener;)V

    .line 501
    new-instance v1, Landroid/widget/PopupMenu;

    iget-object v10, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonTestButton:Landroid/widget/Button;

    invoke-direct {v1, p0, v10}, Landroid/widget/PopupMenu;-><init>(Landroid/content/Context;Landroid/view/View;)V

    iput-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    .line 502
    invoke-virtual {v1}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v1

    const-string v10, "agps_open_gps_req"

    invoke-interface {v1, v4, v4, v4, v10}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 503
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v1}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v1

    const-string v10, "agps_close_gps_req"

    invoke-interface {v1, v4, v0, v4, v10}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 504
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const-string v1, "agps_reset_gps_req"

    invoke-interface {v0, v4, v2, v4, v1}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 505
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const-string v1, "ni_notify1 notify"

    invoke-interface {v0, v4, v5, v4, v1}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 506
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const-string v1, "ni_notify1 verify"

    invoke-interface {v0, v4, v6, v4, v1}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 507
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const-string v1, "ni_notify2 notify"

    invoke-interface {v0, v4, v7, v4, v1}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 508
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const-string v1, "ni_notify2 verify"

    invoke-interface {v0, v4, v8, v4, v1}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 509
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const-string v1, "data_conn_req"

    invoke-interface {v0, v4, v9, v4, v1}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 510
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/16 v1, 0x8

    const-string v2, "data_conn_release"

    invoke-interface {v0, v4, v1, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 511
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/16 v1, 0x9

    const-string v2, "md_sim_info_req"

    invoke-interface {v0, v4, v1, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 512
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/16 v1, 0xa

    const-string v2, "md_data_conn_state_req"

    invoke-interface {v0, v4, v1, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 513
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/16 v1, 0xb

    const-string v2, "lppe_capability"

    invoke-interface {v0, v4, v1, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 514
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/16 v1, 0xc

    const-string v2, "lppe_start_meas"

    invoke-interface {v0, v4, v1, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 515
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/16 v1, 0xd

    const-string v2, "lppe_stop_meas"

    invoke-interface {v0, v4, v1, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 516
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/16 v1, 0xe

    const-string v2, "lppe_query_meas"

    invoke-interface {v0, v4, v1, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 517
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/16 v1, 0xf

    const-string v2, "agps_md_huge_data"

    invoke-interface {v0, v4, v1, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 518
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/16 v1, 0x10

    const-string v2, "agps_open_gps_rejected"

    invoke-interface {v0, v4, v1, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 519
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/16 v1, 0x11

    const-string v2, "ni_notify3 notify"

    invoke-interface {v0, v4, v1, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 520
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/16 v1, 0x12

    const-string v2, "Test 18"

    invoke-interface {v0, v4, v1, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 521
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/16 v1, 0x13

    const-string v2, "Test 19"

    invoke-interface {v0, v4, v1, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 522
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/16 v1, 0x14

    const-string v2, "Test 20"

    invoke-interface {v0, v4, v1, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 523
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/16 v1, 0x15

    const-string v2, "Test 21"

    invoke-interface {v0, v4, v1, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 524
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/16 v1, 0x16

    const-string v2, "Test 22"

    invoke-interface {v0, v4, v1, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 525
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/16 v1, 0x17

    const-string v2, "Test 23"

    invoke-interface {v0, v4, v1, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 526
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    invoke-virtual {v0}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v0

    const/16 v1, 0x18

    const-string v2, "Test 24"

    invoke-interface {v0, v4, v1, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    .line 528
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupTestButton:Landroid/widget/PopupMenu;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$8;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$8;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    .line 529
    invoke-virtual {v0, v1}, Landroid/widget/PopupMenu;->setOnMenuItemClickListener(Landroid/widget/PopupMenu$OnMenuItemClickListener;)V

    .line 537
    new-instance v0, Landroid/widget/PopupMenu;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonSuplVerMinor:Landroid/widget/Button;

    invoke-direct {v0, p0, v1}, Landroid/widget/PopupMenu;-><init>(Landroid/content/Context;Landroid/view/View;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupSuplVerMinor:Landroid/widget/PopupMenu;

    move v0, v4

    :goto_3
    if-gt v0, v7, :cond_4

    .line 539
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupSuplVerMinor:Landroid/widget/PopupMenu;

    invoke-virtual {v1}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v4, v0, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    add-int/lit8 v0, v0, 0x1

    goto :goto_3

    .line 541
    :cond_4
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupSuplVerMinor:Landroid/widget/PopupMenu;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$9;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$9;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    .line 542
    invoke-virtual {v0, v1}, Landroid/widget/PopupMenu;->setOnMenuItemClickListener(Landroid/widget/PopupMenu$OnMenuItemClickListener;)V

    .line 552
    new-instance v0, Landroid/widget/PopupMenu;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonSuplVerSerInd:Landroid/widget/Button;

    invoke-direct {v0, p0, v1}, Landroid/widget/PopupMenu;-><init>(Landroid/content/Context;Landroid/view/View;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupSuplVerSerInd:Landroid/widget/PopupMenu;

    move v0, v4

    :goto_4
    if-gt v0, v7, :cond_5

    .line 554
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupSuplVerSerInd:Landroid/widget/PopupMenu;

    invoke-virtual {v1}, Landroid/widget/PopupMenu;->getMenu()Landroid/view/Menu;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v4, v0, v4, v2}, Landroid/view/Menu;->add(IIILjava/lang/CharSequence;)Landroid/view/MenuItem;

    add-int/lit8 v0, v0, 0x1

    goto :goto_4

    .line 556
    :cond_5
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPopupSuplVerSerInd:Landroid/widget/PopupMenu;

    new-instance v1, Lcom/mediatek/lbs/em2/ui/LbsAgps$10;

    invoke-direct {v1, p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps$10;-><init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V

    .line 557
    invoke-virtual {v0, v1}, Landroid/widget/PopupMenu;->setOnMenuItemClickListener(Landroid/widget/PopupMenu$OnMenuItemClickListener;)V

    return-void
.end method

.method protected initUI()V
    .locals 5

    const v0, 0x7f0500a6

    .line 1360
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mLayoutDebug:Landroid/widget/LinearLayout;

    const v0, 0x7f050025

    .line 1361
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonTriggerTest:Landroid/widget/Button;

    const v0, 0x7f050023

    .line 1362
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonTestButton:Landroid/widget/Button;

    const v0, 0x7f050016

    .line 1363
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonResetAgpsd:Landroid/widget/Button;

    const v0, 0x7f05010f

    .line 1364
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    const v0, 0x7f0500fa

    .line 1365
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewEmulatorMode:Landroid/widget/TextView;

    const v0, 0x7f050107

    .line 1367
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextLppeServiceInstalled:Landroid/widget/TextView;

    const v0, 0x7f050115

    .line 1368
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewUncaliPresureSupported:Landroid/widget/TextView;

    const v0, 0x7f0500f3

    .line 1369
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewCpLppeSupported:Landroid/widget/TextView;

    const v0, 0x7f050101

    .line 1370
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewGnssLppeSupported:Landroid/widget/TextView;

    const v0, 0x7f05010e

    .line 1372
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewProfilingInfo:Landroid/widget/TextView;

    const v0, 0x7f05003e

    .line 1374
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxEnableAgps:Landroid/widget/CheckBox;

    const v0, 0x7f0500c0

    .line 1376
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonUP:Landroid/widget/RadioButton;

    const v0, 0x7f0500ac

    .line 1377
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonCP:Landroid/widget/RadioButton;

    const v0, 0x7f0500a9

    .line 1379
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mLayoutUpSetting:Landroid/widget/LinearLayout;

    const v0, 0x7f0500a4

    .line 1381
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mLayoutCdmaSetting:Landroid/widget/LinearLayout;

    const v0, 0x7f0500c1

    .line 1382
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonWCDMAPrefer:Landroid/widget/RadioButton;

    const v0, 0x7f0500ab

    .line 1383
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonCDMAForce:Landroid/widget/RadioButton;

    const v0, 0x7f0500b7

    .line 1385
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonMSA:Landroid/widget/RadioButton;

    const v0, 0x7f0500b8

    .line 1386
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonMSB:Landroid/widget/RadioButton;

    const v0, 0x7f0500bb

    .line 1387
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonNoPref:Landroid/widget/RadioButton;

    const v0, 0x7f05005b

    .line 1389
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxMSA:Landroid/widget/CheckBox;

    const v0, 0x7f05005c

    .line 1390
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxMSB:Landroid/widget/CheckBox;

    const v0, 0x7f05003d

    .line 1391
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxECID:Landroid/widget/CheckBox;

    const v0, 0x7f050060

    .line 1392
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxOTDOA:Landroid/widget/CheckBox;

    const v0, 0x7f050035

    .line 1393
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAuto:Landroid/widget/CheckBox;

    const v0, 0x7f05002c

    .line 1394
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAFLT:Landroid/widget/CheckBox;

    const v0, 0x7f050049

    .line 1395
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLPP:Landroid/widget/CheckBox;

    const v0, 0x7f0500c2

    .line 1397
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonSUPL1:Landroid/widget/RadioButton;

    const v0, 0x7f0500c3

    .line 1398
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonSUPL2:Landroid/widget/RadioButton;

    const v0, 0x7f0500c4

    .line 1400
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonTLS10:Landroid/widget/RadioButton;

    const v0, 0x7f0500c5

    .line 1401
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonTLS11:Landroid/widget/RadioButton;

    const v0, 0x7f0500c6

    .line 1402
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonTLS12:Landroid/widget/RadioButton;

    const v0, 0x7f05006e

    .line 1404
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxCertVerify:Landroid/widget/CheckBox;

    const v0, 0x7f050069

    .line 1405
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxUdpEnable:Landroid/widget/CheckBox;

    const v0, 0x7f05001d

    .line 1407
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonSuplUt2:Landroid/widget/Button;

    const v0, 0x7f050120

    .line 1408
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewSuplUt2:Landroid/widget/TextView;

    const v0, 0x7f05001e

    .line 1409
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonSuplUt3:Landroid/widget/Button;

    const v0, 0x7f050121

    .line 1410
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewSuplUt3:Landroid/widget/TextView;

    const v0, 0x7f05001a

    .line 1412
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonSlpTemplate:Landroid/widget/Button;

    const v0, 0x7f050112

    .line 1414
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewSlpAddr:Landroid/widget/TextView;

    const v0, 0x7f050018

    .line 1415
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonSlpAddr:Landroid/widget/Button;

    const v0, 0x7f050113

    .line 1416
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewSlpPort:Landroid/widget/TextView;

    const v0, 0x7f050019

    .line 1417
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonSlpPort:Landroid/widget/Button;

    const v0, 0x7f050068

    .line 1418
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxTls:Landroid/widget/CheckBox;

    const v0, 0x7f05001f

    .line 1420
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonSuplVerMinor:Landroid/widget/Button;

    const v0, 0x7f050122

    .line 1421
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewSuplVerMinor:Landroid/widget/TextView;

    const v0, 0x7f050020

    .line 1422
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonSuplVerSerInd:Landroid/widget/Button;

    const v0, 0x7f050123

    .line 1423
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewSuplVerSerInd:Landroid/widget/TextView;

    const v0, 0x7f0500a8

    .line 1426
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mLayoutSUPL2:Landroid/widget/LinearLayout;

    const v0, 0x7f050014

    .line 1428
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonPeriodicStart:Landroid/widget/Button;

    const v0, 0x7f050013

    .line 1429
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonPeriodicAbort:Landroid/widget/Button;

    const v0, 0x7f050002

    .line 1431
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonAreaStart:Landroid/widget/Button;

    const v0, 0x7f050001

    .line 1432
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonAreaAbort:Landroid/widget/Button;

    const v0, 0x7f0500ad

    .line 1434
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonEnter:Landroid/widget/RadioButton;

    const v0, 0x7f0500b1

    .line 1435
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonInside:Landroid/widget/RadioButton;

    const v0, 0x7f0500bc

    .line 1436
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonOutside:Landroid/widget/RadioButton;

    const v0, 0x7f0500b5

    .line 1437
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonLeave:Landroid/widget/RadioButton;

    const v0, 0x7f050017

    .line 1439
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ToggleButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonShowQoP:Landroid/widget/ToggleButton;

    const v0, 0x7f0500a7

    .line 1440
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mLayoutQoP:Landroid/widget/LinearLayout;

    const v0, 0x7f0500b4

    .line 1441
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonKValue:Landroid/widget/RadioButton;

    const v0, 0x7f0500b9

    .line 1442
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonMeter:Landroid/widget/RadioButton;

    const v0, 0x7f050102

    .line 1444
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewHAcc:Landroid/widget/TextView;

    const v0, 0x7f05000e

    .line 1445
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonHAcc:Landroid/widget/Button;

    const v0, 0x7f050116

    .line 1446
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewVAcc:Landroid/widget/TextView;

    const v0, 0x7f050026

    .line 1447
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonVAcc:Landroid/widget/Button;

    const v0, 0x7f050104

    .line 1448
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewLocationAge:Landroid/widget/TextView;

    const v0, 0x7f05000f

    .line 1449
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonLocationAge:Landroid/widget/Button;

    const v0, 0x7f0500f4

    .line 1450
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewDelay:Landroid/widget/TextView;

    const v0, 0x7f050007

    .line 1451
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonDelay:Landroid/widget/Button;

    const v0, 0x7f0500a5

    .line 1453
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mLayoutCpSetting:Landroid/widget/LinearLayout;

    const v0, 0x7f0500b6

    .line 1455
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonLocationEstimate:Landroid/widget/RadioButton;

    const v0, 0x7f0500aa

    .line 1456
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonAssistanceData:Landroid/widget/RadioButton;

    const v0, 0x7f050042

    .line 1458
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxExternalAddr:Landroid/widget/CheckBox;

    const v0, 0x7f0500fb

    .line 1459
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewExternalAddr:Landroid/widget/TextView;

    const v0, 0x7f05005d

    .line 1460
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxMlcNumber:Landroid/widget/CheckBox;

    const v0, 0x7f050109

    .line 1461
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewMlcNumber:Landroid/widget/TextView;

    const v0, 0x7f050038

    .line 1463
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxCpAutoReset:Landroid/widget/CheckBox;

    const v0, 0x7f050041

    .line 1464
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxEpcMolrPduEnable:Landroid/widget/CheckBox;

    const v0, 0x7f05005e

    .line 1466
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxNiAllow:Landroid/widget/CheckBox;

    const v0, 0x7f050062

    .line 1467
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxRoamingAllow:Landroid/widget/CheckBox;

    const v0, 0x7f050065

    .line 1468
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxSupl2File:Landroid/widget/CheckBox;

    const v0, 0x7f05004c

    .line 1469
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLogSensitiveData:Landroid/widget/CheckBox;

    const v0, 0x7f050039

    .line 1470
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxCertFromSdcard:Landroid/widget/CheckBox;

    const v0, 0x7f050036

    .line 1471
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAutoProfileEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050066

    .line 1472
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxSuplApnEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050067

    .line 1473
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxSyncToSlp:Landroid/widget/CheckBox;

    const v0, 0x7f050047

    .line 1474
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxImsiEnable:Landroid/widget/CheckBox;

    const v0, 0x7f05003b

    .line 1475
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxE911GpsIconEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050054

    .line 1476
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeHideWifiBtStatus:Landroid/widget/CheckBox;

    const v0, 0x7f050055

    .line 1477
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeNetworkLocationDisable:Landroid/widget/CheckBox;

    const v0, 0x7f050050

    .line 1478
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeCpEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050057

    .line 1479
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeUpEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050034

    .line 1480
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAospProfileEnable:Landroid/widget/CheckBox;

    const v0, 0x7f05005f

    .line 1481
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxNlpSettings2SuplEnable:Landroid/widget/CheckBox;

    const v0, 0x7f05004a

    .line 1482
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLbsLogEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050048

    .line 1484
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxIngoreSiForE911:Landroid/widget/CheckBox;

    const v0, 0x7f050053

    .line 1485
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeCpWlanEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050052

    .line 1486
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeCpSrnEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050051

    .line 1487
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeCpSensorEnable:Landroid/widget/CheckBox;

    const v0, 0x7f05004f

    .line 1488
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeCpDbhEnable:Landroid/widget/CheckBox;

    const v0, 0x7f05005a

    .line 1489
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeUpWlanEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050059

    .line 1490
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeUpSrnEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050058

    .line 1491
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeUpSensorEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050056

    .line 1492
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeUpDbhEnable:Landroid/widget/CheckBox;

    const v0, 0x7f05006a

    .line 1493
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxUpLppIn2g3gDisable:Landroid/widget/CheckBox;

    const v0, 0x7f05006b

    .line 1494
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxUpRrlpIn4gDisable:Landroid/widget/CheckBox;

    const v0, 0x7f05006c

    .line 1495
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxUpSiDisable:Landroid/widget/CheckBox;

    const v0, 0x7f05003a

    .line 1496
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxDefaultNlpEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050043

    .line 1497
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxForceOtdoaAssistEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050033

    .line 1498
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAospPosModeEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050061

    .line 1499
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxPrivacyOverrideEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050032

    .line 1500
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAllowNiForGpsOffEnable:Landroid/widget/CheckBox;

    const v0, 0x7f0500b3

    .line 1502
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonIpV6:Landroid/widget/RadioButton;

    const v0, 0x7f0500b2

    .line 1503
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RadioButton;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonIpV4:Landroid/widget/RadioButton;

    const v0, 0x7f050114

    .line 1505
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewTcpKeepAliveInterval:Landroid/widget/TextView;

    const v0, 0x7f050022

    .line 1506
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonTcpKeepAlive:Landroid/widget/Button;

    const v0, 0x7f050106

    .line 1507
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewLppeCrowdSourceConfident:Landroid/widget/TextView;

    const v0, 0x7f050010

    .line 1508
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonLppeCrowdSourceConfident:Landroid/widget/Button;

    const v0, 0x7f050063

    .line 1511
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxSib8Sib16Enable:Landroid/widget/CheckBox;

    const v0, 0x7f050046

    .line 1512
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxGpsSatelliteEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050045

    .line 1513
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxGlonassSatelliteEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050037

    .line 1514
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxBeidouSatelliteEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050044

    .line 1515
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxGalileoSatelliteEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050031

    .line 1516
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAgpsEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050030

    .line 1517
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAglonassEnable:Landroid/widget/CheckBox;

    const v0, 0x7f05002d

    .line 1518
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAbeidouEnable:Landroid/widget/CheckBox;

    const v0, 0x7f05002f

    .line 1519
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/CheckBox;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxAgalileoEnable:Landroid/widget/CheckBox;

    const v0, 0x7f050015

    .line 1521
    invoke-virtual {p0, v0}, Landroid/app/Activity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Button;

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonReset2Default:Landroid/widget/Button;

    const-string v0, "com.mediatek.location.lppe.main"

    .line 1523
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->isPackageInstalled(Ljava/lang/String;)Z

    move-result v0

    const v1, -0xff0100

    const-string v2, "Yes"

    const/high16 v3, -0x10000

    const-string v4, "No"

    if-eqz v0, :cond_0

    .line 1524
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextLppeServiceInstalled:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1525
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextLppeServiceInstalled:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setTextColor(I)V

    goto :goto_0

    .line 1527
    :cond_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextLppeServiceInstalled:Landroid/widget/TextView;

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1528
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextLppeServiceInstalled:Landroid/widget/TextView;

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setTextColor(I)V

    .line 1531
    :goto_0
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->isUncaliPressureSupported()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1532
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewUncaliPresureSupported:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1533
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewUncaliPresureSupported:Landroid/widget/TextView;

    invoke-virtual {p0, v1}, Landroid/widget/TextView;->setTextColor(I)V

    goto :goto_1

    .line 1535
    :cond_1
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewUncaliPresureSupported:Landroid/widget/TextView;

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1536
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewUncaliPresureSupported:Landroid/widget/TextView;

    invoke-virtual {p0, v3}, Landroid/widget/TextView;->setTextColor(I)V

    :goto_1
    return-void
.end method

.method loadProxyNameFromCarrierConfig()Ljava/lang/String;
    .locals 4

    .line 2652
    sget-object p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->sContext:Landroid/content/Context;

    const-string v0, "carrier_config"

    .line 2653
    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/CarrierConfigManager;

    const-string v0, ""

    if-nez p0, :cond_0

    return-object v0

    .line 2658
    :cond_0
    invoke-static {}, Landroid/telephony/SubscriptionManager;->getDefaultDataSubscriptionId()I

    move-result v1

    .line 2659
    invoke-static {v1}, Landroid/telephony/SubscriptionManager;->isValidSubscriptionId(I)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 2660
    invoke-virtual {p0, v1}, Landroid/telephony/CarrierConfigManager;->getConfigForSubId(I)Landroid/os/PersistableBundle;

    move-result-object p0

    goto :goto_0

    :cond_1
    const/4 p0, 0x0

    :goto_0
    const-string v1, "LocationEM"

    if-nez p0, :cond_2

    const-string p0, "SIM not ready, use default carrier config."

    .line 2662
    invoke-static {v1, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 2663
    invoke-static {}, Landroid/telephony/CarrierConfigManager;->getDefaultConfig()Landroid/os/PersistableBundle;

    move-result-object p0

    :cond_2
    const-string v2, "gps.nfw_proxy_apps"

    .line 2666
    invoke-virtual {p0, v2}, Landroid/os/PersistableBundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    .line 2667
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "gps.nfw_proxy_apps: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p0, :cond_3

    .line 2669
    invoke-virtual {p0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p0

    const-string v0, " "

    invoke-virtual {p0, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    const/4 v0, 0x0

    .line 2671
    aget-object p0, p0, v0

    return-object p0

    :cond_3
    return-object v0
.end method

.method protected loadXML()V
    .locals 2

    .line 2094
    :try_start_0
    new-instance v0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;

    invoke-direct {v0}, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;-><init>()V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mXml:Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;
    :try_end_0
    .catch Ljava/io/FileNotFoundException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    goto :goto_0

    .line 2096
    :catch_1
    :try_start_1
    new-instance v0, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;

    const-string v1, "/vendor/etc/gnss/agps_profiles_conf2.xml"

    invoke-direct {v0, v1}, Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mXml:Lcom/mediatek/lbs/em2/utils/MtkAgpsXmlParser;
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :goto_0
    const-string v0, "cannot load the XML file"

    .line 2099
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->loge(Ljava/lang/Object;)V

    .line 2100
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :goto_1
    return-void
.end method

.method public onCreate(Landroid/os/Bundle;)V
    .locals 1

    .line 95
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 97
    :try_start_0
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->initAgpsInterface()V

    const/4 p1, 0x1

    .line 98
    iput-boolean p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsdExisted:Z
    :try_end_0
    .catch Ljava/lang/RuntimeException; {:try_start_0 .. :try_end_0} :catch_0

    const/high16 p1, 0x7f070000

    .line 104
    invoke-virtual {p0, p1}, Landroid/app/Activity;->setContentView(I)V

    .line 105
    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    sput-object p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->sContext:Landroid/content/Context;

    .line 106
    invoke-virtual {p1}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mPackageManager:Landroid/content/pm/PackageManager;

    .line 107
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->loadProxyNameFromCarrierConfig()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mGnssProxyPackageName:Ljava/lang/String;

    .line 108
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "mGnssProxyPackageName from carrierConfig: "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mGnssProxyPackageName:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->log(Ljava/lang/Object;)V

    .line 110
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->loadXML()V

    .line 111
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->initUI()V

    .line 112
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->initPopupMenu()V

    .line 113
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->addOnClickListener()V

    return-void

    .line 100
    :catch_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Failed to initAgesInterface mAgpsdExisted= "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsdExisted:Z

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->log(Ljava/lang/Object;)V

    return-void
.end method

.method public onDestroy()V
    .locals 0

    .line 118
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    return-void
.end method

.method public onPause()V
    .locals 0

    .line 123
    invoke-super {p0}, Landroid/app/Activity;->onPause()V

    return-void
.end method

.method public onResume()V
    .locals 1

    .line 128
    invoke-super {p0}, Landroid/app/Activity;->onResume()V

    .line 129
    iget-boolean v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsdExisted:Z

    if-eqz v0, :cond_0

    .line 130
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->applyAgpsConfigToUI()V

    .line 131
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->checkLocationProxyAppPermission()V

    :cond_0
    return-void
.end method

.method protected setLayoutDependency()V
    .locals 3

    .line 2067
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->isDebugModeEnabled(Landroid/content/Context;)Z

    move-result v0

    .line 2069
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mLayoutDebug:Landroid/widget/LinearLayout;

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->setVisibility(Landroid/view/View;Z)V

    .line 2070
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mLayoutCdmaSetting:Landroid/widget/LinearLayout;

    const/4 v2, 0x1

    invoke-virtual {p0, v1, v2}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->setVisibility(Landroid/view/View;Z)V

    .line 2071
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mLayoutUpSetting:Landroid/widget/LinearLayout;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonUP:Landroid/widget/RadioButton;

    invoke-virtual {v2}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v2

    invoke-virtual {p0, v1, v2}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->setVisibility(Landroid/view/View;Z)V

    .line 2072
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mLayoutCpSetting:Landroid/widget/LinearLayout;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonCP:Landroid/widget/RadioButton;

    invoke-virtual {v2}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v2

    invoke-virtual {p0, v1, v2}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->setVisibility(Landroid/view/View;Z)V

    .line 2073
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mLayoutSUPL2:Landroid/widget/LinearLayout;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mRadioButtonSUPL2:Landroid/widget/RadioButton;

    invoke-virtual {v2}, Landroid/widget/RadioButton;->isChecked()Z

    move-result v2

    invoke-virtual {p0, v1, v2}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->setVisibility(Landroid/view/View;Z)V

    .line 2074
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mLayoutQoP:Landroid/widget/LinearLayout;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mButtonShowQoP:Landroid/widget/ToggleButton;

    invoke-virtual {v2}, Landroid/widget/ToggleButton;->isChecked()Z

    move-result v2

    invoke-virtual {p0, v1, v2}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->setVisibility(Landroid/view/View;Z)V

    .line 2076
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxGpsSatelliteEnable:Landroid/widget/CheckBox;

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->setVisibility(Landroid/view/View;Z)V

    .line 2077
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxGlonassSatelliteEnable:Landroid/widget/CheckBox;

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->setVisibility(Landroid/view/View;Z)V

    .line 2078
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxBeidouSatelliteEnable:Landroid/widget/CheckBox;

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->setVisibility(Landroid/view/View;Z)V

    .line 2079
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxGalileoSatelliteEnable:Landroid/widget/CheckBox;

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->setVisibility(Landroid/view/View;Z)V

    .line 2080
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLppeHideWifiBtStatus:Landroid/widget/CheckBox;

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->setVisibility(Landroid/view/View;Z)V

    return-void
.end method

.method protected setVisibility(Landroid/view/View;Z)V
    .locals 0

    if-eqz p2, :cond_0

    const/4 p0, 0x0

    .line 2085
    invoke-virtual {p1, p0}, Landroid/view/View;->setVisibility(I)V

    goto :goto_0

    :cond_0
    const/16 p0, 0x8

    .line 2087
    invoke-virtual {p1, p0}, Landroid/view/View;->setVisibility(I)V

    :goto_0
    return-void
.end method

.method protected showAgpsProfilingInfo()V
    .locals 7

    .line 2043
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->getAgpsProfilingInfo()Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo;

    move-result-object v0

    .line 2044
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->log(Ljava/lang/Object;)V

    .line 2046
    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo;->getElements()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    const-string v1, ""

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo$ProfileElement;

    .line 2048
    invoke-virtual {v2}, Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo$ProfileElement;->getType()I

    move-result v3

    if-nez v3, :cond_0

    const-string v3, "c0c0c0"

    goto :goto_1

    .line 2050
    :cond_0
    invoke-virtual {v2}, Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo$ProfileElement;->getType()I

    move-result v3

    const/4 v4, 0x1

    if-ne v3, v4, :cond_1

    const-string v3, "ffff00"

    goto :goto_1

    .line 2052
    :cond_1
    invoke-virtual {v2}, Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo$ProfileElement;->getType()I

    move-result v3

    const/4 v4, 0x2

    if-ne v3, v4, :cond_2

    const-string v3, "ff0000"

    goto :goto_1

    :cond_2
    const-string v3, "0000ff"

    .line 2057
    :goto_1
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "<font color=\'#"

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\'>"

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2058
    invoke-virtual {v2}, Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo$ProfileElement;->getTimestamp()J

    move-result-wide v5

    invoke-static {v5, v6}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->getTimeString(J)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2059
    invoke-virtual {v2}, Lcom/mediatek/lbs/em2/utils/AgpsProfilingInfo$ProfileElement;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "</font><br>"

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    .line 2061
    :cond_3
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewProfilingInfo:Landroid/widget/TextView;

    invoke-static {v1}, Landroid/text/Html;->fromHtml(Ljava/lang/String;)Landroid/text/Spanned;

    move-result-object v0

    sget-object v1, Landroid/widget/TextView$BufferType;->SPANNABLE:Landroid/widget/TextView$BufferType;

    invoke-virtual {p0, v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;Landroid/widget/TextView$BufferType;)V

    return-void
.end method

.method protected stringEquals(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 0

    if-nez p1, :cond_0

    if-nez p2, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    if-nez p1, :cond_1

    if-eqz p2, :cond_1

    return p0

    :cond_1
    if-eqz p1, :cond_2

    if-nez p2, :cond_2

    return p0

    .line 2404
    :cond_2
    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    return p0
.end method

.method protected updateQoP()V
    .locals 5

    .line 1547
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewHAcc:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    .line 1548
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewVAcc:Landroid/widget/TextView;

    invoke-virtual {v1}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v1

    invoke-interface {v1}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    .line 1549
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewLocationAge:Landroid/widget/TextView;

    invoke-virtual {v2}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v2

    .line 1550
    invoke-interface {v2}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v2

    .line 1549
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    .line 1551
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewDelay:Landroid/widget/TextView;

    invoke-virtual {v3}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v3

    invoke-interface {v3}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    .line 1552
    iget-boolean v4, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mIsKValueUnit:Z

    if-nez v4, :cond_0

    .line 1553
    invoke-static {v0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->calcKFromMeter(I)I

    move-result v0

    .line 1554
    invoke-static {v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->calcKFromMeter(I)I

    move-result v1

    .line 1556
    :cond_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {p0, v0, v1, v2, v3}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setQop(IIII)V

    return-void
.end method

.method protected updateSuplProfile()V
    .locals 3

    .line 1541
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewSlpAddr:Landroid/widget/TextView;

    invoke-virtual {v1}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v1

    invoke-interface {v1}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewSlpPort:Landroid/widget/TextView;

    .line 1542
    invoke-virtual {v2}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v2

    invoke-interface {v2}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxTls:Landroid/widget/CheckBox;

    .line 1543
    invoke-virtual {p0}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p0

    .line 1541
    invoke-virtual {v0, v1, v2, p0}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setSuplProfile(Ljava/lang/String;IZ)V

    return-void
.end method
