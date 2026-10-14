.class Lcom/mediatek/lbs/em2/ui/LbsGps$22;
.super Ljava/lang/Object;
.source "LbsGps.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsGps;->initWidget()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsGps;)V
    .locals 0

    .line 497
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$22;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 499
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$22;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$200(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/ToggleButton;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/ToggleButton;->isChecked()Z

    move-result p1

    if-eqz p1, :cond_2

    .line 500
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$22;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$2900(Lcom/mediatek/lbs/em2/ui/LbsGps;)Z

    move-result p1

    const/4 v0, 0x0

    if-nez p1, :cond_0

    .line 501
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$22;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$200(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/ToggleButton;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/widget/ToggleButton;->setChecked(Z)V

    goto :goto_0

    .line 502
    :cond_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$22;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3000(Lcom/mediatek/lbs/em2/ui/LbsGps;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 503
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$22;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$200(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/ToggleButton;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/widget/ToggleButton;->setChecked(Z)V

    goto :goto_0

    .line 505
    :cond_1
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$22;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3100(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    goto :goto_0

    .line 508
    :cond_2
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$22;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$3200(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    :goto_0
    return-void
.end method
