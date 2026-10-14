.class public Lcom/mediatek/engineermode/EmApplication;
.super Landroid/app/Application;
.source "EmApplication.java"


# static fields
.field private static final DEFAULT_NOTIFICATION_CHANNEL_ID:Ljava/lang/String; = "mtk_em_default_channel_id"

.field private static final LOW_NOTIFICATION_CHANNEL_ID:Ljava/lang/String; = "mtk_em_low_channel_id"

.field private static final TAG:Ljava/lang/String; = "EmApplication"

.field private static sContext:Landroid/content/Context;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 67
    invoke-direct {p0}, Landroid/app/Application;-><init>()V

    return-void
.end method

.method public static getContext()Landroid/content/Context;
    .locals 1

    .line 79
    sget-object v0, Lcom/mediatek/engineermode/EmApplication;->sContext:Landroid/content/Context;

    return-object v0
.end method

.method public static getSilentNotificationChannelID()Ljava/lang/String;
    .locals 5

    .line 110
    sget-object v0, Lcom/mediatek/engineermode/EmApplication;->sContext:Landroid/content/Context;

    .line 111
    const-string v1, "notification"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/NotificationManager;

    .line 113
    .local v0, "notificationManager":Landroid/app/NotificationManager;
    const-string v1, "mtk_em_low_channel_id"

    invoke-virtual {v0, v1}, Landroid/app/NotificationManager;->getNotificationChannel(Ljava/lang/String;)Landroid/app/NotificationChannel;

    move-result-object v2

    if-nez v2, :cond_0

    .line 114
    new-instance v2, Landroid/app/NotificationChannel;

    sget-object v3, Lcom/mediatek/engineermode/EmApplication;->sContext:Landroid/content/Context;

    const v4, 0x7f0a0130

    .line 115
    invoke-virtual {v3, v4}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x2

    invoke-direct {v2, v1, v3, v4}, Landroid/app/NotificationChannel;-><init>(Ljava/lang/String;Ljava/lang/CharSequence;I)V

    .line 116
    .local v2, "channel":Landroid/app/NotificationChannel;
    invoke-virtual {v0, v2}, Landroid/app/NotificationManager;->createNotificationChannel(Landroid/app/NotificationChannel;)V

    .line 117
    const-string v3, "EmApplication"

    const-string v4, "create silent notification channel"

    invoke-static {v3, v4}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 119
    .end local v2    # "channel":Landroid/app/NotificationChannel;
    :cond_0
    return-object v1
.end method

.method public static getSoundNotificationChannelID()Ljava/lang/String;
    .locals 6

    .line 88
    sget-object v0, Lcom/mediatek/engineermode/EmApplication;->sContext:Landroid/content/Context;

    .line 89
    const-string v1, "notification"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/NotificationManager;

    .line 91
    .local v0, "notificationManager":Landroid/app/NotificationManager;
    const-string v1, "mtk_em_default_channel_id"

    invoke-virtual {v0, v1}, Landroid/app/NotificationManager;->getNotificationChannel(Ljava/lang/String;)Landroid/app/NotificationChannel;

    move-result-object v2

    if-nez v2, :cond_0

    .line 92
    new-instance v2, Landroid/app/NotificationChannel;

    sget-object v3, Lcom/mediatek/engineermode/EmApplication;->sContext:Landroid/content/Context;

    const v4, 0x7f0a0130

    .line 93
    invoke-virtual {v3, v4}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x3

    invoke-direct {v2, v1, v3, v4}, Landroid/app/NotificationChannel;-><init>(Ljava/lang/String;Ljava/lang/CharSequence;I)V

    .line 94
    .local v2, "channel":Landroid/app/NotificationChannel;
    const/4 v3, 0x2

    invoke-static {v3}, Landroid/media/RingtoneManager;->getDefaultUri(I)Landroid/net/Uri;

    move-result-object v3

    new-instance v4, Landroid/media/AudioAttributes$Builder;

    invoke-direct {v4}, Landroid/media/AudioAttributes$Builder;-><init>()V

    const/4 v5, 0x5

    .line 95
    invoke-virtual {v4, v5}, Landroid/media/AudioAttributes$Builder;->setUsage(I)Landroid/media/AudioAttributes$Builder;

    move-result-object v4

    .line 96
    invoke-virtual {v4}, Landroid/media/AudioAttributes$Builder;->build()Landroid/media/AudioAttributes;

    move-result-object v4

    .line 94
    invoke-virtual {v2, v3, v4}, Landroid/app/NotificationChannel;->setSound(Landroid/net/Uri;Landroid/media/AudioAttributes;)V

    .line 97
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "get sound "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Landroid/app/NotificationChannel;->getSound()Landroid/net/Uri;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "EmApplication"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 98
    invoke-virtual {v0, v2}, Landroid/app/NotificationManager;->createNotificationChannel(Landroid/app/NotificationChannel;)V

    .line 99
    const-string v3, "create sound notification channel"

    invoke-static {v4, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 101
    .end local v2    # "channel":Landroid/app/NotificationChannel;
    :cond_0
    return-object v1
.end method


# virtual methods
.method public onCreate()V
    .locals 1

    .line 75
    invoke-virtual {p0}, Lcom/mediatek/engineermode/EmApplication;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/EmApplication;->sContext:Landroid/content/Context;

    .line 76
    return-void
.end method
