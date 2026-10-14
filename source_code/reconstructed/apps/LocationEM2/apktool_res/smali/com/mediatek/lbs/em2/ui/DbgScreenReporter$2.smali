.class Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$2;
.super Landroid/content/BroadcastReceiver;
.source "DbgScreenReporter.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;)V
    .locals 0

    .line 143
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$2;->this$0:Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 1

    .line 145
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    const-string v0, "com.mediatek.lbs.em2.action.debug_message"

    .line 146
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 147
    invoke-virtual {p2}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object p1

    const-string p2, "vzw_dbg"

    invoke-virtual {p1, p2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 148
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "vzw_dbg: "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->log(Ljava/lang/Object;)V

    .line 149
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$2;->this$0:Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;

    const/4 p2, 0x2

    const/4 v0, 0x0

    invoke-static {p0, p2, v0, v0, p1}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->access$200(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;IIILjava/lang/Object;)V

    :cond_0
    return-void
.end method
