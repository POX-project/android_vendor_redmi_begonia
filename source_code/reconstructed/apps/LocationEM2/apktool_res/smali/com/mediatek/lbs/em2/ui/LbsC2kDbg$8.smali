.class Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$8;
.super Ljava/lang/Object;
.source "LbsC2kDbg.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->showC2kConfirmDialog()V
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

    .line 307
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0

    .line 309
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$300(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)Landroid/widget/ToggleButton;

    move-result-object p1

    const/4 p2, 0x1

    invoke-virtual {p1, p2}, Landroid/widget/ToggleButton;->setEnabled(Z)V

    .line 310
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$600(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)Landroid/widget/Button;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 311
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$1400(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V

    .line 312
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$8;->this$0:Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;->access$900(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)Landroid/widget/Button;

    move-result-object p0

    const/4 p1, 0x0

    invoke-virtual {p0, p1}, Landroid/widget/Button;->setEnabled(Z)V

    return-void
.end method
