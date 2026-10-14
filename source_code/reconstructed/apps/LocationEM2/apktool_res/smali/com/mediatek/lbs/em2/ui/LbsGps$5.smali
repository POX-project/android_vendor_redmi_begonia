.class Lcom/mediatek/lbs/em2/ui/LbsGps$5;
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

    .line 318
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 321
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$100(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/ToggleButton;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/ToggleButton;->isChecked()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 323
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$200(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/ToggleButton;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/widget/ToggleButton;->setEnabled(Z)V

    .line 324
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$300(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    goto :goto_0

    .line 326
    :cond_0
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p1}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$200(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/ToggleButton;

    move-result-object p1

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/widget/ToggleButton;->setEnabled(Z)V

    .line 327
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$5;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$400(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    :goto_0
    return-void
.end method
