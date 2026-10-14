.class Lcom/mediatek/lbs/em2/ui/LbsView$4;
.super Ljava/lang/Object;
.source "LbsView.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsView;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsView;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsView;)V
    .locals 0

    .line 81
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 2

    .line 84
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    const-string v0, "Constellation Type:\n"

    const-string v1, "G: GPS\nS: SBAS\nR: GLONASS\nQ: QZSS\nB: BEIDOU\nE: GALILEO\nI: IRNSS\n\nExample:\nGL1: GPS Band L1\nRL5: GLONASS Band L5"

    invoke-static {p1, v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsView;->access$200(Lcom/mediatek/lbs/em2/ui/LbsView;Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V

    .line 95
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsView;->mRadioButtonINFO:Landroid/widget/RadioButton;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/widget/RadioButton;->setChecked(Z)V

    .line 96
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsView;->access$000(Lcom/mediatek/lbs/em2/ui/LbsView;)I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 97
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mRadioButtonGNSS:Landroid/widget/RadioButton;

    invoke-virtual {p0, v0}, Landroid/widget/RadioButton;->setChecked(Z)V

    goto :goto_0

    .line 98
    :cond_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsView$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsView;->access$000(Lcom/mediatek/lbs/em2/ui/LbsView;)I

    move-result p1

    const/4 v1, 0x3

    if-ne p1, v1, :cond_1

    .line 99
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView$4;->this$0:Lcom/mediatek/lbs/em2/ui/LbsView;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsView;->mRadioButtonNMEA:Landroid/widget/RadioButton;

    invoke-virtual {p0, v0}, Landroid/widget/RadioButton;->setChecked(Z)V

    :cond_1
    :goto_0
    return-void
.end method
