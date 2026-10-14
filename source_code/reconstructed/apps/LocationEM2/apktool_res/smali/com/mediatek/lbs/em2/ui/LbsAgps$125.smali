.class Lcom/mediatek/lbs/em2/ui/LbsAgps$125;
.super Ljava/lang/Object;
.source "LbsAgps.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsAgps;->showLogConfirmDialog()V
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

    .line 2682
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$125;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0

    .line 2684
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$125;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLogSensitiveData:Landroid/widget/CheckBox;

    const/4 p2, 0x1

    invoke-virtual {p1, p2}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 2685
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$125;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p1, p1, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mCheckBoxLogSensitiveData:Landroid/widget/CheckBox;

    invoke-virtual {p1}, Landroid/widget/CheckBox;->isChecked()Z

    move-result p1

    xor-int/2addr p1, p2

    .line 2686
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps$125;->this$0:Lcom/mediatek/lbs/em2/ui/LbsAgps;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsAgps;->mAgpsInterface:Lcom/mediatek/lbs/em2/utils/AgpsInterface;

    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/utils/AgpsInterface;->setNoSensitiveLog(Z)V

    return-void
.end method
