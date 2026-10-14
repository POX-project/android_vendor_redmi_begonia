.class Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;
.super Landroid/widget/ArrayAdapter;
.source "MDMComponent.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;
    }
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/widget/ArrayAdapter<",
        "[",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field private mActivity:Landroid/app/Activity;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "activity"    # Landroid/app/Activity;

    .line 827
    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    .line 828
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->mActivity:Landroid/app/Activity;

    .line 829
    return-void
.end method


# virtual methods
.method public getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 9
    .param p1, "position"    # I
    .param p2, "convertView"    # Landroid/view/View;
    .param p3, "parent"    # Landroid/view/ViewGroup;

    .line 844
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->mActivity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getLayoutInflater()Landroid/view/LayoutInflater;

    move-result-object v0

    .line 845
    .local v0, "inflater":Landroid/view/LayoutInflater;
    const/16 v1, 0x8

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-nez p2, :cond_1

    .line 846
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->mActivity:Landroid/app/Activity;

    invoke-static {v4}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v4

    const v5, 0x7f08004f

    invoke-virtual {v4, v5, p3, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p2

    .line 848
    new-instance v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;

    const/4 v5, 0x0

    invoke-direct {v4, p0, v5}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;-><init>(Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$1;)V

    .line 849
    .local v4, "holder":Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;
    const/16 v5, 0x10

    new-array v5, v5, [Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;

    iput-object v5, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    .line 850
    const/16 v5, 0xf

    new-array v6, v5, [Landroid/view/View;

    iput-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->seps:[Landroid/view/View;

    .line 851
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const v7, 0x7f0604f4

    invoke-virtual {p2, v7}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;

    aput-object v7, v6, v2

    .line 852
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const v7, 0x7f0604fc

    invoke-virtual {p2, v7}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;

    aput-object v7, v6, v3

    .line 853
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/4 v7, 0x2

    const v8, 0x7f0604fd

    invoke-virtual {p2, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;

    aput-object v8, v6, v7

    .line 854
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/4 v7, 0x3

    const v8, 0x7f0604fe

    invoke-virtual {p2, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;

    aput-object v8, v6, v7

    .line 855
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/4 v7, 0x4

    const v8, 0x7f0604ff

    invoke-virtual {p2, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;

    aput-object v8, v6, v7

    .line 856
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/4 v7, 0x5

    const v8, 0x7f060500

    invoke-virtual {p2, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;

    aput-object v8, v6, v7

    .line 857
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/4 v7, 0x6

    const v8, 0x7f060501

    invoke-virtual {p2, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;

    aput-object v8, v6, v7

    .line 858
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/4 v7, 0x7

    const v8, 0x7f060502

    invoke-virtual {p2, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;

    aput-object v8, v6, v7

    .line 859
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const v7, 0x7f060503

    invoke-virtual {p2, v7}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;

    aput-object v7, v6, v1

    .line 860
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/16 v7, 0x9

    const v8, 0x7f0604f5

    invoke-virtual {p2, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;

    aput-object v8, v6, v7

    .line 861
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/16 v7, 0xa

    const v8, 0x7f0604f6

    invoke-virtual {p2, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;

    aput-object v8, v6, v7

    .line 862
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/16 v7, 0xb

    const v8, 0x7f0604f7

    invoke-virtual {p2, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;

    aput-object v8, v6, v7

    .line 863
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/16 v7, 0xc

    const v8, 0x7f0604f8

    invoke-virtual {p2, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;

    aput-object v8, v6, v7

    .line 864
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/16 v7, 0xd

    const v8, 0x7f0604f9

    invoke-virtual {p2, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;

    aput-object v8, v6, v7

    .line 865
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/16 v7, 0xe

    const v8, 0x7f0604fa

    invoke-virtual {p2, v8}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v8

    check-cast v8, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;

    aput-object v8, v6, v7

    .line 866
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const v7, 0x7f0604fb

    invoke-virtual {p2, v7}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v7

    check-cast v7, Lcom/mediatek/engineermode/mdmcomponent/MdmTextView;

    aput-object v7, v6, v5

    .line 867
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_0
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->seps:[Landroid/view/View;

    array-length v6, v6

    if-ge v5, v6, :cond_0

    .line 868
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->seps:[Landroid/view/View;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v8, ""

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {p2, v7}, Landroid/view/View;->findViewWithTag(Ljava/lang/Object;)Landroid/view/View;

    move-result-object v7

    aput-object v7, v6, v5

    .line 867
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 870
    .end local v5    # "i":I
    :cond_0
    invoke-virtual {p2, v4}, Landroid/view/View;->setTag(Ljava/lang/Object;)V

    goto :goto_1

    .line 872
    .end local v4    # "holder":Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;
    :cond_1
    invoke-virtual {p2}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;

    .line 874
    .restart local v4    # "holder":Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;
    :goto_1
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, [Ljava/lang/String;

    .line 875
    .local v5, "text":[Ljava/lang/String;
    const/4 v6, 0x0

    .local v6, "i":I
    :goto_2
    array-length v7, v5

    if-ge v6, v7, :cond_3

    iget-object v7, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    array-length v7, v7

    if-ge v6, v7, :cond_3

    .line 876
    iget-object v7, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    aget-object v7, v7, v6

    aget-object v8, v5, v6

    invoke-virtual {v7, v8}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 877
    iget-object v7, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    aget-object v7, v7, v6

    invoke-virtual {v7, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 878
    iget-object v7, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->seps:[Landroid/view/View;

    array-length v7, v7

    if-ge v6, v7, :cond_2

    iget-object v7, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->seps:[Landroid/view/View;

    aget-object v7, v7, v6

    if-eqz v7, :cond_2

    .line 879
    iget-object v7, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->seps:[Landroid/view/View;

    aget-object v7, v7, v6

    .line 880
    invoke-virtual {v7}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v7

    check-cast v7, Landroid/widget/LinearLayout$LayoutParams;

    .line 881
    .local v7, "st":Landroid/widget/LinearLayout$LayoutParams;
    iput v3, v7, Landroid/widget/LinearLayout$LayoutParams;->width:I

    .line 882
    iget-object v8, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->seps:[Landroid/view/View;

    aget-object v8, v8, v6

    invoke-virtual {v8, v7}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 875
    .end local v7    # "st":Landroid/widget/LinearLayout$LayoutParams;
    :cond_2
    add-int/lit8 v6, v6, 0x1

    goto :goto_2

    .line 885
    .end local v6    # "i":I
    :cond_3
    array-length v3, v5

    .local v3, "i":I
    :goto_3
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    array-length v6, v6

    if-ge v3, v6, :cond_5

    .line 886
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    aget-object v6, v6, v3

    invoke-virtual {v6, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 887
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->seps:[Landroid/view/View;

    array-length v6, v6

    if-ge v3, v6, :cond_4

    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->seps:[Landroid/view/View;

    aget-object v6, v6, v3

    if-eqz v6, :cond_4

    .line 888
    iget-object v6, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->seps:[Landroid/view/View;

    aget-object v6, v6, v3

    .line 889
    invoke-virtual {v6}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v6

    check-cast v6, Landroid/widget/LinearLayout$LayoutParams;

    .line 890
    .local v6, "st":Landroid/widget/LinearLayout$LayoutParams;
    iput v2, v6, Landroid/widget/LinearLayout$LayoutParams;->width:I

    .line 891
    iget-object v7, v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter$ViewHolder;->seps:[Landroid/view/View;

    aget-object v7, v7, v3

    invoke-virtual {v7, v6}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 885
    .end local v6    # "st":Landroid/widget/LinearLayout$LayoutParams;
    :cond_4
    add-int/lit8 v3, v3, 0x1

    goto :goto_3

    .line 894
    .end local v3    # "i":I
    :cond_5
    return-object p2
.end method

.method public notifyDataSetChanged(Landroid/widget/ListView;I)V
    .locals 3
    .param p1, "listView"    # Landroid/widget/ListView;
    .param p2, "position"    # I

    .line 832
    invoke-virtual {p1}, Landroid/widget/ListView;->getFirstVisiblePosition()I

    move-result v0

    .line 833
    .local v0, "firstVisiblePosition":I
    invoke-virtual {p1}, Landroid/widget/ListView;->getLastVisiblePosition()I

    move-result v1

    .line 834
    .local v1, "lastVisiblePosition":I
    if-lt p2, v0, :cond_0

    if-gt p2, v1, :cond_0

    .line 835
    sub-int v2, p2, v0

    invoke-virtual {p1, v2}, Landroid/widget/ListView;->getChildAt(I)Landroid/view/View;

    move-result-object v2

    .line 836
    .local v2, "view":Landroid/view/View;
    invoke-virtual {p0, p2, v2, p1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;

    .line 839
    .end local v2    # "view":Landroid/view/View;
    :cond_0
    return-void
.end method
