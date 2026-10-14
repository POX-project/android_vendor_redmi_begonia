.class public Lcom/mediatek/engineermode/boot/EmBootupReceiver;
.super Landroid/content/BroadcastReceiver;
.source "EmBootupReceiver.java"


# static fields
.field private static final MODEM_FILTER_SHAREPRE:Ljava/lang/String; = "telephony_modem_filter_settings"

.field private static final TAG:Ljava/lang/String; = "BootupReceiver"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 21
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method

.method private onBootupCompleted(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 3
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 36
    const-string v0, "BootupReceiver"

    const-string v1, "Start onBootupCompleted"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 39
    const/4 v1, 0x0

    invoke-direct {p0, p1, v1}, Lcom/mediatek/engineermode/boot/EmBootupReceiver;->writeSharedPreference(Landroid/content/Context;Z)V

    .line 42
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/boot/EmBootupReceiver;->writeShortVolteInterruptPreference(Landroid/content/Context;)V

    .line 45
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/boot/EmBootupReceiver;->writeDsdaFloatingWindowPreference(Landroid/content/Context;)V

    .line 47
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/boot/EmBootupReceiver;->tryInvokeBypassService(Landroid/content/Context;)V

    .line 49
    invoke-static {p1}, Lcom/mediatek/engineermode/wifi/MtkCTIATestDialog;->isWifiCtiaEnabled(Landroid/content/Context;)Z

    move-result v1

    const/4 v2, 0x1

    if-eqz v1, :cond_0

    .line 50
    invoke-static {p1, v2}, Lcom/mediatek/engineermode/wifi/WifiWatchService;->enableService(Landroid/content/Context;Z)V

    .line 53
    :cond_0
    invoke-static {p1}, Lcom/mediatek/engineermode/wifi/WifiLogSwitchActivity;->onWifiStateChanged(Landroid/content/Context;)V

    .line 55
    invoke-static {p1}, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->getAlwaysVisible(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 56
    invoke-static {v2}, Lcom/mediatek/engineermode/bluetooth/BtTestTool;->setAlwaysVisible(Z)V

    .line 57
    invoke-static {p1, v2}, Lcom/mediatek/engineermode/bluetooth/BtWatchService;->enableService(Landroid/content/Context;Z)V

    .line 59
    :cond_1
    const-string v1, "End onBootupCompleted"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 60
    return-void
.end method

.method private tryInvokeBypassService(Landroid/content/Context;)V
    .locals 4
    .param p1, "context"    # Landroid/content/Context;

    .line 63
    nop

    .line 64
    const-string v0, "service_enable"

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v2

    .line 65
    .local v2, "settings":Landroid/content/SharedPreferences;
    invoke-interface {v2, v0, v1}, Landroid/content/SharedPreferences;->getBoolean(Ljava/lang/String;Z)Z

    move-result v0

    .line 66
    .local v0, "prefServEnable":Z
    if-eqz v0, :cond_0

    .line 67
    const/4 v1, 0x1

    invoke-static {p1, v1}, Lcom/mediatek/engineermode/bypass/BypassService;->enableService(Landroid/content/Context;Z)V

    .line 68
    const-string v1, "BootupReceiver"

    const-string v3, "ready to start BypassService"

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->w(Ljava/lang/String;Ljava/lang/String;)V

    .line 70
    :cond_0
    return-void
.end method

.method private writeDsdaFloatingWindowPreference(Landroid/content/Context;)V
    .locals 4
    .param p1, "context"    # Landroid/content/Context;

    .line 98
    const-string v0, "BootupReceiver"

    const-string v1, "writeDsdaFloatingWindowPreference false"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 99
    const-string v0, "DsdaMonitor"

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 101
    .local v0, "mPref":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v2

    .line 102
    .local v2, "mPrefEditor":Landroid/content/SharedPreferences$Editor;
    const-string v3, "Dsda_floating"

    invoke-interface {v2, v3, v1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 103
    invoke-interface {v2}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 104
    return-void
.end method

.method private writeSharedPreference(Landroid/content/Context;Z)V
    .locals 3
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "flag"    # Z

    .line 73
    const-string v0, "telephony_modem_filter_settings"

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 75
    .local v0, "modemFilterSh":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    .line 76
    .local v1, "editor":Landroid/content/SharedPreferences$Editor;
    const v2, 0x7f0a02f3

    invoke-virtual {p1, v2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2, p2}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 77
    const v2, 0x7f0a02f4

    invoke-virtual {p1, v2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2, p2}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 78
    invoke-interface {v1}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 79
    return-void
.end method

.method private writeShortVolteInterruptPreference(Landroid/content/Context;)V
    .locals 6
    .param p1, "context"    # Landroid/content/Context;

    .line 82
    const-string v0, "BootupReceiver"

    const-string v1, "writeShortVolteInterruptPreference false"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 84
    const-string v0, "GwsdConfigure"

    const/4 v1, 0x0

    invoke-virtual {p1, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 86
    .local v0, "mPref":Landroid/content/SharedPreferences;
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v2

    .line 87
    .local v2, "mPrefEditor":Landroid/content/SharedPreferences$Editor;
    const-string v3, "gwsd_dual_capability"

    invoke-interface {v2, v3, v1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 88
    invoke-interface {v2}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 90
    const-string v4, "LteGwsdConfigure"

    invoke-virtual {p1, v4, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v4

    .line 92
    .local v4, "mPref2":Landroid/content/SharedPreferences;
    invoke-interface {v4}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v5

    .line 93
    .local v5, "mPrefEditor2":Landroid/content/SharedPreferences$Editor;
    invoke-interface {v5, v3, v1}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 94
    invoke-interface {v5}, Landroid/content/SharedPreferences$Editor;->commit()Z

    .line 95
    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 2
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 29
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    .line 30
    .local v0, "action":Ljava/lang/String;
    const-string v1, "android.intent.action.BOOT_COMPLETED"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 31
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/boot/EmBootupReceiver;->onBootupCompleted(Landroid/content/Context;Landroid/content/Intent;)V

    .line 33
    :cond_0
    return-void
.end method
