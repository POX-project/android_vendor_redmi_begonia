.class Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$3;
.super Ljava/lang/Object;
.source "LbsNiStatistic.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->initUI()V
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

    .line 260
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2

    .line 263
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$200(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)Landroid/widget/ToggleButton;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/ToggleButton;->isChecked()Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p1, "NiDebug button Clicked ON"

    .line 264
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    .line 265
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$300(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V

    goto :goto_0

    :cond_0
    const-string p1, "NiDebug button Clicked OFF"

    .line 267
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->log(Ljava/lang/Object;)V

    .line 268
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-virtual {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->updateSessionIdle()V

    .line 269
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$400(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)Landroid/os/Handler;

    move-result-object p1

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 270
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    const/4 v1, 0x0

    invoke-virtual {p1, v1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->HandleCallStateUpdated(I)V

    .line 271
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$500(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)Landroid/widget/Button;

    move-result-object p1

    invoke-virtual {p1, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 272
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$600(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V

    .line 273
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$700(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)Landroid/widget/Button;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/widget/Button;->setEnabled(Z)V

    .line 275
    :goto_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$200(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)Landroid/widget/ToggleButton;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/ToggleButton;->isChecked()Z

    move-result p1

    invoke-static {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$800(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;Z)V

    return-void
.end method
