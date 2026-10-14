.class Lcom/mediatek/lbs/em2/ui/LbsAgps$116;
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

    .line 1585
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$116;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCancelClick(Landroid/app/Dialog;Landroid/view/View;Ljava/lang/String;)V
    .locals 0

    .line 1608
    invoke-virtual {p1}, Landroid/app/Dialog;->dismiss()V

    return-void
.end method

.method public onOKClick(Landroid/app/Dialog;Landroid/view/View;Ljava/lang/String;)V
    .locals 1

    const/4 p2, 0x0

    .line 1589
    :try_start_0
    invoke-static {p3}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/Integer;->intValue()I

    move-result p3

    const v0, 0xffff

    if-le p3, v0, :cond_0

    .line 1591
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$116;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    .line 1592
    invoke-virtual {p1}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    const-string p3, "ERR: The SLP port value must be less than 65536!!"

    .line 1591
    invoke-static {p1, p3, p2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p1

    .line 1594
    invoke-virtual {p1}, Landroid/widget/Toast;->show()V

    goto :goto_0

    .line 1596
    :cond_0
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$116;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewSlpPort:Landroid/widget/TextView;

    invoke-static {p3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1597
    invoke-virtual {p1}, Landroid/app/Dialog;->dismiss()V

    .line 1598
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$116;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {p1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->updateSuplProfile()V
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 1601
    :catch_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$116;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const-string p1, "ERR: Parameters error!!"

    invoke-static {p0, p1, p2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    .line 1602
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    :goto_0
    return-void
.end method
