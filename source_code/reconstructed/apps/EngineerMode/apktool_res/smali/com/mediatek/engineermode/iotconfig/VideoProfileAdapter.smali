.class Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;
.super Landroid/widget/ArrayAdapter;
.source "VilteConfigFragment.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/widget/ArrayAdapter<",
        "Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;",
        ">;"
    }
.end annotation


# instance fields
.field private final context:Landroid/app/Activity;

.field private list:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;",
            ">;"
        }
    .end annotation
.end field

.field listPosititon:I


# direct methods
.method public constructor <init>(Landroid/app/Activity;Ljava/util/ArrayList;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;",
            ">;)V"
        }
    .end annotation

    .line 562
    .local p2, "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;>;"
    const v0, 0x7f080080

    invoke-direct {p0, p1, v0, p2}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;ILjava/util/List;)V

    .line 563
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->context:Landroid/app/Activity;

    .line 564
    iput-object p2, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->list:Ljava/util/ArrayList;

    .line 565
    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)Ljava/util/ArrayList;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    .line 554
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->list:Ljava/util/ArrayList;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)Landroid/app/Activity;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;

    .line 554
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->context:Landroid/app/Activity;

    return-object v0
.end method


# virtual methods
.method public checkNumeric(Ljava/lang/String;)Z
    .locals 2
    .param p1, "str"    # Ljava/lang/String;

    .line 591
    const-string v0, "[0-9]*"

    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    .line 592
    .local v0, "pattern":Ljava/util/regex/Pattern;
    const-string v1, ""

    invoke-virtual {p1, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-virtual {v0, p1}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v1

    invoke-virtual {v1}, Ljava/util/regex/Matcher;->matches()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 593
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    if-lez v1, :cond_0

    .line 594
    const/4 v1, 0x1

    return v1

    .line 596
    :cond_0
    const/4 v1, 0x0

    return v1
.end method

.method public getList()Ljava/util/ArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;",
            ">;"
        }
    .end annotation

    .line 573
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->list:Ljava/util/ArrayList;

    return-object v0
.end method

.method public getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 17
    .param p1, "position"    # I
    .param p2, "convertView"    # Landroid/view/View;
    .param p3, "parent"    # Landroid/view/ViewGroup;

    .line 747
    move-object/from16 v0, p0

    move/from16 v1, p1

    iput v1, v0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->listPosititon:I

    .line 748
    const/4 v2, 0x0

    .line 749
    .local v2, "viewHolder":Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;
    if-nez p2, :cond_0

    .line 750
    new-instance v3, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$5;

    invoke-direct {v3, v0}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$5;-><init>(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)V

    .line 770
    .local v3, "mOnClickListener":Landroid/view/View$OnClickListener;
    iget-object v4, v0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->context:Landroid/app/Activity;

    invoke-virtual {v4}, Landroid/app/Activity;->getLayoutInflater()Landroid/view/LayoutInflater;

    move-result-object v4

    .line 771
    .local v4, "inflator":Landroid/view/LayoutInflater;
    const v5, 0x7f080080

    const/4 v6, 0x0

    .line 772
    invoke-virtual {v4, v5, v6}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v5

    .line 773
    .end local p2    # "convertView":Landroid/view/View;
    .local v5, "convertView":Landroid/view/View;
    new-instance v6, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;

    invoke-direct {v6}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;-><init>()V

    move-object v2, v6

    .line 774
    nop

    .line 775
    const v6, 0x7f06076a

    invoke-virtual {v5, v6}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Landroid/widget/CheckBox;

    iput-object v7, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->checkbox:Landroid/widget/CheckBox;

    .line 776
    nop

    .line 777
    const v7, 0x7f060772

    invoke-virtual {v5, v7}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Landroid/widget/TextView;

    iput-object v8, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->name:Landroid/widget/TextView;

    .line 778
    nop

    .line 779
    const v8, 0x7f060777

    invoke-virtual {v5, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v9

    check-cast v9, Landroid/widget/TextView;

    iput-object v9, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->quality:Landroid/widget/TextView;

    .line 780
    nop

    .line 781
    const v9, 0x7f060773

    invoke-virtual {v5, v9}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v10

    check-cast v10, Landroid/widget/TextView;

    iput-object v10, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->profile:Landroid/widget/TextView;

    .line 782
    nop

    .line 783
    const v10, 0x7f06076e

    invoke-virtual {v5, v10}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v11

    check-cast v11, Landroid/widget/TextView;

    iput-object v11, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->level:Landroid/widget/TextView;

    .line 784
    nop

    .line 785
    const v11, 0x7f060769

    invoke-virtual {v5, v11}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v12

    check-cast v12, Landroid/widget/TextView;

    iput-object v12, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->Iinterval:Landroid/widget/TextView;

    .line 786
    nop

    .line 787
    const v12, 0x7f060776

    invoke-virtual {v5, v12}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v13

    check-cast v13, Landroid/widget/TextView;

    iput-object v13, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->width:Landroid/widget/TextView;

    .line 788
    nop

    .line 789
    const v13, 0x7f06076d

    invoke-virtual {v5, v13}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v14

    check-cast v14, Landroid/widget/TextView;

    iput-object v14, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->height:Landroid/widget/TextView;

    .line 790
    nop

    .line 791
    const v14, 0x7f060770

    invoke-virtual {v5, v14}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v15

    check-cast v15, Landroid/widget/TextView;

    iput-object v15, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->maxBitRate:Landroid/widget/TextView;

    .line 792
    nop

    .line 793
    const v15, 0x7f060771

    invoke-virtual {v5, v15}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v16

    move-object/from16 v15, v16

    check-cast v15, Landroid/widget/TextView;

    iput-object v15, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->minBitRate:Landroid/widget/TextView;

    .line 794
    nop

    .line 795
    const v15, 0x7f06076c

    invoke-virtual {v5, v15}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v16

    move-object/from16 v14, v16

    check-cast v14, Landroid/widget/TextView;

    iput-object v14, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->framerate:Landroid/widget/TextView;

    .line 796
    invoke-virtual {v5, v2}, Landroid/view/View;->setTag(Ljava/lang/Object;)V

    .line 797
    iget-object v14, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->checkbox:Landroid/widget/CheckBox;

    invoke-virtual {v5, v6, v14}, Landroid/view/View;->setTag(ILjava/lang/Object;)V

    .line 798
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->quality:Landroid/widget/TextView;

    invoke-virtual {v5, v8, v6}, Landroid/view/View;->setTag(ILjava/lang/Object;)V

    .line 799
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->name:Landroid/widget/TextView;

    invoke-virtual {v5, v7, v6}, Landroid/view/View;->setTag(ILjava/lang/Object;)V

    .line 800
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->profile:Landroid/widget/TextView;

    invoke-virtual {v5, v9, v6}, Landroid/view/View;->setTag(ILjava/lang/Object;)V

    .line 801
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->level:Landroid/widget/TextView;

    invoke-virtual {v5, v10, v6}, Landroid/view/View;->setTag(ILjava/lang/Object;)V

    .line 802
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->framerate:Landroid/widget/TextView;

    invoke-virtual {v5, v15, v6}, Landroid/view/View;->setTag(ILjava/lang/Object;)V

    .line 804
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->profile:Landroid/widget/TextView;

    invoke-virtual {v5, v12, v6}, Landroid/view/View;->setTag(ILjava/lang/Object;)V

    .line 805
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->height:Landroid/widget/TextView;

    invoke-virtual {v5, v13, v6}, Landroid/view/View;->setTag(ILjava/lang/Object;)V

    .line 806
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->Iinterval:Landroid/widget/TextView;

    invoke-virtual {v5, v11, v6}, Landroid/view/View;->setTag(ILjava/lang/Object;)V

    .line 808
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->maxBitRate:Landroid/widget/TextView;

    const v7, 0x7f060770

    invoke-virtual {v5, v7, v6}, Landroid/view/View;->setTag(ILjava/lang/Object;)V

    .line 810
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->minBitRate:Landroid/widget/TextView;

    const v7, 0x7f060771

    invoke-virtual {v5, v7, v6}, Landroid/view/View;->setTag(ILjava/lang/Object;)V

    .line 812
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->checkbox:Landroid/widget/CheckBox;

    new-instance v7, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$6;

    invoke-direct {v7, v0}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$6;-><init>(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)V

    .line 813
    invoke-virtual {v6, v7}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 823
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->name:Landroid/widget/TextView;

    invoke-virtual {v6, v3}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 824
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->profile:Landroid/widget/TextView;

    invoke-virtual {v6, v3}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 825
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->level:Landroid/widget/TextView;

    invoke-virtual {v6, v3}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 826
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->quality:Landroid/widget/TextView;

    invoke-virtual {v6, v3}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 827
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->framerate:Landroid/widget/TextView;

    invoke-virtual {v6, v3}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 828
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->minBitRate:Landroid/widget/TextView;

    invoke-virtual {v6, v3}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 829
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->maxBitRate:Landroid/widget/TextView;

    invoke-virtual {v6, v3}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 830
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->height:Landroid/widget/TextView;

    invoke-virtual {v6, v3}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 831
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->width:Landroid/widget/TextView;

    invoke-virtual {v6, v3}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 832
    iget-object v6, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->Iinterval:Landroid/widget/TextView;

    invoke-virtual {v6, v3}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 833
    .end local v3    # "mOnClickListener":Landroid/view/View$OnClickListener;
    .end local v4    # "inflator":Landroid/view/LayoutInflater;
    goto :goto_0

    .line 834
    .end local v5    # "convertView":Landroid/view/View;
    .restart local p2    # "convertView":Landroid/view/View;
    :cond_0
    invoke-virtual/range {p2 .. p2}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v3

    move-object v2, v3

    check-cast v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;

    move-object/from16 v5, p2

    .line 836
    .end local p2    # "convertView":Landroid/view/View;
    .restart local v5    # "convertView":Landroid/view/View;
    :goto_0
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->checkbox:Landroid/widget/CheckBox;

    invoke-static/range {p1 .. p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setTag(Ljava/lang/Object;)V

    .line 837
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->quality:Landroid/widget/TextView;

    invoke-static/range {p1 .. p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setTag(Ljava/lang/Object;)V

    .line 838
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->framerate:Landroid/widget/TextView;

    invoke-static/range {p1 .. p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setTag(Ljava/lang/Object;)V

    .line 839
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->minBitRate:Landroid/widget/TextView;

    invoke-static/range {p1 .. p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setTag(Ljava/lang/Object;)V

    .line 840
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->maxBitRate:Landroid/widget/TextView;

    invoke-static/range {p1 .. p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setTag(Ljava/lang/Object;)V

    .line 841
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->height:Landroid/widget/TextView;

    invoke-static/range {p1 .. p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setTag(Ljava/lang/Object;)V

    .line 842
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->width:Landroid/widget/TextView;

    invoke-static/range {p1 .. p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setTag(Ljava/lang/Object;)V

    .line 843
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->Iinterval:Landroid/widget/TextView;

    invoke-static/range {p1 .. p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setTag(Ljava/lang/Object;)V

    .line 844
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->name:Landroid/widget/TextView;

    invoke-static/range {p1 .. p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setTag(Ljava/lang/Object;)V

    .line 845
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->profile:Landroid/widget/TextView;

    invoke-static/range {p1 .. p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setTag(Ljava/lang/Object;)V

    .line 846
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->level:Landroid/widget/TextView;

    invoke-static/range {p1 .. p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setTag(Ljava/lang/Object;)V

    .line 848
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->name:Landroid/widget/TextView;

    iget-object v4, v0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->list:Ljava/util/ArrayList;

    invoke-virtual {v4, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 849
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->checkbox:Landroid/widget/CheckBox;

    iget-object v4, v0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->list:Ljava/util/ArrayList;

    invoke-virtual {v4, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->isSelected()Z

    move-result v4

    invoke-virtual {v3, v4}, Landroid/widget/CheckBox;->setChecked(Z)V

    .line 850
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->quality:Landroid/widget/TextView;

    iget-object v4, v0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->list:Ljava/util/ArrayList;

    invoke-virtual {v4, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getQuality()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 851
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->profile:Landroid/widget/TextView;

    iget-object v4, v0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->list:Ljava/util/ArrayList;

    invoke-virtual {v4, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getProfile()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 852
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->level:Landroid/widget/TextView;

    iget-object v4, v0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->list:Ljava/util/ArrayList;

    invoke-virtual {v4, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getLevel()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 853
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->width:Landroid/widget/TextView;

    iget-object v4, v0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->list:Ljava/util/ArrayList;

    invoke-virtual {v4, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getWidth()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 854
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->height:Landroid/widget/TextView;

    iget-object v4, v0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->list:Ljava/util/ArrayList;

    invoke-virtual {v4, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getHeight()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 855
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->Iinterval:Landroid/widget/TextView;

    iget-object v4, v0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->list:Ljava/util/ArrayList;

    invoke-virtual {v4, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getIinterval()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 856
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->maxBitRate:Landroid/widget/TextView;

    iget-object v4, v0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->list:Ljava/util/ArrayList;

    invoke-virtual {v4, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getMaxBitRate()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 857
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->minBitRate:Landroid/widget/TextView;

    iget-object v4, v0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->list:Ljava/util/ArrayList;

    invoke-virtual {v4, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getMinBitRate()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 858
    iget-object v3, v2, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$ViewHolder;->framerate:Landroid/widget/TextView;

    iget-object v4, v0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->list:Ljava/util/ArrayList;

    invoke-virtual {v4, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;

    invoke-virtual {v4}, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->getFramerate()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 859
    return-object v5
.end method

.method public refresh(Ljava/util/ArrayList;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;",
            ">;)V"
        }
    .end annotation

    .line 568
    .local p1, "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;>;"
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->list:Ljava/util/ArrayList;

    .line 569
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->notifyDataSetChanged()V

    .line 570
    return-void
.end method

.method public showDialog(Landroid/view/View;)V
    .locals 7
    .param p1, "view"    # Landroid/view/View;

    .line 601
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->context:Landroid/app/Activity;

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    .line 602
    .local v0, "li":Landroid/view/LayoutInflater;
    const v1, 0x7f08007e

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v1

    .line 604
    .local v1, "dialogView":Landroid/view/View;
    new-instance v2, Landroid/app/AlertDialog$Builder;

    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->context:Landroid/app/Activity;

    invoke-direct {v2, v3}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 607
    .local v2, "alertDialogBuilder":Landroid/app/AlertDialog$Builder;
    invoke-virtual {v2, v1}, Landroid/app/AlertDialog$Builder;->setView(Landroid/view/View;)Landroid/app/AlertDialog$Builder;

    .line 609
    nop

    .line 610
    const v3, 0x7f060392

    invoke-virtual {v1, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/EditText;

    .line 611
    .local v3, "userInput":Landroid/widget/EditText;
    move-object v4, p1

    check-cast v4, Landroid/widget/TextView;

    invoke-virtual {v4}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/EditText;->setText(Ljava/lang/CharSequence;)V

    .line 612
    nop

    .line 613
    const/4 v4, 0x0

    invoke-virtual {v2, v4}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    move-result-object v4

    new-instance v5, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;

    invoke-direct {v5, p0, v3, p1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$2;-><init>(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;Landroid/widget/EditText;Landroid/view/View;)V

    .line 614
    const-string v6, "OK"

    invoke-virtual {v4, v6, v5}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v4

    new-instance v5, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$1;

    invoke-direct {v5, p0}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$1;-><init>(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)V

    .line 676
    const-string v6, "Cancel"

    invoke-virtual {v4, v6, v5}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 682
    invoke-virtual {v2}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v4

    .line 683
    .local v4, "alertDialog":Landroid/app/AlertDialog;
    invoke-virtual {v4}, Landroid/app/AlertDialog;->show()V

    .line 684
    return-void
.end method

.method public showSpinnerDialog(Landroid/view/View;)V
    .locals 9
    .param p1, "view"    # Landroid/view/View;

    .line 687
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->context:Landroid/app/Activity;

    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v0

    .line 688
    .local v0, "li":Landroid/view/LayoutInflater;
    const v1, 0x7f08007f

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v1

    .line 690
    .local v1, "dialogView":Landroid/view/View;
    new-instance v2, Landroid/app/AlertDialog$Builder;

    iget-object v3, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->context:Landroid/app/Activity;

    invoke-direct {v2, v3}, Landroid/app/AlertDialog$Builder;-><init>(Landroid/content/Context;)V

    .line 693
    .local v2, "alertDialogBuilder":Landroid/app/AlertDialog$Builder;
    invoke-virtual {v2, v1}, Landroid/app/AlertDialog$Builder;->setView(Landroid/view/View;)Landroid/app/AlertDialog$Builder;

    .line 695
    nop

    .line 696
    const v3, 0x7f0606bf

    invoke-virtual {v1, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/Spinner;

    .line 698
    .local v3, "userInput":Landroid/widget/Spinner;
    iget-object v4, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->context:Landroid/app/Activity;

    invoke-virtual {v4}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    .line 699
    const v5, 0x7f01009f

    invoke-virtual {v4, v5}, Landroid/content/res/Resources;->getStringArray(I)[Ljava/lang/String;

    move-result-object v4

    .line 700
    .local v4, "selectArray":[Ljava/lang/CharSequence;
    new-instance v5, Landroid/widget/ArrayAdapter;

    iget-object v6, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;->context:Landroid/app/Activity;

    const v7, 0x1090008

    invoke-direct {v5, v6, v7, v4}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I[Ljava/lang/Object;)V

    .line 702
    .local v5, "arrayAdapter":Landroid/widget/ArrayAdapter;, "Landroid/widget/ArrayAdapter<Ljava/lang/CharSequence;>;"
    nop

    .line 703
    const v6, 0x1090009

    invoke-virtual {v5, v6}, Landroid/widget/ArrayAdapter;->setDropDownViewResource(I)V

    .line 704
    invoke-virtual {v3, v5}, Landroid/widget/Spinner;->setAdapter(Landroid/widget/SpinnerAdapter;)V

    .line 705
    nop

    .line 706
    const/4 v6, 0x0

    invoke-virtual {v2, v6}, Landroid/app/AlertDialog$Builder;->setCancelable(Z)Landroid/app/AlertDialog$Builder;

    move-result-object v6

    new-instance v7, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$4;

    invoke-direct {v7, p0, v3, p1}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$4;-><init>(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;Landroid/widget/Spinner;Landroid/view/View;)V

    .line 707
    const-string v8, "OK"

    invoke-virtual {v6, v8, v7}, Landroid/app/AlertDialog$Builder;->setPositiveButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    move-result-object v6

    new-instance v7, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$3;

    invoke-direct {v7, p0}, Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter$3;-><init>(Lcom/mediatek/engineermode/iotconfig/VideoProfileAdapter;)V

    .line 735
    const-string v8, "Cancel"

    invoke-virtual {v6, v8, v7}, Landroid/app/AlertDialog$Builder;->setNegativeButton(Ljava/lang/CharSequence;Landroid/content/DialogInterface$OnClickListener;)Landroid/app/AlertDialog$Builder;

    .line 741
    invoke-virtual {v2}, Landroid/app/AlertDialog$Builder;->create()Landroid/app/AlertDialog;

    move-result-object v6

    .line 742
    .local v6, "alertDialog":Landroid/app/AlertDialog;
    invoke-virtual {v6}, Landroid/app/AlertDialog;->show()V

    .line 743
    return-void
.end method
