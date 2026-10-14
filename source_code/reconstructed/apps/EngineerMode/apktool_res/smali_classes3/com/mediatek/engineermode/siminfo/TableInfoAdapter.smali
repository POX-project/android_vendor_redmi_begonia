.class Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;
.super Landroid/widget/ArrayAdapter;
.source "SimInfoUpdate.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;
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

    .line 55
    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    .line 56
    iput-object p1, p0, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;->mActivity:Landroid/app/Activity;

    .line 57
    return-void
.end method


# virtual methods
.method public getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 8
    .param p1, "position"    # I
    .param p2, "convertView"    # Landroid/view/View;
    .param p3, "parent"    # Landroid/view/ViewGroup;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;->mActivity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getLayoutInflater()Landroid/view/LayoutInflater;

    move-result-object v0

    .line 67
    .local v0, "inflater":Landroid/view/LayoutInflater;
    const/16 v1, 0x8

    const/4 v2, 0x0

    if-nez p2, :cond_0

    .line 68
    const v3, 0x7f08004f

    const/4 v4, 0x0

    invoke-virtual {v0, v3, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p2

    .line 69
    new-instance v3, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;

    invoke-direct {v3, p0, v4}, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;-><init>(Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$1;)V

    .line 70
    .local v3, "holder":Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;
    const/16 v4, 0xa

    new-array v4, v4, [Landroid/widget/TextView;

    iput-object v4, v3, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    .line 71
    iget-object v4, v3, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const v5, 0x7f0604f4

    invoke-virtual {p2, v5}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    aput-object v5, v4, v2

    .line 72
    iget-object v4, v3, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const v5, 0x7f0604fc

    invoke-virtual {p2, v5}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    const/4 v6, 0x1

    aput-object v5, v4, v6

    .line 73
    iget-object v4, v3, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/4 v5, 0x2

    const v6, 0x7f0604fd

    invoke-virtual {p2, v6}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/TextView;

    aput-object v6, v4, v5

    .line 74
    iget-object v4, v3, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/4 v5, 0x3

    const v6, 0x7f0604fe

    invoke-virtual {p2, v6}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/TextView;

    aput-object v6, v4, v5

    .line 75
    iget-object v4, v3, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/4 v5, 0x4

    const v6, 0x7f0604ff

    invoke-virtual {p2, v6}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/TextView;

    aput-object v6, v4, v5

    .line 76
    iget-object v4, v3, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/4 v5, 0x5

    const v6, 0x7f060500

    invoke-virtual {p2, v6}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/TextView;

    aput-object v6, v4, v5

    .line 77
    iget-object v4, v3, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/4 v5, 0x6

    const v6, 0x7f060501

    invoke-virtual {p2, v6}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/TextView;

    aput-object v6, v4, v5

    .line 78
    iget-object v4, v3, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/4 v5, 0x7

    const v6, 0x7f060502

    invoke-virtual {p2, v6}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/TextView;

    aput-object v6, v4, v5

    .line 79
    iget-object v4, v3, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const v5, 0x7f060503

    invoke-virtual {p2, v5}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    aput-object v5, v4, v1

    .line 80
    iget-object v4, v3, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/16 v5, 0x9

    const v6, 0x7f0604f5

    invoke-virtual {p2, v6}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v6

    check-cast v6, Landroid/widget/TextView;

    aput-object v6, v4, v5

    .line 81
    invoke-virtual {p2, v3}, Landroid/view/View;->setTag(Ljava/lang/Object;)V

    goto :goto_0

    .line 83
    .end local v3    # "holder":Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;
    :cond_0
    invoke-virtual {p2}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;

    .line 85
    .restart local v3    # "holder":Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;
    :goto_0
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, [Ljava/lang/String;

    .line 86
    .local v4, "text":[Ljava/lang/String;
    const/4 v5, 0x0

    .local v5, "i":I
    :goto_1
    array-length v6, v4

    if-ge v5, v6, :cond_1

    .line 87
    iget-object v6, v3, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    aget-object v6, v6, v5

    aget-object v7, v4, v5

    invoke-virtual {v6, v7}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 88
    iget-object v6, v3, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    aget-object v6, v6, v5

    invoke-virtual {v6, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 86
    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .line 90
    .end local v5    # "i":I
    :cond_1
    array-length v2, v4

    .local v2, "i":I
    :goto_2
    iget-object v5, v3, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    array-length v5, v5

    if-ge v2, v5, :cond_2

    .line 91
    iget-object v5, v3, Lcom/mediatek/engineermode/siminfo/TableInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    aget-object v5, v5, v2

    invoke-virtual {v5, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 90
    add-int/lit8 v2, v2, 0x1

    goto :goto_2

    .line 93
    .end local v2    # "i":I
    :cond_2
    return-object p2
.end method
