.class Lcom/mediatek/lbs/em2/ui/LbsAgps$71;
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

    .line 1028
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$71;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 1

    .line 1031
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$71;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object v0, p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxCertFromSdcard:Landroid/widget/CheckBox;

    invoke-virtual {p1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p1

    invoke-virtual {v0, p1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setCertFromSdcard(Z)V

    .line 1032
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$71;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxCertFromSdcard:Landroid/widget/CheckBox;

    invoke-virtual {p1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p1

    if-nez p1, :cond_0

    .line 1033
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$71;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-virtual {p0}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const/4 p1, 0x0

    const-string v0, "To disable this feature, please reboot your phone"

    invoke-static {p0, v0, p1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    .line 1035
    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    :cond_0
    return-void
.end method
