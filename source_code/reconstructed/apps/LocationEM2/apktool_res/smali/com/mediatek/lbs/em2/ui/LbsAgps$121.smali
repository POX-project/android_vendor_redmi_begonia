.class Lcom/mediatek/lbs/em2/ui/LbsAgps$121;
.super Ljava/lang/Object;
.source "LbsAgps.java"

# interfaces
.implements Lcom/mediatek/lbs/em2/ui/LbsAgps$DialogListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsAgps;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsAgps;)V
    .locals 0

    .line 1730
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$121;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCancelClick(Landroid/app/Dialog;Landroid/view/View;Ljava/lang/String;)V
    .locals 0

    .line 1746
    invoke-virtual {p1}, Landroid/app/Dialog;->dismiss()V

    return-void
.end method

.method public onOKClick(Landroid/app/Dialog;Landroid/view/View;Ljava/lang/String;)V
    .locals 0

    .line 1734
    :try_start_0
    invoke-static {p3}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    .line 1735
    iget-object p3, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$121;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p3, p3, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewLocationAge:Landroid/widget/TextView;

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p3, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1736
    invoke-virtual {p1}, Landroid/app/Dialog;->dismiss()V

    .line 1737
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$121;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {p1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->updateQoP()V
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 1739
    :catch_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$121;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const/4 p1, 0x0

    const-string p2, "ERR: Parameters error!!"

    invoke-static {p0, p2, p1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    .line 1740
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    :goto_0
    return-void
.end method
