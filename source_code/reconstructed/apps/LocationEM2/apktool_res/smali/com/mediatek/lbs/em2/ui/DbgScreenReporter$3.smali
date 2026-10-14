.class Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$3;
.super Landroid/os/Handler;
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

    .line 343
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$3;->this$0:Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 2

    .line 345
    iget v0, p1, Landroid/os/Message;->what:I

    if-eqz v0, :cond_2

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    const-string p0, "WARNING: unknown handle event recv!!"

    .line 356
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->log(Ljava/lang/Object;)V

    goto :goto_0

    .line 353
    :cond_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$3;->this$0:Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->parseMsg(Ljava/lang/String;)V

    goto :goto_0

    .line 350
    :cond_1
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$3;->this$0:Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->access$300(Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;)V

    goto :goto_0

    .line 347
    :cond_2
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter$3;->this$0:Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;

    iget p1, p1, Landroid/os/Message;->arg1:I

    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/DbgScreenReporter;->HandleCallStateUpdated(I)V

    :goto_0
    return-void
.end method
