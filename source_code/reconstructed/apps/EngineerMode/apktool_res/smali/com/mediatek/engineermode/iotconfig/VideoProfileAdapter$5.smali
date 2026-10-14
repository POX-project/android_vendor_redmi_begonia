.class Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$5;
.super Ljava/lang/Object;
.source "VilteConfigFragment.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    .line 750
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$5;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 3
    .param p1, "view"    # Landroid/view/View;

    .line 755
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const v1, 0x7f060777

    if-ne v0, v1, :cond_0

    .line 756
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$5;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    invoke-virtual {v0, p1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->showSpinnerDialog(Landroid/view/View;)V

    goto :goto_1

    .line 757
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const v1, 0x7f060772

    if-eq v0, v1, :cond_2

    .line 758
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const v1, 0x7f060773

    if-eq v0, v1, :cond_2

    .line 759
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result v0

    const v1, 0x7f06076e

    if-ne v0, v1, :cond_1

    goto :goto_0

    .line 766
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$5;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    invoke-virtual {v0, p1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->showDialog(Landroid/view/View;)V

    goto :goto_1

    .line 760
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$5;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    .line 761
    invoke-static {v0}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->access$100(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)Landroid/app/Activity;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    move-object v2, p1

    check-cast v2, Landroid/widget/TextView;

    .line 762
    invoke-virtual {v2}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, " can\'t be modified"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    .line 760
    invoke-static {v0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    .line 764
    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    .line 768
    :goto_1
    return-void
.end method
