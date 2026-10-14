.class public Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;
.super Landroid/app/Activity;
.source "WifiLogSwitchActivity.java"

# interfaces
.implements Landroid/widget/AdapterView$OnItemSelectedListener;
.implements Landroid/widget/AdapterView$OnItemClickListener;


# static fields
.field private static final CHIP_ID_6620:I = 0x6620

.field private static final DEFAULT_WAIT_TIME:J = 0x64L

.field private static final DEV_FW_LOG_ACTION:Ljava/lang/String; = "android.settings.APPLICATION_DEVELOPMENT_SETTINGS"

.field private static final DLG_ENABLE_WIFI_ERROR:I = 0x1

.field private static final DLG_INIT_ITEMS:I = 0x0

.field private static final LOG_LEVEL_DEFAULT:I = 0x1

.field private static final LOG_LEVEL_EXTREME:I = 0x2

.field private static final LOG_LEVEL_OFF:I = 0x0

.field private static final LOG_MODULE_DRIVER:I = 0x0

.field private static final LOG_MODULE_FW:I = 0x1

.field private static final PREF_DRIVER_LOG_LEVEL:Ljava/lang/String; = "pref_wifilog_driver"

.field private static final PREF_FW_LOG_LEVEL:Ljava/lang/String; = "pref_wifilog_fw"

.field private static final TAG:Ljava/lang/String; = "WifiLogSwitch"

.field private static final VALUE_DEFAULT_LOG_LEVEL:I


# instance fields
.field private mFwLogIntent:Landroid/content/Intent;

.field private mInited:Z

.field private mListData:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mListLog:Landroid/widget/ListView;

.field private mLogAdapter:Landroid/widget/ArrayAdapter;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/widget/ArrayAdapter<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mSpDriver:Landroid/widget/Spinner;

.field private mSpFw:Landroid/widget/Spinner;

.field private mWifiManager:Landroid/net/wifi/WifiManager;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 71
    invoke-direct {p0}, Landroid/app/Activity;-><init>()V

    .line 92
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mSpDriver:Landroid/widget/Spinner;

    .line 93
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mSpFw:Landroid/widget/Spinner;

    .line 94
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mListLog:Landroid/widget/ListView;

    .line 95
    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mInited:Z

    .line 98
    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mWifiManager:Landroid/net/wifi/WifiManager;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;

    .line 71
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->enableWifi()Z

    move-result v0

    return v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;

    .line 71
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->initItems()V

    return-void
.end method

.method static synthetic access$202(Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;
    .param p1, "x1"    # Z

    .line 71
    iput-boolean p1, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mInited:Z

    return p1
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mSpDriver:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;)Landroid/widget/Spinner;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;

    .line 71
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mSpFw:Landroid/widget/Spinner;

    return-object v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;

    .line 71
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->updateItems()V

    return-void
.end method

.method private enableWifi()Z
    .locals 4

    .line 259
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mWifiManager:Landroid/net/wifi/WifiManager;

    const/4 v1, 0x0

    if-eqz v0, :cond_4

    .line 260
    invoke-virtual {v0}, Landroid/net/wifi/WifiManager;->getWifiState()I

    move-result v0

    const/4 v2, 0x3

    const/4 v3, 0x1

    if-ne v0, v2, :cond_0

    .line 261
    return v3

    .line 263
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/EmUtils;->ifAirplaneModeEnabled()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 264
    return v1

    .line 266
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mWifiManager:Landroid/net/wifi/WifiManager;

    invoke-virtual {v0, v3}, Landroid/net/wifi/WifiManager;->setWifiEnabled(Z)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 267
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mWifiManager:Landroid/net/wifi/WifiManager;

    invoke-virtual {v0}, Landroid/net/wifi/WifiManager;->getWifiState()I

    move-result v0

    if-eq v0, v2, :cond_2

    .line 268
    const-wide/16 v0, 0x64

    invoke-static {v0, v1}, Landroid/os/SystemClock;->sleep(J)V

    goto :goto_0

    .line 270
    :cond_2
    return v3

    .line 272
    :cond_3
    const-string v0, "WifiLogSwitch"

    const-string v2, "enable wifi failed"

    invoke-static {v0, v2}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 273
    return v1

    .line 278
    :cond_4
    return v1
.end method

.method private initItems()V
    .locals 1

    .line 174
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->initial()I

    .line 175
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity$2;-><init>(Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;)V

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    .line 197
    return-void
.end method

.method public static onWifiStateChanged(Landroid/content/Context;)V
    .locals 7
    .param p0, "context"    # Landroid/content/Context;

    .line 307
    const-string v0, "wifi"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/wifi/WifiManager;

    .line 308
    .local v0, "wifiMgr":Landroid/net/wifi/WifiManager;
    invoke-virtual {v0}, Landroid/net/wifi/WifiManager;->getWifiState()I

    move-result v1

    const/4 v2, 0x3

    if-ne v1, v2, :cond_3

    .line 309
    const/4 v1, 0x1

    invoke-static {v1, p0}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->restoreSettings(ZLandroid/content/Context;)I

    move-result v2

    .line 310
    .local v2, "driverLogLevel":I
    const/4 v3, 0x0

    invoke-static {v3, p0}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->restoreSettings(ZLandroid/content/Context;)I

    move-result v4

    .line 312
    .local v4, "fwLogLevel":I
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "[Wifi Enabled] driverLogLevel "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v6, " fwLogLevel "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v6, "WifiLogSwitch"

    invoke-static {v6, v5}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 314
    if-nez v2, :cond_0

    if-nez v4, :cond_0

    .line 315
    return-void

    .line 317
    :cond_0
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->initial()I

    .line 318
    if-eqz v2, :cond_1

    .line 319
    invoke-static {v3, v2}, Lcom/mediatek/engineermode/wifi/EMWifi;->setWifiLogLevel(II)Z

    .line 321
    :cond_1
    if-eqz v4, :cond_2

    .line 322
    invoke-static {v1, v4}, Lcom/mediatek/engineermode/wifi/EMWifi;->setWifiLogLevel(II)Z

    .line 324
    :cond_2
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->unInitial()I

    .line 327
    .end local v2    # "driverLogLevel":I
    .end local v4    # "fwLogLevel":I
    :cond_3
    return-void
.end method

.method private static restoreSettings(ZLandroid/content/Context;)I
    .locals 4
    .param p0, "driverLog"    # Z
    .param p1, "context"    # Landroid/content/Context;

    .line 338
    invoke-static {p1}, Landroid/preference/PreferenceManager;->getDefaultSharedPreferences(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 339
    .local v0, "prefs":Landroid/content/SharedPreferences;
    if-eqz p0, :cond_0

    const-string v1, "pref_wifilog_driver"

    goto :goto_0

    :cond_0
    const-string v1, "pref_wifilog_fw"

    :goto_0
    const/4 v2, 0x0

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    .line 341
    .local v1, "value":I
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "restore driver log:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, " value:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "WifiLogSwitch"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 342
    return v1
.end method

.method private saveSettings(ZI)V
    .locals 4
    .param p1, "driverLog"    # Z
    .param p2, "value"    # I

    .line 330
    invoke-static {p0}, Landroid/preference/PreferenceManager;->getDefaultSharedPreferences(Landroid/content/Context;)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 331
    .local v0, "prefs":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 332
    .local v1, "editor":Landroid/content/SharedPreferences$Editor;
    if-eqz p1, :cond_0

    const-string v2, "pref_wifilog_driver"

    goto :goto_0

    :cond_0
    const-string v2, "pref_wifilog_fw"

    :goto_0
    invoke-interface {v1, v2, p2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 333
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 334
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "save driver log:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, " value:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "WifiLogSwitch"

    invoke-static {v3, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 335
    return-void
.end method

.method private updateItems()V
    .locals 5

    .line 239
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mListData:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 240
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mWifiManager:Landroid/net/wifi/WifiManager;

    invoke-virtual {v0}, Landroid/net/wifi/WifiManager;->isVerboseLoggingEnabled()Z

    move-result v0

    .line 241
    .local v0, "on":Z
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "VerboseLog:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "WifiLogSwitch"

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 242
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mListData:Ljava/util/ArrayList;

    if-eqz v0, :cond_0

    const v3, 0x7f0a073f

    goto :goto_0

    .line 243
    :cond_0
    const v3, 0x7f0a073e

    .line 242
    :goto_0
    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 244
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mLogAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v1}, Landroid/widget/ArrayAdapter;->notifyDataSetChanged()V

    .line 245
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "mInited:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v3, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mInited:Z

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 246
    iget-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mInited:Z

    if-eqz v1, :cond_2

    .line 247
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mSpDriver:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getVisibility()I

    move-result v1

    if-nez v1, :cond_1

    .line 248
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Driver:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x0

    invoke-static {v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->getWifiLogLevel(I)I

    move-result v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 249
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mSpDriver:Landroid/widget/Spinner;

    invoke-static {v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->getWifiLogLevel(I)I

    move-result v3

    invoke-virtual {v1, v3}, Landroid/widget/Spinner;->setSelection(I)V

    .line 251
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mSpFw:Landroid/widget/Spinner;

    invoke-virtual {v1}, Landroid/widget/Spinner;->getVisibility()I

    move-result v1

    if-nez v1, :cond_2

    .line 252
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "FW:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x1

    invoke-static {v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->getWifiLogLevel(I)I

    move-result v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 253
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mSpFw:Landroid/widget/Spinner;

    invoke-static {v3}, Lcom/mediatek/engineermode/wifi/EMWifi;->getWifiLogLevel(I)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/widget/Spinner;->setSelection(I)V

    .line 256
    :cond_2
    return-void
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 3
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 104
    invoke-super {p0, p1}, Landroid/app/Activity;->onCreate(Landroid/os/Bundle;)V

    .line 105
    invoke-static {}, Lcom/mediatek/engineermode/EngineerMode;->isAutoTest()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 106
    invoke-virtual {p0}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->finish()V

    .line 107
    return-void

    .line 110
    :cond_0
    const v0, 0x7f080104

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->setContentView(I)V

    .line 111
    const v0, 0x7f06033c

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mSpDriver:Landroid/widget/Spinner;

    .line 112
    const v0, 0x7f0603d5

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/Spinner;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mSpFw:Landroid/widget/Spinner;

    .line 113
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mListData:Ljava/util/ArrayList;

    .line 115
    new-instance v0, Landroid/widget/ArrayAdapter;

    const v1, 0x1090003

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mListData:Ljava/util/ArrayList;

    invoke-direct {v0, p0, v1, v2}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mLogAdapter:Landroid/widget/ArrayAdapter;

    .line 117
    const v0, 0x7f06053d

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ListView;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mListLog:Landroid/widget/ListView;

    .line 118
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mLogAdapter:Landroid/widget/ArrayAdapter;

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 119
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mListLog:Landroid/widget/ListView;

    invoke-virtual {v0, p0}, Landroid/widget/ListView;->setOnItemClickListener(Landroid/widget/AdapterView$OnItemClickListener;)V

    .line 120
    new-instance v0, Landroid/content/Intent;

    const-string v1, "android.settings.APPLICATION_DEVELOPMENT_SETTINGS"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mFwLogIntent:Landroid/content/Intent;

    .line 121
    nop

    .line 122
    const-string v0, "wifi"

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/wifi/WifiManager;

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mWifiManager:Landroid/net/wifi/WifiManager;

    .line 123
    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->showDialog(I)V

    .line 124
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity$1;-><init>(Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;)V

    .line 139
    invoke-virtual {v0}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity$1;->start()V

    .line 142
    return-void
.end method

.method protected onCreateDialog(I)Landroid/app/Dialog;
    .locals 4
    .param p1, "id"    # I

    .line 201
    const/4 v0, 0x0

    const/4 v1, 0x1

    if-eqz p1, :cond_1

    if-eq p1, v1, :cond_0

    .line 222
    const/4 v0, 0x0

    return-object v0

    .line 211
    :cond_0
    new-instance v1, Landroid/app/AlertDialog$Builder;

    invoke-direct {v1, p0}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    const v2, 0x7f0a0714

    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setTitle(I)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    .line 212
    invoke-virtual {v1, v0}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x7f0a073b

    .line 213
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    const v1, 0x7f0a02e8

    new-instance v2, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity$3;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity$3;-><init>(Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;)V

    .line 214
    invoke-virtual {v0, v1, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(ILandroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v0

    .line 218
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v0

    .line 211
    return-object v0

    .line 203
    :cond_1
    new-instance v2, Landroid/app/ProgressDialog;

    invoke-direct {v2, p0}, Landroid/app/ProgressDialog;-><init>(Landroid/content/Context;)V

    .line 204
    .local v2, "innerDialog":Landroid/app/ProgressDialog;
    const v3, 0x7f0a0716

    invoke-virtual {v2, v3}, Landroid/app/ProgressDialog;->setTitle(I)V

    .line 205
    const v3, 0x7f0a0738

    .line 206
    invoke-virtual {p0, v3}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/app/ProgressDialog;->setMessage(Ljava/lang/CharSequence;)V

    .line 207
    invoke-virtual {v2, v0}, Landroid/app/ProgressDialog;->setCancelable(Z)V

    .line 208
    invoke-virtual {v2, v1}, Landroid/app/ProgressDialog;->setIndeterminate(Z)V

    .line 209
    return-object v2
.end method

.method protected onDestroy()V
    .locals 2

    .line 229
    iget-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mInited:Z

    if-eqz v0, :cond_0

    .line 230
    invoke-static {}, Lcom/mediatek/engineermode/wifi/EMWifi;->unInitial()I

    .line 231
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mInited:Z

    .line 234
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mInited:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mInited:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WifiLogSwitch"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 235
    invoke-super {p0}, Landroid/app/Activity;->onDestroy()V

    .line 236
    return-void
.end method

.method public onItemClick(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 4
    .param p2, "arg1"    # Landroid/view/View;
    .param p3, "arg2"    # I
    .param p4, "arg3"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 286
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mListData:Ljava/util/ArrayList;

    invoke-virtual {v0, p3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 287
    .local v0, "itemName":Ljava/lang/String;
    if-nez v0, :cond_0

    .line 288
    return-void

    .line 290
    :cond_0
    if-nez p3, :cond_2

    .line 291
    invoke-virtual {p0}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mFwLogIntent:Landroid/content/Intent;

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3}, Landroid/content/pm/PackageManager;->resolveActivity(Landroid/content/Intent;I)Landroid/content/pm/ResolveInfo;

    move-result-object v1

    if-nez v1, :cond_1

    .line 292
    const-string v1, "WifiLogSwitch"

    const-string v2, "no intent receiver"

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 293
    const v1, 0x7f0a073d

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v1, v3}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v1

    .line 294
    invoke-virtual {v1}, Landroid/widget/Toast;->show()V

    goto :goto_0

    .line 296
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mFwLogIntent:Landroid/content/Intent;

    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->startActivity(Landroid/content/Intent;)V

    .line 300
    :cond_2
    :goto_0
    return-void
.end method

.method public onItemSelected(Landroid/widget/AdapterView;Landroid/view/View;IJ)V
    .locals 3
    .param p2, "arg1"    # Landroid/view/View;
    .param p3, "arg2"    # I
    .param p4, "arg3"    # J
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;",
            "Landroid/view/View;",
            "IJ)V"
        }
    .end annotation

    .line 149
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Selected:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WifiLogSwitch"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 150
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mSpDriver:Landroid/widget/Spinner;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    .line 151
    invoke-static {v2, p3}, Lcom/mediatek/engineermode/wifi/EMWifi;->setWifiLogLevel(II)Z

    .line 152
    invoke-direct {p0, v1, p3}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->saveSettings(ZI)V

    goto :goto_0

    .line 153
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->mSpFw:Landroid/widget/Spinner;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 154
    invoke-static {v1, p3}, Lcom/mediatek/engineermode/wifi/EMWifi;->setWifiLogLevel(II)Z

    .line 155
    invoke-direct {p0, v2, p3}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->saveSettings(ZI)V

    .line 157
    :cond_1
    :goto_0
    return-void
.end method

.method public onNothingSelected(Landroid/widget/AdapterView;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/widget/AdapterView<",
            "*>;)V"
        }
    .end annotation

    .line 162
    .local p1, "arg0":Landroid/widget/AdapterView;, "Landroid/widget/AdapterView<*>;"
    return-void
.end method

.method protected onStart()V
    .locals 0

    .line 169
    invoke-super {p0}, Landroid/app/Activity;->onStart()V

    .line 170
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->updateItems()V

    .line 171
    return-void
.end method
