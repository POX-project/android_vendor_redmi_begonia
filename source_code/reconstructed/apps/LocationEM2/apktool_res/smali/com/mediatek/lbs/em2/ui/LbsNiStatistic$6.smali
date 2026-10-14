.class Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$6;
.super Ljava/lang/Object;
.source "LbsNiStatistic.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->showNiStatisticConfirmDialog()V
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

    .line 306
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 1

    .line 308
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$200(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)Landroid/widget/ToggleButton;

    move-result-object p1

    const/4 p2, 0x1

    invoke-virtual {p1, p2}, Landroid/widget/ToggleButton;->setEnabled(Z)V

    .line 309
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$500(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)Landroid/widget/Button;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 310
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$1100(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V

    .line 311
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$700(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)Landroid/widget/Button;

    move-result-object p1

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Landroid/widget/Button;->setEnabled(Z)V

    .line 312
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    const/4 v0, 0x3

    invoke-static {p1, v0, p2}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$000(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;II)V

    .line 313
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic$6;->this$0:Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;->access$1200(Lcom/mediatek/lbs/em2/ui/LbsNiStatistic;)V

    return-void
.end method
