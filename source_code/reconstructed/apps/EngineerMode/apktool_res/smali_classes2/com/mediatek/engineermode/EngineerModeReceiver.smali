.class public final Lcom/mediatek/engineermode/EngineerModeReceiver;
.super Landroid/content/BroadcastReceiver;
.source "EngineerModeReceiver.java"


# static fields
.field private static final SECRET_CODE_ACTION:Ljava/lang/String; = "android.provider.Telephony.SECRET_CODE"

.field private static final TAG:Ljava/lang/String; = "EngineerModeReceiver"


# instance fields
.field private final mEmUri:Landroid/net/Uri;

.field private final mMTKLoggerUri:Landroid/net/Uri;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 48
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    .line 54
    const-string v0, "android_secret_code://3646633"

    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/EngineerModeReceiver;->mEmUri:Landroid/net/Uri;

    .line 56
    const-string v0, "android_secret_code://98685"

    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/EngineerModeReceiver;->mMTKLoggerUri:Landroid/net/Uri;

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 7
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "intent"    # Landroid/content/Intent;

    .line 60
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v1, "EngineerModeReceiver"

    if-nez v0, :cond_0

    .line 61
    const-string v0, "Null action"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->e(Ljava/lang/String;Ljava/lang/String;)V

    .line 62
    return-void

    .line 64
    :cond_0
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v2, "android.provider.Telephony.SECRET_CODE"

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 65
    invoke-virtual {p2}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v0

    .line 66
    .local v0, "uri":Landroid/net/Uri;
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Receive secret code intent and uri is "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 67
    iget-object v2, p0, Lcom/mediatek/engineermode/EngineerModeReceiver;->mEmUri:Landroid/net/Uri;

    invoke-virtual {v0, v2}, Landroid/net/Uri;->equals(Ljava/lang/Object;)Z

    move-result v2

    const/high16 v3, 0x10000000

    if-eqz v2, :cond_1

    .line 68
    new-instance v1, Landroid/content/Intent;

    const-class v2, Lcom/mediatek/engineermode/EngineerMode;

    invoke-direct {v1, p1, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 69
    .local v1, "intentEm":Landroid/content/Intent;
    invoke-virtual {v1, v3}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 70
    invoke-virtual {p1, v1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    .end local v1    # "intentEm":Landroid/content/Intent;
    goto :goto_0

    .line 71
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/EngineerModeReceiver;->mMTKLoggerUri:Landroid/net/Uri;

    invoke-virtual {v0, v2}, Landroid/net/Uri;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 72
    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    .line 73
    .local v2, "intentMTKLogger":Landroid/content/Intent;
    const-string v4, "android.intent.action.MAIN"

    invoke-virtual {v2, v4}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 74
    const-string v4, "android.intent.category.LAUNCHER"

    invoke-virtual {v2, v4}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    .line 75
    new-instance v4, Landroid/content/ComponentName;

    const-string v5, "com.debug.loggerui"

    const-string v6, "com.debug.loggerui.MainActivity"

    invoke-direct {v4, v5, v6}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v2, v4}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 77
    invoke-virtual {v2, v3}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 78
    const-string v3, "Before start MTKLogger MainActivity"

    invoke-static {v1, v3}, Lcom/mediatek/engineermode/Elog;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 79
    invoke-virtual {p1, v2}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    nop

    .line 82
    .end local v0    # "uri":Landroid/net/Uri;
    .end local v2    # "intentMTKLogger":Landroid/content/Intent;
    :cond_2
    :goto_0
    return-void
.end method
