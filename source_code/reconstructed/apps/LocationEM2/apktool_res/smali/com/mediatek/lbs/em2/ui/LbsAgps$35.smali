.class Lcom/mediatek/lbs/em2/ui/LbsAgps$35;
.super Ljava/lang/Object;
.source "LbsAgps.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsAgps;->addOnClickListener()V
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

    .line 736
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$35;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 739
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$35;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object v0, p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxUdpEnable:Landroid/widget/CheckBox;

    invoke-virtual {p1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p1

    invoke-virtual {v0, p1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setUdpEnable(Z)V

    .line 740
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$35;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {p1}, Lcom/mediatek/lbs/em2/ui/LbsAgps;->setLayoutDependency()V

    .line 741
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$35;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxUdpEnable:Landroid/widget/CheckBox;

    invoke-virtual {p1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p1

    const/4 v0, 0x1

    if-eqz p1, :cond_0

    .line 742
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$35;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    .line 743
    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const-string p1, "WARNING: after you enable UDP for SUPL, please do not run CTS or you may get the failure on netstat test case"

    .line 742
    invoke-static {p0, p1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    .line 745
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    goto :goto_0

    .line 747
    :cond_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$35;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    .line 748
    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const-string p1, "WARNING: To cancel the UDP binding, you need to re-start your device"

    .line 747
    invoke-static {p0, p1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    .line 750
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    :goto_0
    return-void
.end method
