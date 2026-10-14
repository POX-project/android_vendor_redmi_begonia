.class Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;
.super Landroid/widget/ArrayAdapter;
.source "XCAPConfigFragment.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/widget/ArrayAdapter<",
        "Lcom/mediatek/engineermode/iotconfig/XCAPModel;",
        ">;"
    }
.end annotation


# instance fields
.field private final context:Landroid/app/Activity;

.field private list:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/iotconfig/XCAPModel;",
            ">;"
        }
    .end annotation
.end field

.field listPosititon:I

.field private onClickLinstener:Landroid/view/View$OnClickListener;


# direct methods
.method public constructor <init>(Landroid/app/Activity;Ljava/util/List;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/iotconfig/XCAPModel;",
            ">;)V"
        }
    .end annotation

    .line 501
    .local p2, "list":Ljava/util/List;, "Ljava/util/List<Lcom/mediatek/engineermode/iotconfig/XCAPModel;>;"
    const v0, 0x7f080085

    invoke-direct {p0, p1, v0, p2}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 522
    new-instance v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$1;-><init>(Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->onClickLinstener:Landroid/view/View$OnClickListener;

    .line 502
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->context:Landroid/app/Activity;

    .line 503
    iput-object p2, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->list:Ljava/util/List;

    .line 504
    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;)Ljava/util/List;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;

    .line 494
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->list:Ljava/util/List;

    return-object v0
.end method


# virtual methods
.method public getList()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/iotconfig/XCAPModel;",
            ">;"
        }
    .end annotation

    .line 512
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->list:Ljava/util/List;

    return-object v0
.end method

.method public getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 8
    .param p1, "position"    # I
    .param p2, "convertView"    # Landroid/view/View;
    .param p3, "parent"    # Landroid/view/ViewGroup;

    .line 563
    iput p1, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->listPosititon:I

    .line 564
    const/4 v0, 0x0

    .line 565
    .local v0, "viewHolder":Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;
    if-nez p2, :cond_0

    .line 566
    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->context:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->getLayoutInflater()Landroid/view/LayoutInflater;

    move-result-object v1

    .line 567
    .local v1, "inflator":Landroid/view/LayoutInflater;
    const v2, 0x7f080085

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p2

    .line 568
    new-instance v2, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;

    invoke-direct {v2}, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;-><init>()V

    move-object v0, v2

    .line 569
    nop

    .line 570
    const v2, 0x7f060884

    invoke-virtual {p2, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    iput-object v3, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->text:Landroid/widget/TextView;

    .line 571
    nop

    .line 572
    const v3, 0x7f060882

    invoke-virtual {p2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/CheckBox;

    iput-object v4, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->checkbox:Landroid/widget/CheckBox;

    .line 573
    nop

    .line 574
    const v4, 0x7f060886

    invoke-virtual {p2, v4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/EditText;

    iput-object v5, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->value:Landroid/widget/EditText;

    .line 575
    nop

    .line 576
    const v5, 0x7f0606ac

    invoke-virtual {p2, v5}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/Button;

    iput-object v6, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->btnSet:Landroid/widget/Button;

    .line 578
    iget-object v6, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->btnSet:Landroid/widget/Button;

    iget-object v7, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->onClickLinstener:Landroid/view/View$OnClickListener;

    invoke-virtual {v6, v7}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 580
    iget-object v6, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->checkbox:Landroid/widget/CheckBox;

    new-instance v7, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$4;

    invoke-direct {v7, p0}, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$4;-><init>(Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;)V

    .line 581
    invoke-virtual {v6, v7}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 591
    iget-object v6, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->value:Landroid/widget/EditText;

    new-instance v7, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$5;

    invoke-direct {v7, p0, p1}, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$5;-><init>(Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;I)V

    invoke-virtual {v6, v7}, Landroid/widget/EditText;->addTextChangedListener(Landroid/text/TextWatcher;)V

    .line 614
    iget-object v6, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->value:Landroid/widget/EditText;

    const/4 v7, 0x6

    invoke-virtual {v6, v7}, Landroid/widget/EditText;->setImeOptions(I)V

    .line 615
    iget-object v6, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->value:Landroid/widget/EditText;

    const/4 v7, 0x1

    invoke-virtual {v6, v7}, Landroid/widget/EditText;->setRawInputType(I)V

    .line 616
    iget-object v6, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->value:Landroid/widget/EditText;

    new-instance v7, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$6;

    invoke-direct {v7, p0}, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$6;-><init>(Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;)V

    invoke-virtual {v6, v7}, Landroid/widget/EditText;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    .line 630
    invoke-virtual {p2, v0}, Landroid/view/View;->setTag(Ljava/lang/Object;)V

    .line 631
    iget-object v6, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->text:Landroid/widget/TextView;

    invoke-virtual {p2, v2, v6}, Landroid/view/View;->setTag(ILjava/lang/Object;)V

    .line 632
    iget-object v2, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->value:Landroid/widget/EditText;

    invoke-virtual {p2, v4, v2}, Landroid/view/View;->setTag(ILjava/lang/Object;)V

    .line 633
    iget-object v2, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->checkbox:Landroid/widget/CheckBox;

    invoke-virtual {p2, v3, v2}, Landroid/view/View;->setTag(ILjava/lang/Object;)V

    .line 634
    iget-object v2, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->btnSet:Landroid/widget/Button;

    invoke-virtual {p2, v5, v2}, Landroid/view/View;->setTag(ILjava/lang/Object;)V

    .line 635
    .end local v1    # "inflator":Landroid/view/LayoutInflater;
    goto :goto_0

    .line 636
    :cond_0
    invoke-virtual {p2}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v1

    move-object v0, v1

    check-cast v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;

    .line 638
    :goto_0
    iget-object v1, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->checkbox:Landroid/widget/CheckBox;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/CheckBox;->setTag(Ljava/lang/Object;)V

    .line 639
    iget-object v1, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->btnSet:Landroid/widget/Button;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/Button;->setTag(Ljava/lang/Object;)V

    .line 640
    iget-object v1, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->value:Landroid/widget/EditText;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/EditText;->setTag(Ljava/lang/Object;)V

    .line 641
    iget-object v1, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->text:Landroid/widget/TextView;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setTag(Ljava/lang/Object;)V

    .line 643
    iget-object v1, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->text:Landroid/widget/TextView;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->list:Ljava/util/List;

    invoke-interface {v3, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "("

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->list:Ljava/util/List;

    .line 644
    invoke-interface {v3, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->getType()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ")"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "(boolean)"

    const-string v4, "?"

    invoke-virtual {v2, v3, v4}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v2

    .line 643
    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 646
    const v1, 0x7f060883

    .line 647
    invoke-virtual {p2, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/LinearLayout;

    .line 648
    .local v1, "booleanLayout":Landroid/widget/LinearLayout;
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->list:Ljava/util/List;

    invoke-interface {v2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->getValue()Ljava/lang/String;

    move-result-object v2

    const-string v3, ""

    if-eqz v2, :cond_1

    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->list:Ljava/util/List;

    .line 649
    invoke-interface {v2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->getValue()Ljava/lang/String;

    move-result-object v2

    .line 650
    const-string v4, "-1"

    invoke-virtual {v2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 651
    iget-object v2, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->value:Landroid/widget/EditText;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->list:Ljava/util/List;

    invoke-interface {v5, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    invoke-virtual {v5}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->getValue()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    .line 653
    :cond_1
    iget-object v2, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->value:Landroid/widget/EditText;

    invoke-virtual {v2, v3}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 655
    :goto_1
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->list:Ljava/util/List;

    invoke-interface {v2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->getType()Ljava/lang/String;

    move-result-object v2

    const-string v3, "boolean"

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    const/16 v3, 0x8

    const/4 v4, 0x0

    if-eqz v2, :cond_3

    .line 657
    invoke-virtual {v1, v4}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 658
    iget-object v2, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->value:Landroid/widget/EditText;

    invoke-virtual {v2, v3}, Landroid/widget/EditText;->setVisibility(I)V

    .line 659
    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->list:Ljava/util/List;

    invoke-interface {v2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    invoke-virtual {v2}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->isConfiged()Z

    move-result v2

    const/4 v3, 0x4

    if-eqz v2, :cond_2

    .line 660
    iget-object v2, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->checkbox:Landroid/widget/CheckBox;

    invoke-virtual {v2, v4}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 661
    iget-object v2, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->btnSet:Landroid/widget/Button;

    invoke-virtual {v2, v3}, Landroid/widget/Button;->setVisibility(I)V

    .line 662
    iget-object v2, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->checkbox:Landroid/widget/CheckBox;

    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->list:Ljava/util/List;

    invoke-interface {v3, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/iotconfig/XCAPModel;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->isSelected()Z

    move-result v3

    invoke-virtual {v2, v3}, Landroid/widget/CheckBox;->setChecked(Z)V

    goto :goto_2

    .line 664
    :cond_2
    iget-object v2, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->checkbox:Landroid/widget/CheckBox;

    invoke-virtual {v2, v3}, Landroid/widget/CheckBox;->setVisibility(I)V

    .line 665
    iget-object v2, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->btnSet:Landroid/widget/Button;

    invoke-virtual {v2, v4}, Landroid/widget/Button;->setVisibility(I)V

    goto :goto_2

    .line 668
    :cond_3
    invoke-virtual {v1, v3}, Landroid/widget/LinearLayout;->setVisibility(I)V

    .line 669
    iget-object v2, v0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$ViewHolder;->value:Landroid/widget/EditText;

    invoke-virtual {v2, v4}, Landroid/widget/EditText;->setVisibility(I)V

    .line 671
    :goto_2
    return-object p2
.end method

.method public refresh(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/iotconfig/XCAPModel;",
            ">;)V"
        }
    .end annotation

    .line 507
    .local p1, "list":Ljava/util/List;, "Ljava/util/List<Lcom/mediatek/engineermode/iotconfig/XCAPModel;>;"
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->list:Ljava/util/List;

    .line 508
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->notifyDataSetChanged()V

    .line 509
    return-void
.end method

.method public showConfirmDialog(Landroid/view/View;I)V
    .locals 4
    .param p1, "view"    # Landroid/view/View;
    .param p2, "getPosition"    # I

    .line 533
    new-instance v0, Landroid/app/AlertDialog$Builder;

    iget-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->context:Landroid/app/Activity;

    invoke-direct {v0, v1}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 535
    .local v0, "alertDialogBuilder":Landroid/app/AlertDialog$Builder;
    nop

    .line 536
    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->context:Landroid/app/Activity;

    .line 538
    invoke-virtual {v2}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const v3, 0x7f0a05bb

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 537
    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setMessage(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    iget-object v2, p0, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;->context:Landroid/app/Activity;

    .line 541
    invoke-virtual {v2}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const v3, 0x7f0a05bc

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object v2

    .line 540
    invoke-virtual {v1, v2}, Landroid/app/AlertDialog$Builder;->setTitle(Ljava/lang/CharSequence;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    new-instance v2, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$3;

    invoke-direct {v2, p0, p2}, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$3;-><init>(Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;I)V

    .line 543
    const-string v3, "OK"

    invoke-virtual {v1, v3, v2}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v1

    new-instance v2, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$2;

    invoke-direct {v2, p0, p2}, Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter$2;-><init>(Lcom/mediatek/engineermode/iotconfig/XcapSettingAdapter;I)V

    .line 550
    const-string v3, "Cancel"

    invoke-virtual {v1, v3, v2}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 557
    invoke-virtual {v0}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v1

    .line 558
    .local v1, "alertDialog":Landroid/app/AlertDialog;
    invoke-virtual {v1}, Landroid/app/AlertDialog;->show()V

    .line 559
    return-void
.end method
