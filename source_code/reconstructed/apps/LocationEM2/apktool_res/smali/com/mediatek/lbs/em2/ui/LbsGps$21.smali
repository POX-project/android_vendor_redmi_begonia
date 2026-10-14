.class Lcom/mediatek/lbs/em2/ui/LbsGps$21;
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

    .line 484
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$21;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 486
    check-cast p1, Landroid/widget/CheckBox;

    .line 487
    invoke-virtual {p1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 488
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$21;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    const/4 p1, 0x7

    .line 489
    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$2800(Lcom/mediatek/lbs/em2/ui/LbsGps;)Landroid/widget/TextView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    .line 488
    invoke-static {p0, p1, v0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$2100(Lcom/mediatek/lbs/em2/ui/LbsGps;ILjava/lang/String;)V

    goto :goto_0

    .line 491
    :cond_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsGps$21;->this$0:Lcom/mediatek/lbs/em2/ui/LbsGps;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsGps;->access$2200(Lcom/mediatek/lbs/em2/ui/LbsGps;)V

    :goto_0
    return-void
.end method
