.class Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$12;
.super Landroid/os/Handler;
.source "LbsC2kDbg.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V
    .locals 0

    .line 368
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$12;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 2

    .line 370
    iget v0, p1, Landroid/os/Message;->what:I

    if-eqz v0, :cond_2

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    const-string p0, "WARNING: unknown handle event recv!!"

    .line 381
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->log(Ljava/lang/Object;)V

    goto :goto_0

    .line 378
    :cond_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$12;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->parseMsg(Ljava/lang/String;)V

    goto :goto_0

    .line 375
    :cond_1
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$12;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$1500(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)I

    move-result p1

    invoke-static {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$1600(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;I)V

    goto :goto_0

    .line 372
    :cond_2
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$12;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    iget p1, p1, Landroid/os/Message;->arg1:I

    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->HandleCallStateUpdated(I)V

    :goto_0
    return-void
.end method
