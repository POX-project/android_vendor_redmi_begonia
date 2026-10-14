.class Lcom/mediatek/lbs/em2/ui/LbsAgps$122;
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

    .line 1750
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$122;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCancelClick(Landroid/app/Dialog;Landroid/view/View;Ljava/lang/String;)V
    .locals 0

    .line 1770
    invoke-virtual {p1}, Landroid/app/Dialog;->dismiss()V

    return-void
.end method

.method public onOKClick(Landroid/app/Dialog;Landroid/view/View;Ljava/lang/String;)V
    .locals 2

    const/4 p2, 0x0

    .line 1754
    :try_start_0
    invoke-static {p3}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/Integer;->intValue()I

    move-result p3

    const v0, 0x8e72

    if-ne p3, v0, :cond_1

    .line 1756
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$122;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$122;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {v1}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mediatek/lbs/em2/ui/LbsUtility;->isDebugModeEnabled(Landroid/content/Context;)Z

    move-result v1

    if-nez v1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    move v1, p2

    :goto_0
    invoke-virtual {v0, v1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->enableDebugMode(Z)V

    .line 1757
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$122;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {v0}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->applyAgpsConfigToUI()V

    .line 1759
    :cond_1
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$122;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object v0, v0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mTextViewDelay:Landroid/widget/TextView;

    invoke-static {p3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1760
    invoke-virtual {p1}, Landroid/app/Dialog;->dismiss()V

    .line 1761
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$122;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {p1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->updateQoP()V
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    .line 1763
    :catch_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$122;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const-string p1, "ERR: Parameters error!!"

    invoke-static {p0, p1, p2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    .line 1764
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    :goto_1
    return-void
.end method
