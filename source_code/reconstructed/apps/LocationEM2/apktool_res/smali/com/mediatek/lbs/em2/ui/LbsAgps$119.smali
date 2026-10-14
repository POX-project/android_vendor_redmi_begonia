.class Lcom/mediatek/lbs/em2/ui/LbsAgps$119;
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

    .line 1666
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$119;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCancelClick(Landroid/app/Dialog;Landroid/view/View;Ljava/lang/String;)V
    .locals 0

    .line 1694
    invoke-virtual {p1}, Landroid/app/Dialog;->dismiss()V

    return-void
.end method

.method public onOKClick(Landroid/app/Dialog;Landroid/view/View;Ljava/lang/String;)V
    .locals 2

    const/4 p2, 0x0

    .line 1670
    :try_start_0
    invoke-static {p3}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/Integer;->intValue()I

    move-result p3

    .line 1672
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$119;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-boolean v0, v0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mIsKValueUnit:Z

    if-nez v0, :cond_0

    .line 1673
    invoke-static {p3}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->calcKFromMeter(I)I

    move-result v0

    goto :goto_0

    :cond_0
    move v0, p3

    :goto_0
    const/16 v1, 0x64

    if-le v0, v1, :cond_1

    .line 1676
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$119;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {p1}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    const-string p3, "ERR: The K-value must be less than 100!!"

    invoke-static {p1, p3, p2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p1

    .line 1678
    invoke-virtual {p1}, Landroid/widget/Toast;->show()V

    return-void

    .line 1682
    :cond_1
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$119;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewHAcc:Landroid/widget/TextView;

    invoke-static {p3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1683
    invoke-virtual {p1}, Landroid/app/Dialog;->dismiss()V

    .line 1684
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$119;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {p1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->updateQoP()V
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    .line 1687
    :catch_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$119;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const-string p1, "ERR: Parameters error!!"

    invoke-static {p0, p1, p2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    .line 1688
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    :goto_1
    return-void
.end method
