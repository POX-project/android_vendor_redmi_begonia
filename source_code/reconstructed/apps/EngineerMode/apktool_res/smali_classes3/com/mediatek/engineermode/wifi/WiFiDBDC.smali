.class public Lcom/mediatek/engineermode/wifi/WiFiDBDC;
.super Landroid/app/TabActivity;
.source "WiFiDBDC.java"


# static fields
.field static final KEY_MODE:Ljava/lang/String; = "mode"

.field static final RX_BAND_0:Ljava/lang/String; = "RX Band0"

.field static final RX_BAND_1:Ljava/lang/String; = "RX Band1"

.field private static final TAG:Ljava/lang/String; = "EM/WiFiDBDC"

.field static final TX_BAND_0:Ljava/lang/String; = "TX Band0"

.field static final TX_BAND_1:Ljava/lang/String; = "TX Band1"


# instance fields
.field private mTabHost:Landroid/widget/TabHost;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 52
    invoke-direct {p0}, Landroid/app/TabActivity;-><init>()V

    .line 60
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiDBDC;->mTabHost:Landroid/widget/TabHost;

    return-void
.end method


# virtual methods
.method protected onCreate(Landroid/os/Bundle;)V
    .locals 9
    .param p1, "savedInstanceState"    # Landroid/os/Bundle;

    .line 63
    invoke-super {p0, p1}, Landroid/app/TabActivity;->onCreate(Landroid/os/Bundle;)V

    .line 64
    const-string v0, "EM/WiFiDBDC"

    const-string v1, "onCreate"

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 66
    invoke-virtual {p0}, Lcom/mediatek/engineermode/wifi/WiFiDBDC;->getTabHost()Landroid/widget/TabHost;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiDBDC;->mTabHost:Landroid/widget/TabHost;

    .line 67
    invoke-virtual {p0}, Lcom/mediatek/engineermode/wifi/WiFiDBDC;->getIntent()Landroid/content/Intent;

    move-result-object v0

    sget-object v1, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->WIFI_6632:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->ordinal()I

    move-result v1

    const-string v2, "key_wifi_type"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    sget-object v1, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->WIFI_FORMAT:Lcom/mediatek/engineermode/wifi/WiFi$WifiType;

    .line 68
    invoke-virtual {v1}, Lcom/mediatek/engineermode/wifi/WiFi$WifiType;->ordinal()I

    move-result v1

    const-string v2, "RX Band1"

    const-string v3, "TX Band1"

    const-string v4, "RX Band0"

    const-string v5, "TX Band0"

    const-string v6, "mode"

    if-ne v0, v1, :cond_0

    .line 70
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiDBDC;->mTabHost:Landroid/widget/TabHost;

    invoke-virtual {v0, v5}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    invoke-virtual {v1, v5}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    new-instance v7, Landroid/content/Intent;

    const-class v8, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-direct {v7, p0, v8}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 71
    invoke-virtual {v7, v6, v5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v5

    invoke-virtual {v1, v5}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 70
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 73
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiDBDC;->mTabHost:Landroid/widget/TabHost;

    invoke-virtual {v0, v4}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    invoke-virtual {v1, v4}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    new-instance v5, Landroid/content/Intent;

    const-class v7, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;

    invoke-direct {v5, p0, v7}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 74
    invoke-virtual {v5, v6, v4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 73
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 76
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiDBDC;->mTabHost:Landroid/widget/TabHost;

    invoke-virtual {v0, v3}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    invoke-virtual {v1, v3}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    new-instance v4, Landroid/content/Intent;

    const-class v5, Lcom/mediatek/engineermode/wifi/WiFiTxFormat;

    invoke-direct {v4, p0, v5}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 77
    invoke-virtual {v4, v6, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 76
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 79
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiDBDC;->mTabHost:Landroid/widget/TabHost;

    invoke-virtual {v0, v2}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    new-instance v3, Landroid/content/Intent;

    const-class v4, Lcom/mediatek/engineermode/wifi/WiFiRxFormat;

    invoke-direct {v3, p0, v4}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 80
    invoke-virtual {v3, v6, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 79
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    goto :goto_0

    .line 83
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiDBDC;->mTabHost:Landroid/widget/TabHost;

    invoke-virtual {v0, v5}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    invoke-virtual {v1, v5}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    new-instance v7, Landroid/content/Intent;

    const-class v8, Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-direct {v7, p0, v8}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 84
    invoke-virtual {v7, v6, v5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v5

    invoke-virtual {v1, v5}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 83
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 86
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiDBDC;->mTabHost:Landroid/widget/TabHost;

    invoke-virtual {v0, v4}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    invoke-virtual {v1, v4}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    new-instance v5, Landroid/content/Intent;

    const-class v7, Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-direct {v5, p0, v7}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 87
    invoke-virtual {v5, v6, v4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v4

    invoke-virtual {v1, v4}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 86
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 89
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiDBDC;->mTabHost:Landroid/widget/TabHost;

    invoke-virtual {v0, v3}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    invoke-virtual {v1, v3}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    new-instance v4, Landroid/content/Intent;

    const-class v5, Lcom/mediatek/engineermode/wifi/WiFiTx6632;

    invoke-direct {v4, p0, v5}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 90
    invoke-virtual {v4, v6, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v3

    invoke-virtual {v1, v3}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 89
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 92
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WiFiDBDC;->mTabHost:Landroid/widget/TabHost;

    invoke-virtual {v0, v2}, Landroid/widget/TabHost;->newTabSpec(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setIndicator(Ljava/lang/CharSequence;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    new-instance v3, Landroid/content/Intent;

    const-class v4, Lcom/mediatek/engineermode/wifi/WiFiRx6632;

    invoke-direct {v3, p0, v4}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 93
    invoke-virtual {v3, v6, v2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TabHost$TabSpec;->setContent(Landroid/content/Intent;)Landroid/widget/TabHost$TabSpec;

    move-result-object v1

    .line 92
    invoke-virtual {v0, v1}, Landroid/widget/TabHost;->addTab(Landroid/widget/TabHost$TabSpec;)V

    .line 96
    :goto_0
    return-void
.end method
