.class Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;
.super Ljava/lang/Object;
.source "VilteConfigFragment.java"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->showDialog(Landroid/view/View;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

.field final synthetic val$userInput:Landroid/widget/EditText;

.field final synthetic val$view:Landroid/view/View;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;Landroid/widget/EditText;Landroid/view/View;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    .line 614
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    iput-object p2, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->val$userInput:Landroid/widget/EditText;

    iput-object p3, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->val$view:Landroid/view/View;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 5
    .param p1, "dialog"    # Landroid/content/DialogInterface;
    .param p2, "id"    # I

    .line 616
    const/4 v0, 0x1

    .line 617
    .local v0, "isLegal":Z
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->val$userInput:Landroid/widget/EditText;

    invoke-virtual {v1}, Landroid/widget/EditText;->getText()Landroid/text/Editable;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    .line 618
    const-string v2, "^0*"

    const-string v3, ""

    invoke-virtual {v1, v2, v3}, Ljava/lang/String;->replaceFirst(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 619
    .local v1, "newValue":Ljava/lang/String;
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->checkNumeric(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 620
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->val$view:Landroid/view/View;

    invoke-virtual {v2}, Landroid/view/View;->getId()I

    move-result v2

    sparse-switch v2, :sswitch_data_0

    .line 660
    goto/16 :goto_0

    .line 626
    :sswitch_0
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    invoke-static {v2}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->access$000(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)Ljava/util/ArrayList;

    move-result-object v2

    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->val$view:Landroid/view/View;

    invoke-virtual {v3}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->setWidth(Ljava/lang/String;)V

    .line 628
    goto/16 :goto_0

    .line 645
    :sswitch_1
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    .line 646
    invoke-static {v3}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->access$000(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)Ljava/util/ArrayList;

    move-result-object v3

    iget-object v4, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->val$view:Landroid/view/View;

    .line 647
    invoke-virtual {v4}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Integer;

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    .line 646
    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    .line 648
    invoke-virtual {v3}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getMaxBitRate()Ljava/lang/String;

    move-result-object v3

    .line 646
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v3

    .line 645
    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    if-le v2, v3, :cond_0

    .line 649
    const/4 v0, 0x0

    goto/16 :goto_0

    .line 651
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    invoke-static {v2}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->access$000(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)Ljava/util/ArrayList;

    move-result-object v2

    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->val$view:Landroid/view/View;

    invoke-virtual {v3}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    .line 652
    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->setMinBitRate(Ljava/lang/String;)V

    .line 654
    goto/16 :goto_0

    .line 634
    :sswitch_2
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    .line 635
    invoke-static {v3}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->access$000(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)Ljava/util/ArrayList;

    move-result-object v3

    iget-object v4, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->val$view:Landroid/view/View;

    .line 636
    invoke-virtual {v4}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Integer;

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    .line 635
    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    .line 637
    invoke-virtual {v3}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getMinBitRate()Ljava/lang/String;

    move-result-object v3

    .line 635
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v3

    .line 634
    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    if-ge v2, v3, :cond_1

    .line 638
    const/4 v0, 0x0

    goto :goto_0

    .line 640
    :cond_1
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    invoke-static {v2}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->access$000(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)Ljava/util/ArrayList;

    move-result-object v2

    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->val$view:Landroid/view/View;

    invoke-virtual {v3}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    .line 641
    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->setMaxBitRate(Ljava/lang/String;)V

    .line 643
    goto :goto_0

    .line 630
    :sswitch_3
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    invoke-static {v2}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->access$000(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)Ljava/util/ArrayList;

    move-result-object v2

    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->val$view:Landroid/view/View;

    invoke-virtual {v3}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->setHeight(Ljava/lang/String;)V

    .line 632
    goto :goto_0

    .line 656
    :sswitch_4
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    invoke-static {v2}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->access$000(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)Ljava/util/ArrayList;

    move-result-object v2

    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->val$view:Landroid/view/View;

    invoke-virtual {v3}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->setFramerate(Ljava/lang/String;)V

    .line 658
    goto :goto_0

    .line 622
    :sswitch_5
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    invoke-static {v2}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->access$000(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)Ljava/util/ArrayList;

    move-result-object v2

    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->val$view:Landroid/view/View;

    invoke-virtual {v3}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    invoke-virtual {v2, v1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->setIinterval(Ljava/lang/String;)V

    .line 624
    goto :goto_0

    .line 663
    :cond_2
    const/4 v0, 0x0

    .line 665
    :goto_0
    if-eqz v0, :cond_3

    .line 666
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->val$view:Landroid/view/View;

    check-cast v2, Landroid/widget/TextView;

    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    .line 668
    :cond_3
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    .line 669
    invoke-static {v2}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->access$100(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)Landroid/app/Activity;

    move-result-object v2

    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;->this$0:Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    .line 670
    invoke-static {v3}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->access$100(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)Landroid/app/Activity;

    move-result-object v3

    invoke-virtual {v3}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    const v4, 0x7f0a066e

    invoke-virtual {v3, v4}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x0

    .line 668
    invoke-static {v2, v3, v4}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v2

    .line 672
    invoke-virtual {v2}, Landroid/widget/Toast;->show()V

    .line 674
    :goto_1
    return-void

    :sswitch_data_0
    .sparse-switch
        0x7f060769 -> :sswitch_5
        0x7f06076c -> :sswitch_4
        0x7f06076d -> :sswitch_3
        0x7f060770 -> :sswitch_2
        0x7f060771 -> :sswitch_1
        0x7f060776 -> :sswitch_0
    .end sparse-switch
.end method
