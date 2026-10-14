.class Lcom/android/hotwordenrollment/common/StartupReceiver$1;
.super Ljava/lang/Thread;
.source "StartupReceiver.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/android/hotwordenrollment/common/StartupReceiver;->onReceive(Landroid/content/Context;Landroid/content/Intent;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic val$context:Landroid/content/Context;

.field final synthetic val$result:Landroid/content/BroadcastReceiver$PendingResult;


# direct methods
.method constructor <init>(Lcom/android/hotwordenrollment/common/StartupReceiver;Landroid/content/Context;Landroid/content/BroadcastReceiver$PendingResult;)V
    .locals 0

    .line 46
    iput-object p2, p0, Lcom/android/hotwordenrollment/common/StartupReceiver$1;->val$context:Landroid/content/Context;

    iput-object p3, p0, Lcom/android/hotwordenrollment/common/StartupReceiver$1;->val$result:Landroid/content/BroadcastReceiver$PendingResult;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 48
    iget-object v0, p0, Lcom/android/hotwordenrollment/common/StartupReceiver$1;->val$context:Landroid/content/Context;

    invoke-static {v0}, Lcom/android/hotwordenrollment/common/StartupReceiver;->access$000(Landroid/content/Context;)V

    .line 49
    iget-object p0, p0, Lcom/android/hotwordenrollment/common/StartupReceiver$1;->val$result:Landroid/content/BroadcastReceiver$PendingResult;

    invoke-virtual {p0}, Landroid/content/BroadcastReceiver$PendingResult;->finish()V

    return-void
.end method
