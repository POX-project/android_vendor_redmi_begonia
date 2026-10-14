.class Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$3;
.super Ljava/lang/Object;
.source "LbsC2kDbg.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->initUI()V
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

    .line 240
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2

    .line 243
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$300(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)Landroid/widget/ToggleButton;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/ToggleButton;->isChecked()Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p1, "C2kDebug button Clicked ON"

    .line 244
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->log(Ljava/lang/Object;)V

    .line 245
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$400(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V

    goto :goto_0

    :cond_0
    const-string p1, "C2kDebug button Clicked OFF"

    .line 247
    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->log(Ljava/lang/Object;)V

    .line 248
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$500(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)Landroid/os/Handler;

    move-result-object p1

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 249
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    const/4 v1, 0x0

    invoke-virtual {p1, v1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->HandleCallStateUpdated(I)V

    .line 250
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$600(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)Landroid/widget/Button;

    move-result-object p1

    invoke-virtual {p1, v1}, Landroid/widget/Button;->setEnabled(Z)V

    .line 251
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$700(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V

    .line 252
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$800(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V

    .line 253
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$900(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)Landroid/widget/Button;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/widget/Button;->setEnabled(Z)V

    .line 255
    :goto_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$3;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$300(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)Landroid/widget/ToggleButton;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/ToggleButton;->isChecked()Z

    move-result p1

    invoke-static {p0, p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$1000(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;Z)V

    return-void
.end method
