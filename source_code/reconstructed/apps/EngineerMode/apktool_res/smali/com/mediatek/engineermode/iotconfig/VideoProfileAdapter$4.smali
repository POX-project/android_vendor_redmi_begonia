.class Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$4;
.super Ljava/lang/Object;
.source "VilteConfigFragment.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->showSpinnerDialog(Landroid/view/View;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

.field final synthetic val$userInput:Landroid/widget/Spinner;

.field final synthetic val$view:Landroid/view/View;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;Landroid/widget/Spinner;Landroid/view/View;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    .line 707
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$4;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    iput-object p2, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$4;->val$userInput:Landroid/widget/Spinner;

    iput-object p3, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$4;->val$view:Landroid/view/View;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 5
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "id"    # I

    .line 709
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$4;->val$userInput:Landroid/widget/Spinner;

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 710
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$4;->val$userInput:Landroid/widget/Spinner;

    invoke-virtual {v0}, Landroid/widget/Spinner;->getSelectedItem()Ljava/lang/Object;

    move-result-object v0

    .line 711
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    .line 712
    .local v0, "newValue":Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$4;->val$view:Landroid/view/View;

    invoke-virtual {v1}, Landroid/view/View;->getId()I

    move-result v1

    const v2, 0x7f060777

    if-eq v1, v2, :cond_0

    goto :goto_0

    .line 714
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$4;->val$view:Landroid/view/View;

    invoke-virtual {v1}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    .line 715
    .local v1, "mPosition":I
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$4;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    invoke-static {v2}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->access$000(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->isSelected()Z

    move-result v2

    if-nez v2, :cond_1

    .line 716
    const-string v2, ""

    invoke-virtual {v0, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 717
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$4;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    .line 718
    invoke-static {v2}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->access$100(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)Landroid/app/Activity;

    move-result-object v2

    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$4;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    .line 719
    invoke-static {v3}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->access$100(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)Landroid/app/Activity;

    move-result-object v3

    invoke-virtual {v3}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    const v4, 0x7f0a068b

    .line 720
    invoke-virtual {v3, v4}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x0

    .line 717
    invoke-static {v2, v3, v4}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v2

    .line 722
    invoke-virtual {v2}, Landroid/widget/Toast;->show()V

    goto :goto_0

    .line 724
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$4;->val$view:Landroid/view/View;

    check-cast v2, Landroid/widget/TextView;

    invoke-virtual {v2, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 725
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$4;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    invoke-static {v2}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->access$000(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v2, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    invoke-virtual {v2, v0}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->setQuality(Ljava/lang/String;)V

    .line 733
    .end local v0    # "newValue":Ljava/lang/String;
    .end local v1    # "mPosition":I
    :cond_2
    :goto_0
    return-void
.end method
