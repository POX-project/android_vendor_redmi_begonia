.class Lcom/mediatek/engineermode/ims/imsSettingPageActivity$SettingMultiSelectView;
.super Lcom/mediatek/engineermode/ims/imsSettingPageActivity$SettingView;
.source "imsSettingPageActivity.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/ims/imsSettingPageActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "SettingMultiSelectView"
.end annotation


# instance fields
.field private mCheckboxes:[Landroid/widget/CheckBox;

.field final synthetic this$0:Lcom/mediatek/engineermode/ims/imsSettingPageActivity;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/ims/imsSettingPageActivity;Landroid/content/Context;Lcom/mediatek/engineermode/ims/Setting;)V
    .locals 5
    .param p2, "context"    # Landroid/content/Context;
    .param p3, "setting"    # Lcom/mediatek/engineermode/ims/Setting;

    .line 502
    iput-object p1, p0, Lcom/mediatek/engineermode/ims/imsSettingPageActivity$SettingMultiSelectView;->this$0:Lcom/mediatek/engineermode/ims/imsSettingPageActivity;

    .line 503
    invoke-direct {p0, p1, p2, p3}, Lcom/mediatek/engineermode/ims/imsSettingPageActivity$SettingView;-><init>(Lcom/mediatek/engineermode/ims/imsSettingPageActivity;Landroid/content/Context;Lcom/mediatek/engineermode/ims/Setting;)V

    .line 504
    const v0, 0x7f0604c7

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/ims/imsSettingPageActivity$SettingMultiSelectView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    .line 505
    .local v0, "checkboxList":Landroid/view/ViewGroup;
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    .line 506
    invoke-virtual {v0}, Landroid/view/ViewGroup;->removeAllViews()V

    .line 507
    iget-object v1, p3, Lcom/mediatek/engineermode/ims/Setting;->entries:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    new-array v1, v1, [Landroid/widget/CheckBox;

    iput-object v1, p0, Lcom/mediatek/engineermode/ims/imsSettingPageActivity$SettingMultiSelectView;->mCheckboxes:[Landroid/widget/CheckBox;

    .line 508
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    iget-object v2, p3, Lcom/mediatek/engineermode/ims/Setting;->entries:Ljava/util/ArrayList;

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 509
    new-instance v2, Landroid/widget/CheckBox;

    invoke-direct {v2, p1}, Landroid/widget/CheckBox;-><init>(Landroid/content/Context;)V

    .line 510
    .local v2, "checkbox":Landroid/widget/CheckBox;
    iget-object v3, p3, Lcom/mediatek/engineermode/ims/Setting;->entries:Ljava/util/ArrayList;

    invoke-virtual {v3, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/CharSequence;

    invoke-virtual {v2, v3}, Landroid/widget/CheckBox;->setText(Ljava/lang/CharSequence;)V

    .line 511
    iget-object v3, p3, Lcom/mediatek/engineermode/ims/Setting;->values:Ljava/util/ArrayList;

    invoke-virtual {v3, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/CheckBox;->setTag(Ljava/lang/Object;)V

    .line 512
    iget-object v3, p3, Lcom/mediatek/engineermode/ims/Setting;->values:Ljava/util/ArrayList;

    invoke-virtual {v3, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    iget-object v4, p3, Lcom/mediatek/engineermode/ims/Setting;->defaultValue:Ljava/lang/String;

    invoke-static {p1, v4}, Lcom/mediatek/engineermode/ims/imsSettingPageActivity;->access$600(Lcom/mediatek/engineermode/ims/imsSettingPageActivity;Ljava/lang/String;)I

    move-result v4

    and-int/2addr v3, v4

    if-lez v3, :cond_0

    .line 513
    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 515
    :cond_0
    invoke-virtual {v0, v2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    .line 516
    iget-object v3, p0, Lcom/mediatek/engineermode/ims/imsSettingPageActivity$SettingMultiSelectView;->mCheckboxes:[Landroid/widget/CheckBox;

    aput-object v2, v3, v1

    .line 508
    .end local v2    # "checkbox":Landroid/widget/CheckBox;
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 518
    .end local v1    # "i":I
    :cond_1
    return-void
.end method


# virtual methods
.method protected getValue()Ljava/lang/String;
    .locals 4

    .line 521
    const/4 v0, 0x0

    .line 522
    .local v0, "checked":I
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/ims/imsSettingPageActivity$SettingMultiSelectView;->mCheckboxes:[Landroid/widget/CheckBox;

    array-length v3, v2

    if-ge v1, v3, :cond_1

    .line 523
    aget-object v2, v2, v1

    invoke-virtual {v2}, Landroid/widget/CheckBox;->isChecked()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 524
    iget-object v2, p0, Lcom/mediatek/engineermode/ims/imsSettingPageActivity$SettingMultiSelectView;->mCheckboxes:[Landroid/widget/CheckBox;

    aget-object v2, v2, v1

    invoke-virtual {v2}, Landroid/widget/CheckBox;->getTag()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    or-int/2addr v0, v2

    .line 522
    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 527
    .end local v1    # "i":I
    :cond_1
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method protected setValue(Ljava/lang/String;)V
    .locals 4
    .param p1, "value"    # Ljava/lang/String;

    .line 531
    iget-object v0, p0, Lcom/mediatek/engineermode/ims/imsSettingPageActivity$SettingMultiSelectView;->this$0:Lcom/mediatek/engineermode/ims/imsSettingPageActivity;

    invoke-static {v0, p1}, Lcom/mediatek/engineermode/ims/imsSettingPageActivity;->access$600(Lcom/mediatek/engineermode/ims/imsSettingPageActivity;Ljava/lang/String;)I

    move-result v0

    .line 532
    .local v0, "integerValue":I
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    iget-object v2, p0, Lcom/mediatek/engineermode/ims/imsSettingPageActivity$SettingMultiSelectView;->mCheckboxes:[Landroid/widget/CheckBox;

    array-length v3, v2

    if-ge v1, v3, :cond_1

    .line 533
    if-lez v0, :cond_0

    aget-object v2, v2, v1

    invoke-virtual {v2}, Landroid/widget/CheckBox;->getTag()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    and-int/2addr v2, v0

    if-lez v2, :cond_0

    .line 534
    iget-object v2, p0, Lcom/mediatek/engineermode/ims/imsSettingPageActivity$SettingMultiSelectView;->mCheckboxes:[Landroid/widget/CheckBox;

    aget-object v2, v2, v1

    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_1

    .line 536
    :cond_0
    iget-object v2, p0, Lcom/mediatek/engineermode/ims/imsSettingPageActivity$SettingMultiSelectView;->mCheckboxes:[Landroid/widget/CheckBox;

    aget-object v2, v2, v1

    const/4 v3, 0x0

    invoke-virtual {v2, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 532
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 539
    .end local v1    # "i":I
    :cond_1
    return-void
.end method
