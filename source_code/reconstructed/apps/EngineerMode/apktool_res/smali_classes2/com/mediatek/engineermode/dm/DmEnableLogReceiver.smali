.class public Lcom/mediatek/engineermode/dm/DmEnableLogReceiver;
.super Landroid/content/BroadcastReceiver;
.source "DmEnableLogReceiver.java"


# static fields
.field private static final ACTION_ENABLE_DM_LOG:Ljava/lang/String; = "com.mediatek.engineermode.dm.ACTION_ENABLE_DM_LOG"

.field private static final EXTRA_ENABLED:Ljava/lang/String; = "enabled"

.field private static final EXTRA_TARGET:Ljava/lang/String; = "target"

.field private static final TAG:Ljava/lang/String; = "DmEnableLogReceiver"

.field private static final TARGET_ALL:Ljava/lang/String; = "all"

.field private static final TARGET_DM:Ljava/lang/String; = "dm"

.field private static final TARGET_PKM:Ljava/lang/String; = "pkm"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 9
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 26
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v1, "com.mediatek.engineermode.dm.ACTION_ENABLE_DM_LOG"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 27
    const-string v0, "target"

    invoke-virtual {p2, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 28
    .local v0, "target":Ljava/lang/String;
    if-nez v0, :cond_0

    .line 29
    const-string v0, "none"

    .line 31
    :cond_0
    const-string v1, "enabled"

    const/4 v2, 0x0

    invoke-virtual {p2, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    const/4 v3, 0x1

    if-lez v1, :cond_1

    move v1, v3

    goto :goto_0

    :cond_1
    move v1, v2

    .line 33
    .local v1, "enabled":Z
    :goto_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "receive ACTION_ENABLE_DM_LOG, target = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ", enabled = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "DmEnableLogReceiver"

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 35
    new-instance v4, Lcom/mediatek/engineermode/dm/DmSettingController;

    invoke-direct {v4, p1}, Lcom/mediatek/engineermode/dm/DmSettingController;-><init>(Landroid/content/Context;)V

    .line 37
    .local v4, "dmLogCtrl":Lcom/mediatek/engineermode/dm/DmSettingController;
    const/4 v5, -0x1

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v6

    const/16 v7, 0xc89

    const/4 v8, 0x2

    if-eq v6, v7, :cond_5

    const v7, 0x179a1

    if-eq v6, v7, :cond_4

    const v2, 0x1b1d2

    if-eq v6, v2, :cond_3

    :cond_2
    goto :goto_1

    :cond_3
    const-string v2, "pkm"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    move v2, v8

    goto :goto_2

    :cond_4
    const-string v6, "all"

    invoke-virtual {v0, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_2

    goto :goto_2

    :cond_5
    const-string v2, "dm"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    move v2, v3

    goto :goto_2

    :goto_1
    move v2, v5

    :goto_2
    if-eqz v2, :cond_8

    if-eq v2, v3, :cond_7

    if-eq v2, v8, :cond_6

    goto :goto_3

    .line 46
    :cond_6
    invoke-virtual {v4, v1}, Lcom/mediatek/engineermode/dm/DmSettingController;->enablePkmLog(Z)Z

    .line 47
    goto :goto_3

    .line 43
    :cond_7
    invoke-virtual {v4, v1}, Lcom/mediatek/engineermode/dm/DmSettingController;->enableDmLog(Z)Z

    .line 44
    goto :goto_3

    .line 39
    :cond_8
    invoke-virtual {v4, v1}, Lcom/mediatek/engineermode/dm/DmSettingController;->enableDmLog(Z)Z

    .line 40
    invoke-virtual {v4, v1}, Lcom/mediatek/engineermode/dm/DmSettingController;->enablePkmLog(Z)Z

    .line 53
    .end local v0    # "target":Ljava/lang/String;
    .end local v1    # "enabled":Z
    .end local v4    # "dmLogCtrl":Lcom/mediatek/engineermode/dm/DmSettingController;
    :cond_9
    :goto_3
    return-void
.end method
