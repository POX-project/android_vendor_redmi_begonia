.class public Lcom/mediatek/lbs/em2/ui/MyTabActivity;
.super Landroid/app/TabActivity;
.source "MyTabActivity.java"


# static fields
.field private static final IS_USER_BUILD:Z

.field static final PERMISSION_REQUEST_BITS_ALL:I

.field private static final sNeededPermissions:[Ljava/lang/String;


# instance fields
.field private mMccMnc:Ljava/lang/String;

.field private mTabHost:Landroid/widget/TabHost;


# direct methods
.method static constructor <clinit>()V
    .locals 4

    const-string v0, "android.permission.ACCESS_FINE_LOCATION"

    const-string v1, "android.permission.ACCESS_COARSE_LOCATION"

    const-string v2, "android.permission.WRITE_EXTERNAL_STORAGE"

    const-string v3, "android.permission.READ_PHONE_STATE"

    .line 22
    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->sNeededPermissions:[Ljava/lang/String;

    .line 28
    array-length v0, v0

    int-to-double v0, v0

    const-wide/high16 v2, 0x4000000000000000L    # 2.0

    invoke-static {v2, v3, v0, v1}, Ljava/lang/Math;->pow(DD)D

    move-result-wide v0

    const-wide/high16 v2, 0x3ff0000000000000L    # 1.0

    sub-double/2addr v0, v2

    double-to-int v0, v0

    sput v0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->PERMISSION_REQUEST_BITS_ALL:I

    .line 29
    sget-object v0, Landroid/os/Build;->TYPE:Ljava/lang/String;

    const-string v1, "user"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    sput-boolean v0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->IS_USER_BUILD:Z

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 21
    invoke-direct {p0}, Landroid/app/TabActivity;-><init>()V

    return-void
.end method

.method private addAllTab()V
    .locals 4

    .line 45
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mTabHost:Landroid/widget/TabHost;

    if-eqz v0, :cond_0

    const-string v0, "Tabs are already added"

    .line 46
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->log(Ljava/lang/String;)V

    return-void

    .line 50
    :cond_0
    invoke-virtual {p0}, Landroid/app/TabActivity;->getTabHost()Landroid/widget/TabHost;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mTabHost:Landroid/widget/TabHost;

    const-string v1, "GPS"

    .line 52
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    const-class v3, Lcom/mediatek/lbs/em2/ui/LbsGps;

    .line 53
    invoke-virtual {v2, p0, v3}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 52
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 55
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mTabHost:Landroid/widget/TabHost;

    const-string v1, "VIEW"

    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    const-class v3, Lcom/mediatek/lbs/em2/ui/LbsView;

    .line 56
    invoke-virtual {v2, p0, v3}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 55
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 58
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mTabHost:Landroid/widget/TabHost;

    const-string v1, "AGPS"

    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    const-class v3, Lcom/mediatek/lbs/em2/ui/LbsAgps;

    .line 59
    invoke-virtual {v2, p0, v3}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 58
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 61
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mTabHost:Landroid/widget/TabHost;

    const-string v1, "FLOW"

    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    const-class v3, Lcom/mediatek/lbs/em2/ui/LbsFlow;

    .line 62
    invoke-virtual {v2, p0, v3}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 61
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 64
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mTabHost:Landroid/widget/TabHost;

    const-string v1, "MISC"

    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    const-class v3, Lcom/mediatek/lbs/em2/ui/LbsMisc;

    .line 65
    invoke-virtual {v2, p0, v3}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 64
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 68
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mTabHost:Landroid/widget/TabHost;

    const-string v1, "RAW DATA"

    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    const-class v3, Lcom/mediatek/lbs/em2/ui/LbsRawData;

    .line 69
    invoke-virtual {v2, p0, v3}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 68
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 72
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mTabHost:Landroid/widget/TabHost;

    const-string v1, "NLP"

    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    const-class v3, Lcom/mediatek/lbs/em2/ui/LbsNlp;

    .line 73
    invoke-virtual {v2, p0, v3}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 72
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 76
    sget-boolean v0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->IS_USER_BUILD:Z

    if-eqz v0, :cond_2

    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->isMccNaOperators()Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    .line 83
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "C2K tabs are not added because mccmnc="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mMccMnc:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->log(Ljava/lang/String;)V

    goto :goto_1

    .line 77
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mTabHost:Landroid/widget/TabHost;

    const-string v1, "C2K DBG"

    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    const-class v3, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    .line 78
    invoke-virtual {v2, p0, v3}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 77
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 80
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mTabHost:Landroid/widget/TabHost;

    const-string v1, "NI Statistic"

    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    const-string v2, "NI Stastic"

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    const-class v3, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    .line 81
    invoke-virtual {v2, p0, v3}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 80
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 86
    :goto_1
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mTabHost:Landroid/widget/TabHost;

    const-string v1, "BATCH"

    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v2

    invoke-virtual {v2, v1}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    const-class v3, Lcom/mediatek/lbs/em2/ui/LbsBatch;

    .line 87
    invoke-virtual {v2, p0, v3}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 86
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 90
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mTabHost:Landroid/widget/TabHost;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->setCurrentTab(I)V

    .line 91
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mTabHost:Landroid/widget/TabHost;

    const/4 v2, 0x1

    invoke-virtual {v0, v2}, Landroid/widget/TabHost;->setCurrentTab(I)V

    .line 92
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mTabHost:Landroid/widget/TabHost;

    const/4 v3, 0x3

    invoke-virtual {v0, v3}, Landroid/widget/TabHost;->setCurrentTab(I)V

    .line 93
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mTabHost:Landroid/widget/TabHost;

    const/4 v3, 0x2

    invoke-virtual {v0, v3}, Landroid/widget/TabHost;->setCurrentTab(I)V

    const-string v0, "locationem2.data"

    .line 96
    invoke-virtual {p0, v0, v1}, Landroid/app/TabActivity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    const-string v1, "launchForegroundService"

    .line 98
    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 100
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-class v1, Lcom/mediatek/lbs/em2/ui/LocationEMService;

    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    move-result-object v0

    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;

    :cond_3
    return-void
.end method

.method private checkAndRequestPermission(I)I
    .locals 8

    .line 147
    sget-object v0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->sNeededPermissions:[Ljava/lang/String;

    .line 148
    sget v1, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->PERMISSION_REQUEST_BITS_ALL:I

    and-int/2addr p1, v1

    const/4 v1, 0x0

    if-nez p1, :cond_0

    return v1

    .line 151
    :cond_0
    invoke-static {p1}, Ljava/lang/Integer;->bitCount(I)I

    move-result v2

    .line 152
    new-array v3, v2, [Ljava/lang/String;

    move v4, v1

    move v5, v4

    .line 155
    :goto_0
    array-length v6, v0

    if-ge v1, v6, :cond_4

    const/4 v6, 0x1

    shl-int/2addr v6, v1

    and-int v7, v6, p1

    if-eqz v7, :cond_3

    .line 157
    aget-object v7, v0, v1

    invoke-virtual {p0, v7}, Landroid/app/TabActivity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v7

    if-eqz v7, :cond_2

    add-int/lit8 v6, v4, 0x1

    .line 159
    aget-object v7, v0, v1

    aput-object v7, v3, v4

    .line 161
    aget-object v4, v0, v1

    invoke-virtual {p0, v4}, Landroid/app/TabActivity;->shouldShowRequestPermissionRationale(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 164
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "We need "

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v7, v0, v1

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, " to work"

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-direct {p0, v4}, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->log(Ljava/lang/String;)V

    :cond_1
    move v4, v6

    goto :goto_1

    :cond_2
    not-int v7, v6

    and-int/2addr p1, v7

    or-int/2addr v5, v6

    :cond_3
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_4
    if-ge v4, v2, :cond_6

    if-nez v4, :cond_5

    return v5

    .line 176
    :cond_5
    invoke-static {v3, v4}, Ljava/util/Arrays;->copyOf([Ljava/lang/Object;I)[Ljava/lang/Object;

    move-result-object v0

    move-object v3, v0

    check-cast v3, [Ljava/lang/String;

    .line 179
    :cond_6
    invoke-virtual {p0, v3, p1}, Landroid/app/TabActivity;->requestPermissions([Ljava/lang/String;I)V

    return v5
.end method

.method private isMccNaOperators()Z
    .locals 3

    .line 105
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mMccMnc:Ljava/lang/String;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    const/4 v2, 0x3

    if-le v0, v2, :cond_0

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mMccMnc:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-eqz v0, :cond_2

    const-string v2, "310"

    .line 106
    invoke-virtual {v0, v2}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v2

    if-eqz v2, :cond_1

    const-string v2, "311"

    invoke-virtual {v0, v2}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v2

    if-eqz v2, :cond_1

    const-string v2, "312"

    .line 107
    invoke-virtual {v0, v2}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v2

    if-eqz v2, :cond_1

    const-string v2, "001"

    invoke-virtual {v0, v2}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_2

    .line 108
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "isMccNaOperators() return true, mMccMnc="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mMccMnc:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->log(Ljava/lang/String;)V

    const/4 p0, 0x1

    return p0

    .line 111
    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "isMccNaOperators() return false, mMccMnc="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mMccMnc:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->log(Ljava/lang/String;)V

    return v1
.end method

.method private log(Ljava/lang/String;)V
    .locals 0

    const-string p0, "LocationEM"

    .line 143
    invoke-static {p0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 1

    .line 36
    invoke-super {p0, p1}, Landroid/app/TabActivity;->onCreate(Landroid/os/Bundle;)V

    const p1, 0x7f07000a

    .line 37
    invoke-virtual {p0, p1}, Landroid/app/TabActivity;->setContentView(I)V

    const-string p1, "phone"

    .line 39
    invoke-virtual {p0, p1}, Landroid/app/TabActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/telephony/TelephonyManager;

    .line 40
    invoke-virtual {p1}, Landroid/telephony/TelephonyManager;->getSimOperator()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mMccMnc:Ljava/lang/String;

    .line 41
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "onCreate mMccMnc="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mMccMnc:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->log(Ljava/lang/String;)V

    return-void
.end method

.method protected onDestroy()V
    .locals 2

    const-string v0, "onDestroy"

    .line 135
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->log(Ljava/lang/String;)V

    .line 136
    invoke-super {p0}, Landroid/app/TabActivity;->onDestroy()V

    .line 138
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-class v1, Lcom/mediatek/lbs/em2/ui/LocationEMService;

    invoke-virtual {v0, p0, v1}, Landroid/content/Intent;->setClass(Landroid/content/Context;Ljava/lang/Class;)Landroid/content/Intent;

    move-result-object v0

    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->stopService(Landroid/content/Intent;)Z

    return-void
.end method

.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 6

    .line 187
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onRequestPermissionsResult: reqCode="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->log(Ljava/lang/String;)V

    const/4 p1, 0x0

    move v0, p1

    .line 188
    :goto_0
    array-length v1, p2

    if-ge v0, v1, :cond_3

    .line 189
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onRequestPermissionsResult: perm["

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "]="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget-object v2, p2, v0

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ", result="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    aget v2, p3, v0

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->log(Ljava/lang/String;)V

    .line 190
    aget v1, p3, v0

    const-string v2, "android.permission.READ_PHONE_STATE"

    const-string v3, "android.permission.WRITE_EXTERNAL_STORAGE"

    const-string v4, "android.permission.ACCESS_COARSE_LOCATION"

    const-string v5, "android.permission.ACCESS_FINE_LOCATION"

    if-nez v1, :cond_0

    .line 191
    invoke-virtual {p0, v5}, Landroid/app/TabActivity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v1

    if-nez v1, :cond_2

    .line 192
    invoke-virtual {p0, v4}, Landroid/app/TabActivity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v1

    if-nez v1, :cond_2

    .line 194
    invoke-virtual {p0, v3}, Landroid/app/TabActivity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v1

    if-nez v1, :cond_2

    .line 195
    invoke-virtual {p0, v2}, Landroid/app/TabActivity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v1

    if-nez v1, :cond_2

    .line 196
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->addAllTab()V

    goto :goto_1

    .line 200
    :cond_0
    aget v1, p3, v0

    if-eqz v1, :cond_2

    .line 201
    invoke-virtual {p0, v5}, Landroid/app/TabActivity;->shouldShowRequestPermissionRationale(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 202
    invoke-virtual {p0, v4}, Landroid/app/TabActivity;->shouldShowRequestPermissionRationale(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 204
    invoke-virtual {p0, v3}, Landroid/app/TabActivity;->shouldShowRequestPermissionRationale(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 205
    invoke-virtual {p0, v2}, Landroid/app/TabActivity;->shouldShowRequestPermissionRationale(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "You\'ve disabled the permission, please allow permission from Settings -> Apps -> Menu -> Show system -> LocationEM2 -> Permissions to enable all permissions"

    .line 206
    invoke-static {p0, v1, p1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 207
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    .line 209
    :cond_1
    invoke-virtual {p0}, Landroid/app/TabActivity;->finish()V

    :cond_2
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_3
    return-void
.end method

.method protected onResume()V
    .locals 1

    .line 118
    invoke-super {p0}, Landroid/app/TabActivity;->onResume()V

    const-string v0, "android.permission.ACCESS_FINE_LOCATION"

    .line 119
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "android.permission.ACCESS_COARSE_LOCATION"

    .line 120
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "android.permission.WRITE_EXTERNAL_STORAGE"

    .line 122
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "android.permission.READ_PHONE_STATE"

    .line 123
    invoke-virtual {p0, v0}, Landroid/app/TabActivity;->checkSelfPermission(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_0

    .line 124
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->mTabHost:Landroid/widget/TabHost;

    if-nez v0, :cond_1

    .line 125
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->addAllTab()V

    goto :goto_0

    .line 128
    :cond_0
    sget v0, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->PERMISSION_REQUEST_BITS_ALL:I

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->checkAndRequestPermission(I)I

    const-string v0, "onResume: checkAndRequestPermission"

    .line 130
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/MyTabActivity;->log(Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method
