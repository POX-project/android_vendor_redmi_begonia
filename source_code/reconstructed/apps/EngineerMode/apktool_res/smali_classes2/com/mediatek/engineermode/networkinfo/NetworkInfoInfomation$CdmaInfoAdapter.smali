.class Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter;
.super Landroid/widget/ArrayAdapter;
.source "NetworkInfoInfomation.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "CdmaInfoAdapter"
.end annotation

.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter$ViewHolder;
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
.field final synthetic this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;


# direct methods
.method public constructor <init>(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;Landroid/app/Activity;)V
    .locals 0
    .param p2, "activity"    # Landroid/app/Activity;

    .line 695
    iput-object p1, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    .line 696
    const/4 p1, 0x0

    invoke-direct {p0, p2, p1}, Landroid/widget/ArrayAdapter;-><init>(Landroid/content/Context;I)V

    .line 697
    return-void
.end method


# virtual methods
.method public getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 7
    .param p1, "position"    # I
    .param p2, "convertView"    # Landroid/view/View;
    .param p3, "parent"    # Landroid/view/ViewGroup;

    .line 702
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter;->this$0:Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation;->getLayoutInflater()Landroid/view/LayoutInflater;

    move-result-object v0

    .line 703
    .local v0, "inflater":Landroid/view/LayoutInflater;
    const/4 v1, 0x0

    if-nez p2, :cond_0

    .line 704
    const v2, 0x7f08002c

    const/4 v3, 0x0

    invoke-virtual {v0, v2, v3}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p2

    .line 705
    new-instance v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter$ViewHolder;

    invoke-direct {v2, p0, v3}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter$ViewHolder;-><init>(Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter;Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$1;)V

    .line 706
    .local v2, "holder":Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter$ViewHolder;
    const/4 v3, 0x4

    new-array v3, v3, [Landroid/widget/TextView;

    iput-object v3, v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    .line 707
    iget-object v3, v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const v4, 0x7f0604f4

    invoke-virtual {p2, v4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/TextView;

    aput-object v4, v3, v1

    .line 708
    iget-object v3, v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const v4, 0x7f0604fc

    invoke-virtual {p2, v4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v4

    check-cast v4, Landroid/widget/TextView;

    const/4 v5, 0x1

    aput-object v4, v3, v5

    .line 709
    iget-object v3, v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/4 v4, 0x2

    const v5, 0x7f0604fd

    invoke-virtual {p2, v5}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    aput-object v5, v3, v4

    .line 710
    iget-object v3, v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    const/4 v4, 0x3

    const v5, 0x7f0604fe

    invoke-virtual {p2, v5}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v5

    check-cast v5, Landroid/widget/TextView;

    aput-object v5, v3, v4

    .line 711
    invoke-virtual {p2, v2}, Landroid/view/View;->setTag(Ljava/lang/Object;)V

    goto :goto_0

    .line 713
    .end local v2    # "holder":Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter$ViewHolder;
    :cond_0
    invoke-virtual {p2}, Landroid/view/View;->getTag()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter$ViewHolder;

    .line 715
    .restart local v2    # "holder":Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter$ViewHolder;
    :goto_0
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter;->getItem(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, [Ljava/lang/String;

    .line 716
    .local v3, "entry":[Ljava/lang/String;
    const/4 v4, 0x0

    .local v4, "i":I
    :goto_1
    iget-object v5, v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    array-length v5, v5

    if-ge v4, v5, :cond_2

    .line 717
    array-length v5, v3

    if-le v5, v4, :cond_1

    .line 718
    iget-object v5, v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    aget-object v5, v5, v4

    invoke-virtual {v5, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 719
    iget-object v5, v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    aget-object v5, v5, v4

    aget-object v6, v3, v4

    invoke-virtual {v5, v6}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_2

    .line 721
    :cond_1
    iget-object v5, v2, Lcom/mediatek/engineermode/networkinfo/NetworkInfoInfomation$CdmaInfoAdapter$ViewHolder;->texts:[Landroid/widget/TextView;

    aget-object v5, v5, v4

    const/16 v6, 0x8

    invoke-virtual {v5, v6}, Landroid/widget/TextView;->setVisibility(I)V

    .line 716
    :goto_2
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    .line 724
    .end local v4    # "i":I
    :cond_2
    return-object p2
.end method
