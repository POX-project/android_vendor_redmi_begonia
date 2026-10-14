.class Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$10;
.super Landroid/os/Handler;
.source "LbsNiStatistic.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V
    .locals 0

    .line 369
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$10;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 2

    .line 371
    iget v0, p1, Landroid/os/Message;->what:I

    if-eqz v0, :cond_3

    const/4 v1, 0x1

    if-eq v0, v1, :cond_2

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    .line 385
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "WARNING: unknown handle event recv!! msg: "

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p1, Landroid/os/Message;->what:I

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    goto :goto_0

    .line 382
    :cond_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$10;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$1600(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V

    goto :goto_0

    .line 379
    :cond_1
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$10;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    iget v0, p1, Landroid/os/Message;->arg1:I

    iget v1, p1, Landroid/os/Message;->arg2:I

    iget-object p1, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast p1, Ljava/lang/String;

    invoke-static {p0, v0, v1, p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$1500(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;IILjava/lang/String;)V

    goto :goto_0

    .line 376
    :cond_2
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$10;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$1300(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)I

    move-result p1

    invoke-static {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$1400(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;I)V

    goto :goto_0

    .line 373
    :cond_3
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$10;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    iget p1, p1, Landroid/os/Message;->arg1:I

    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->HandleCallStateUpdated(I)V

    :goto_0
    return-void
.end method
