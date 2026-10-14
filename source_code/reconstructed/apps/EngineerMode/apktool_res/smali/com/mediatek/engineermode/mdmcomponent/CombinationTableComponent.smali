.class abstract Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;
.super Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;
.source "MDMComponent.java"


# instance fields
.field arrayTypeLabels:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private curTab:I

.field hmapAdapterList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;",
            ">;>;"
        }
    .end annotation
.end field

.field hmapLabelsList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/util/LinkedHashMap;",
            ">;>;"
        }
    .end annotation
.end field

.field hmapViewList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;",
            ">;>;"
        }
    .end annotation
.end field

.field private infoValid:I

.field layout:Landroid/widget/LinearLayout;

.field logInfo:[Ljava/lang/String;

.field mContext:Landroid/app/Activity;

.field scrollView:Landroid/widget/ScrollView;

.field private tabCount:I

.field tabTatileLayout:Landroid/widget/LinearLayout;

.field tabTitleList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1
    .param p1, "context"    # Landroid/app/Activity;

    .line 1444
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/MDMComponent;-><init>(Landroid/app/Activity;)V

    .line 1426
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    .line 1428
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    .line 1430
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    .line 1432
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabTitleList:Ljava/util/List;

    .line 1438
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabCount:I

    .line 1439
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->curTab:I

    .line 1440
    const/4 v0, 0x1

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->infoValid:I

    .line 1441
    const/16 v0, 0xa

    new-array v0, v0, [Ljava/lang/String;

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->logInfo:[Ljava/lang/String;

    .line 1445
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->mContext:Landroid/app/Activity;

    .line 1446
    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;I)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;
    .param p1, "x1"    # I

    .line 1424
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->setCurTab(I)V

    return-void
.end method

.method private getCurTab()I
    .locals 1

    .line 1622
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->curTab:I

    return v0
.end method

.method private isEmaptyStrArray([Ljava/lang/String;)Z
    .locals 3
    .param p1, "value"    # [Ljava/lang/String;

    .line 1861
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    array-length v1, p1

    if-ge v0, v1, :cond_1

    .line 1862
    aget-object v1, p1, v0

    if-eqz v1, :cond_0

    aget-object v1, p1, v0

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 1863
    const/4 v1, 0x0

    return v1

    .line 1861
    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 1866
    .end local v0    # "i":I
    :cond_1
    const/4 v0, 0x1

    return v0
.end method

.method private setBtnAttribute(Landroid/widget/Button;Ljava/lang/String;III)V
    .locals 4
    .param p1, "codeBtn"    # Landroid/widget/Button;
    .param p2, "btnContent"    # Ljava/lang/String;
    .param p3, "index"    # I
    .param p4, "textColor"    # I
    .param p5, "textSize"    # I

    .line 1589
    if-nez p1, :cond_0

    .line 1590
    return-void

    .line 1592
    :cond_0
    if-ltz p4, :cond_1

    move v0, p4

    goto :goto_0

    :cond_1
    const/4 v0, -0x1

    :goto_0
    invoke-virtual {p1, v0}, Landroid/widget/Button;->setTextColor(I)V

    .line 1593
    const/16 v0, 0x10

    if-le p5, v0, :cond_2

    int-to-float v0, p5

    goto :goto_1

    :cond_2
    const/high16 v0, 0x41800000    # 16.0f

    :goto_1
    invoke-virtual {p1, v0}, Landroid/widget/Button;->setTextSize(F)V

    .line 1594
    invoke-virtual {p1, p2}, Landroid/widget/Button;->setText(Ljava/lang/CharSequence;)V

    .line 1595
    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/Button;->setTag(Ljava/lang/Object;)V

    .line 1596
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->mContext:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    const v1, 0x7f050016

    invoke-virtual {v0, v1}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v0

    .line 1597
    .local v0, "drawable":Landroid/graphics/drawable/Drawable;
    invoke-virtual {p1, v0}, Landroid/widget/Button;->setBackground(Landroid/graphics/drawable/Drawable;)V

    .line 1598
    const/16 v1, 0x11

    invoke-virtual {p1, v1}, Landroid/widget/Button;->setGravity(I)V

    .line 1599
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent$1;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent$1;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;)V

    invoke-virtual {p1, v1}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 1606
    new-instance v1, Landroid/widget/LinearLayout$LayoutParams;

    const/high16 v2, 0x3f800000    # 1.0f

    const/4 v3, -0x2

    invoke-direct {v1, v3, v3, v2}, Landroid/widget/LinearLayout$LayoutParams;-><init>(IIF)V

    .line 1608
    .local v1, "rlp":Landroid/widget/LinearLayout$LayoutParams;
    invoke-virtual {p1, v1}, Landroid/widget/Button;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1609
    return-void
.end method

.method private setCurTab(I)V
    .locals 5
    .param p1, "tabNum"    # I

    .line 1626
    iput p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->curTab:I

    .line 1627
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabCount:I

    if-ge v0, v1, :cond_2

    .line 1628
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 1629
    .local v2, "key":Ljava/lang/String;
    if-ne v0, p1, :cond_0

    .line 1630
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/HashMap;

    invoke-virtual {v3, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->showView()V

    .line 1631
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabTatileLayout:Landroid/widget/LinearLayout;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/LinearLayout;->findViewWithTag(Ljava/lang/Object;)Landroid/view/View;

    move-result-object v3

    const/4 v4, 0x1

    invoke-virtual {v3, v4}, Landroid/view/View;->setSelected(Z)V

    goto :goto_2

    .line 1633
    :cond_0
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/HashMap;

    invoke-virtual {v3, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->hideView()V

    .line 1634
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabTatileLayout:Landroid/widget/LinearLayout;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Landroid/widget/LinearLayout;->findViewWithTag(Ljava/lang/Object;)Landroid/view/View;

    move-result-object v3

    const/4 v4, 0x0

    invoke-virtual {v3, v4}, Landroid/view/View;->setSelected(Z)V

    .line 1636
    .end local v2    # "key":Ljava/lang/String;
    :goto_2
    goto :goto_1

    .line 1627
    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 1638
    .end local v0    # "i":I
    :cond_2
    return-void
.end method


# virtual methods
.method addData(Ljava/lang/String;I)V
    .locals 2
    .param p1, "label"    # Ljava/lang/String;
    .param p2, "tabNum"    # I

    .line 1717
    invoke-virtual {p0, p2, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->inithmapLabelsList(ILjava/lang/String;)V

    .line 1718
    invoke-virtual {p0, p1, p2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->setHmapAdapterByLabel(Ljava/lang/String;I)V

    .line 1719
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/widget/ListAdapter;

    invoke-virtual {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 1720
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->notifyDataSetChanged()V

    .line 1721
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->setListViewHeightBasedOnChildren()V

    .line 1722
    return-void
.end method

.method addDataByArray(Ljava/lang/String;I[Ljava/lang/String;)V
    .locals 2
    .param p1, "label"    # Ljava/lang/String;
    .param p2, "tabNum"    # I
    .param p3, "data"    # [Ljava/lang/String;

    .line 1704
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->isValidTabNum(I)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 1705
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    .line 1706
    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v0

    if-nez v0, :cond_1

    .line 1707
    :cond_0
    invoke-virtual {p0, p2, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->inithmapLabelsList(ILjava/lang/String;)V

    .line 1709
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getCount()I

    move-result v0

    .line 1710
    .local v0, "position":I
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v1, p3}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 1711
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->notifyDataSetChanged()V

    .line 1712
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->setListViewHeightBasedOnChildren()V

    .line 1714
    .end local v0    # "position":I
    :cond_2
    return-void
.end method

.method clearData()V
    .locals 3

    .line 1578
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->resetHashMapKeyValues()V

    .line 1579
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->getTabCount()I

    move-result v1

    if-ge v0, v1, :cond_1

    .line 1580
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 1581
    .local v2, "Label":Ljava/lang/String;
    invoke-virtual {p0, v2, v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->clearData(Ljava/lang/String;I)V

    .line 1582
    .end local v2    # "Label":Ljava/lang/String;
    goto :goto_1

    .line 1579
    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 1585
    .end local v0    # "i":I
    :cond_1
    return-void
.end method

.method clearData(Ljava/lang/String;I)V
    .locals 2
    .param p1, "key"    # Ljava/lang/String;
    .param p2, "tabNum"    # I

    .line 1664
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->isValidTabNum(I)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1665
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 1666
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->clear()V

    goto :goto_1

    .line 1669
    :cond_0
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 1670
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 1671
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->clear()V

    .line 1669
    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 1675
    .end local v0    # "i":I
    :cond_2
    :goto_1
    return-void
.end method

.method displayView(Ljava/lang/String;IZ)V
    .locals 3
    .param p1, "label"    # Ljava/lang/String;
    .param p2, "tabNum"    # I
    .param p3, "isShow"    # Z

    .line 1678
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->isValidTabNum(I)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 1679
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->logInfo:[Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[ShowView] label:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ","

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "EmInfo/MDMComponent"

    invoke-static {v2, v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1680
    if-eqz p3, :cond_1

    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->getCurTab()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->isValidTabNum(I)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->getCurTab()I

    move-result v0

    if-ne v0, p2, :cond_1

    .line 1681
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->showView()V

    goto :goto_2

    .line 1683
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->hideView()V

    goto :goto_2

    .line 1686
    :cond_2
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabCount:I

    if-ge v0, v1, :cond_4

    .line 1687
    if-eqz p3, :cond_3

    .line 1688
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->showView()V

    goto :goto_1

    .line 1690
    :cond_3
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v1}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->hideView()V

    .line 1686
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 1694
    .end local v0    # "i":I
    :cond_4
    :goto_2
    return-void
.end method

.method abstract getArrayTypeKey()Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end method

.method abstract getHashMapLabels(I)Ljava/util/LinkedHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/util/LinkedHashMap;",
            ">;"
        }
    .end annotation
.end method

.method public getTabCount()I
    .locals 1

    .line 1469
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabCount:I

    return v0
.end method

.method getView()Landroid/view/View;
    .locals 1

    .line 1565
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->layout:Landroid/widget/LinearLayout;

    invoke-virtual {v0}, Landroid/widget/LinearLayout;->removeAllViews()V

    .line 1566
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabTatileLayout:Landroid/widget/LinearLayout;

    invoke-virtual {v0}, Landroid/widget/LinearLayout;->removeAllViews()V

    .line 1567
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->isInfoValid()Z

    move-result v0

    if-nez v0, :cond_0

    .line 1568
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->setViewAsPlank()V

    .line 1569
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->scrollView:Landroid/widget/ScrollView;

    return-object v0

    .line 1571
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->setViewAsTable()V

    .line 1572
    const/4 v0, 0x0

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->setCurTab(I)V

    .line 1573
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->scrollView:Landroid/widget/ScrollView;

    return-object v0
.end method

.method initArrayHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;
    .locals 4
    .param p1, "keys"    # [Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([",
            "Ljava/lang/Object;",
            ")",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "[",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1801
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 1802
    .local v0, "hashMapObj":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;[Ljava/lang/String;>;"
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p1

    if-ge v1, v2, :cond_0

    .line 1803
    aget-object v2, p1, v1

    check-cast v2, Ljava/lang/String;

    const/4 v3, 0x0

    invoke-virtual {v0, v2, v3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1802
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 1805
    .end local v1    # "i":I
    :cond_0
    return-object v0
.end method

.method initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;
    .locals 4
    .param p1, "keys"    # [Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([",
            "Ljava/lang/Object;",
            ")",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1784
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 1785
    .local v0, "hashMapObj":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p1

    if-ge v1, v2, :cond_0

    .line 1786
    aget-object v2, p1, v1

    check-cast v2, Ljava/lang/String;

    const-string v3, ""

    invoke-virtual {v0, v2, v3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1785
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 1788
    .end local v1    # "i":I
    :cond_0
    return-object v0
.end method

.method initHashMapList()V
    .locals 6

    .line 1508
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->getTabCount()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 1509
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    .line 1510
    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->size()I

    move-result v1

    if-nez v1, :cond_1

    .line 1511
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->getHashMapLabels(I)Ljava/util/LinkedHashMap;

    move-result-object v2

    invoke-interface {v1, v0, v2}, Ljava/util/List;->add(ILjava/lang/Object;)V

    .line 1512
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->clear()V

    .line 1513
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->clear()V

    .line 1514
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 1515
    .local v2, "key":Ljava/lang/String;
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/HashMap;

    new-instance v4, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->mContext:Landroid/app/Activity;

    invoke-direct {v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;-><init>(Landroid/app/Activity;)V

    invoke-virtual {v3, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1516
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/HashMap;

    new-instance v4, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->mContext:Landroid/app/Activity;

    invoke-direct {v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;-><init>(Landroid/app/Activity;)V

    invoke-virtual {v3, v2, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1517
    .end local v2    # "key":Ljava/lang/String;
    goto :goto_1

    .line 1508
    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto/16 :goto_0

    .line 1520
    .end local v0    # "i":I
    :cond_2
    return-void
.end method

.method initHmapLabelsList()V
    .locals 3

    .line 1809
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    if-nez v0, :cond_0

    .line 1810
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    .line 1812
    :cond_0
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->getTabCount()I

    move-result v1

    if-ge v0, v1, :cond_3

    .line 1813
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->size()I

    move-result v1

    if-nez v1, :cond_2

    .line 1814
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->getHashMapLabels(I)Ljava/util/LinkedHashMap;

    move-result-object v2

    invoke-interface {v1, v0, v2}, Ljava/util/List;->add(ILjava/lang/Object;)V

    .line 1812
    :cond_2
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 1817
    .end local v0    # "i":I
    :cond_3
    return-void
.end method

.method public initTableComponent([Ljava/lang/String;)V
    .locals 4
    .param p1, "tabTitles"    # [Ljava/lang/String;

    .line 1477
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->logInfo:[Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[initTableComponent]"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "EmInfo/MDMComponent"

    invoke-static {v2, v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1478
    array-length v0, p1

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabCount:I

    .line 1479
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabTitleList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    .line 1480
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->getArrayTypeKey()Ljava/util/ArrayList;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->arrayTypeLabels:Ljava/util/ArrayList;

    .line 1481
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->getTabCount()I

    move-result v1

    if-ge v0, v1, :cond_0

    .line 1482
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabTitleList:Ljava/util/List;

    aget-object v2, p1, v0

    invoke-interface {v1, v0, v2}, Ljava/util/List;->add(ILjava/lang/Object;)V

    .line 1483
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    new-instance v2, Ljava/util/LinkedHashMap;

    invoke-direct {v2}, Ljava/util/LinkedHashMap;-><init>()V

    invoke-interface {v1, v0, v2}, Ljava/util/List;->add(ILjava/lang/Object;)V

    .line 1484
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    invoke-interface {v1, v0, v2}, Ljava/util/List;->add(ILjava/lang/Object;)V

    .line 1485
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    invoke-interface {v1, v0, v2}, Ljava/util/List;->add(ILjava/lang/Object;)V

    .line 1481
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 1487
    .end local v0    # "i":I
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->initHashMapList()V

    .line 1488
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->scrollView:Landroid/widget/ScrollView;

    const/4 v1, -0x1

    if-nez v0, :cond_1

    .line 1489
    new-instance v0, Landroid/widget/ScrollView;

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->mContext:Landroid/app/Activity;

    invoke-direct {v0, v2}, Landroid/widget/ScrollView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->scrollView:Landroid/widget/ScrollView;

    .line 1490
    new-instance v2, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v2, v1, v1}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v2}, Landroid/widget/ScrollView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1493
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->layout:Landroid/widget/LinearLayout;

    const/4 v2, -0x2

    if-nez v0, :cond_2

    .line 1494
    new-instance v0, Landroid/widget/LinearLayout;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->mContext:Landroid/app/Activity;

    invoke-direct {v0, v3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->layout:Landroid/widget/LinearLayout;

    .line 1495
    const/4 v3, 0x1

    invoke-virtual {v0, v3}, Landroid/widget/LinearLayout;->setOrientation(I)V

    .line 1496
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->layout:Landroid/widget/LinearLayout;

    new-instance v3, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v3, v1, v2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v3}, Landroid/widget/LinearLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1499
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabTatileLayout:Landroid/widget/LinearLayout;

    if-nez v0, :cond_3

    .line 1500
    new-instance v0, Landroid/widget/LinearLayout;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->mContext:Landroid/app/Activity;

    invoke-direct {v0, v3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabTatileLayout:Landroid/widget/LinearLayout;

    .line 1501
    const/4 v3, 0x0

    invoke-virtual {v0, v3}, Landroid/widget/LinearLayout;->setOrientation(I)V

    .line 1502
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabTatileLayout:Landroid/widget/LinearLayout;

    new-instance v3, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v3, v1, v2}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    invoke-virtual {v0, v3}, Landroid/widget/LinearLayout;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1505
    :cond_3
    return-void
.end method

.method inithmapLabelsList(ILjava/lang/String;)V
    .locals 3
    .param p1, "tabNum"    # I
    .param p2, "label"    # Ljava/lang/String;

    .line 1612
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    .line 1613
    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    .line 1614
    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    .line 1615
    invoke-interface {v0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v0

    if-nez v0, :cond_1

    .line 1616
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->getHashMapLabels(I)Ljava/util/LinkedHashMap;

    move-result-object v1

    invoke-interface {v0, p1, v1}, Ljava/util/List;->add(ILjava/lang/Object;)V

    .line 1617
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->logInfo:[Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[inithmapLabelsList] tabNum:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ",label:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "List:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "EmInfo/MDMComponent"

    invoke-static {v2, v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1619
    :cond_1
    return-void
.end method

.method public isInfoValid()Z
    .locals 2

    .line 1449
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->infoValid:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 1450
    return v1

    .line 1451
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method abstract isLabelArrayType(Ljava/lang/String;)Z
.end method

.method isValidTabNum(I)Z
    .locals 1
    .param p1, "tabNum"    # I

    .line 1697
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabCount:I

    if-ge p1, v0, :cond_0

    if-ltz p1, :cond_0

    .line 1698
    const/4 v0, 0x1

    return v0

    .line 1700
    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method notifyDataSetChanged(Ljava/lang/String;I)V
    .locals 2
    .param p1, "label"    # Ljava/lang/String;
    .param p2, "tabNum"    # I

    .line 1725
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->isValidTabNum(I)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1726
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    .line 1727
    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v0

    if-nez v0, :cond_1

    .line 1728
    :cond_0
    invoke-virtual {p0, p2, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->inithmapLabelsList(ILjava/lang/String;)V

    .line 1730
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getCount()I

    move-result v0

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    .line 1731
    invoke-interface {v1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->size()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 1732
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->clear()V

    .line 1733
    invoke-virtual {p0, p1, p2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->setHmapAdapterByLabel(Ljava/lang/String;I)V

    .line 1735
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->notifyDataSetChanged()V

    .line 1736
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->setListViewHeightBasedOnChildren()V

    .line 1738
    :cond_3
    return-void
.end method

.method removeView()V
    .locals 1

    .line 1642
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->setInfoValid(I)V

    .line 1643
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->resetView()V

    .line 1644
    return-void
.end method

.method resetHashMapKeyValues()V
    .locals 5

    .line 1820
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabCount:I

    if-ge v0, v1, :cond_2

    .line 1821
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 1822
    .local v2, "Label":Ljava/lang/String;
    invoke-virtual {p0, v0, v2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->inithmapLabelsList(ILjava/lang/String;)V

    .line 1823
    new-instance v3, Ljava/util/LinkedHashMap;

    invoke-direct {v3}, Ljava/util/LinkedHashMap;-><init>()V

    .line 1824
    .local v3, "map":Ljava/util/LinkedHashMap;
    invoke-virtual {p0, v2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->isLabelArrayType(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 1825
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v4, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/LinkedHashMap;

    invoke-virtual {v4, v2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/LinkedHashMap;

    invoke-virtual {v4}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v4

    invoke-interface {v4}, Ljava/util/Set;->toArray()[Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->initArrayHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v3

    goto :goto_2

    .line 1827
    :cond_0
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v4, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/LinkedHashMap;

    invoke-virtual {v4, v2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/LinkedHashMap;

    invoke-virtual {v4}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v4

    invoke-interface {v4}, Ljava/util/Set;->toArray()[Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {p0, v4}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->initHashMap([Ljava/lang/Object;)Ljava/util/LinkedHashMap;

    move-result-object v3

    .line 1829
    :goto_2
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v4, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/LinkedHashMap;

    invoke-virtual {v4, v2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/LinkedHashMap;

    invoke-virtual {v4}, Ljava/util/LinkedHashMap;->clear()V

    .line 1830
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v4, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/LinkedHashMap;

    invoke-virtual {v4, v2}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/LinkedHashMap;

    invoke-virtual {v4, v3}, Ljava/util/LinkedHashMap;->putAll(Ljava/util/Map;)V

    .line 1831
    .end local v2    # "Label":Ljava/lang/String;
    .end local v3    # "map":Ljava/util/LinkedHashMap;
    goto :goto_1

    .line 1820
    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto/16 :goto_0

    .line 1833
    .end local v0    # "i":I
    :cond_2
    return-void
.end method

.method resetView()V
    .locals 5

    .line 1647
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->layout:Landroid/widget/LinearLayout;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/widget/LinearLayout;->getChildCount()I

    move-result v0

    if-lez v0, :cond_0

    .line 1648
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->layout:Landroid/widget/LinearLayout;

    invoke-virtual {v0}, Landroid/widget/LinearLayout;->removeAllViews()V

    .line 1650
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->scrollView:Landroid/widget/ScrollView;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/widget/ScrollView;->getChildCount()I

    move-result v0

    if-lez v0, :cond_1

    .line 1651
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->scrollView:Landroid/widget/ScrollView;

    invoke-virtual {v0}, Landroid/widget/ScrollView;->removeAllViews()V

    .line 1653
    :cond_1
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_3

    .line 1654
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 1655
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 1656
    .local v2, "key":Ljava/lang/String;
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/HashMap;

    invoke-virtual {v3, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->clear()V

    .line 1657
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/HashMap;

    invoke-virtual {v3, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    const/4 v4, 0x0

    invoke-virtual {v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 1658
    .end local v2    # "key":Ljava/lang/String;
    goto :goto_1

    .line 1653
    :cond_2
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 1661
    .end local v0    # "i":I
    :cond_3
    return-void
.end method

.method setHashMap([Ljava/lang/Object;[Ljava/lang/Object;)Ljava/util/LinkedHashMap;
    .locals 4
    .param p1, "keys"    # [Ljava/lang/Object;
    .param p2, "values"    # [Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([",
            "Ljava/lang/Object;",
            "[",
            "Ljava/lang/Object;",
            ")",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 1792
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 1793
    .local v0, "hashMapObj":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    array-length v1, p1

    array-length v2, p2

    if-eq v1, v2, :cond_0

    return-object v0

    .line 1794
    :cond_0
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p1

    if-ge v1, v2, :cond_1

    .line 1795
    aget-object v2, p1, v1

    check-cast v2, Ljava/lang/String;

    aget-object v3, p2, v1

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v2, v3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1794
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 1797
    .end local v1    # "i":I
    :cond_1
    return-object v0
.end method

.method setHashMapKeyArrays(Ljava/lang/String;ILjava/util/LinkedHashMap;)V
    .locals 1
    .param p1, "Label"    # Ljava/lang/String;
    .param p2, "tabNum"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "I",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "[",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 1875
    .local p3, "keyValues":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;[Ljava/lang/String;>;"
    invoke-virtual {p0, p2, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->inithmapLabelsList(ILjava/lang/String;)V

    .line 1876
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1, p3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1877
    return-void
.end method

.method setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;Ljava/lang/Object;)V
    .locals 8
    .param p1, "label"    # Ljava/lang/String;
    .param p2, "tabNum"    # I
    .param p3, "key"    # Ljava/lang/String;
    .param p4, "value"    # Ljava/lang/Object;

    .line 1836
    invoke-virtual {p0, p2, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->inithmapLabelsList(ILjava/lang/String;)V

    .line 1837
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->isLabelArrayType(Ljava/lang/String;)Z

    move-result v0

    const-string v1, "EmInfo/MDMComponent"

    if-eqz v0, :cond_3

    .line 1838
    instance-of v0, p4, [Ljava/lang/String;

    const-string v2, ",values:"

    const-string v3, "[setHashMapKeyValues] key: "

    if-eqz v0, :cond_0

    .line 1839
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    move-object v4, p4

    check-cast v4, [Ljava/lang/String;

    invoke-virtual {v0, p3, v4}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1840
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->logInfo:[Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    move-object v2, p4

    check-cast v2, [Ljava/lang/String;

    .line 1841
    invoke-static {v2}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 1840
    invoke-static {v1, v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_1

    .line 1843
    :cond_0
    if-eqz p4, :cond_2

    const-string v0, ""

    invoke-virtual {p4, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto/16 :goto_0

    .line 1844
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v0

    new-array v0, v0, [Ljava/lang/String;

    .line 1845
    .local v0, "indexs":[Ljava/lang/String;
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v4, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/LinkedHashMap;

    invoke-virtual {v4, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/LinkedHashMap;

    invoke-virtual {v4}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v4

    invoke-interface {v4, v0}, Ljava/util/Set;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    .line 1846
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v4, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/LinkedHashMap;

    invoke-virtual {v4, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/LinkedHashMap;

    invoke-virtual {v4, p3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, [Ljava/lang/String;

    .line 1847
    .local v4, "oldValues":[Ljava/lang/String;
    array-length v5, v4

    add-int/lit8 v5, v5, 0x1

    invoke-static {v4, v5}, Ljava/util/Arrays;->copyOf([Ljava/lang/Object;I)[Ljava/lang/Object;

    move-result-object v5

    check-cast v5, [Ljava/lang/String;

    .line 1848
    .local v5, "values":[Ljava/lang/String;
    array-length v6, v4

    invoke-virtual {p4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v7

    aput-object v7, v5, v6

    .line 1849
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v6, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/LinkedHashMap;

    invoke-virtual {v6, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/LinkedHashMap;

    invoke-virtual {v6, p3, v5}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1850
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->logInfo:[Ljava/lang/String;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1851
    invoke-static {v5}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 1850
    invoke-static {v1, v6, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1852
    .end local v0    # "indexs":[Ljava/lang/String;
    .end local v4    # "oldValues":[Ljava/lang/String;
    .end local v5    # "values":[Ljava/lang/String;
    goto :goto_1

    .line 1843
    :cond_2
    :goto_0
    return-void

    .line 1854
    :cond_3
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-static {p4}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, p3, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1855
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->logInfo:[Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[setHashMapKeyValues]Label: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ", tabNum: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ":"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    .line 1856
    invoke-interface {v3, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/LinkedHashMap;

    invoke-virtual {v3, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 1855
    invoke-static {v1, v0, v2}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1858
    :goto_1
    return-void
.end method

.method setHashMapKeyValues(Ljava/lang/String;ILjava/lang/String;[Ljava/lang/String;)V
    .locals 1
    .param p1, "Label"    # Ljava/lang/String;
    .param p2, "tabNum"    # I
    .param p3, "key"    # Ljava/lang/String;
    .param p4, "values"    # [Ljava/lang/String;

    .line 1880
    invoke-virtual {p0, p2, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->inithmapLabelsList(ILjava/lang/String;)V

    .line 1881
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p3, p4}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1882
    return-void
.end method

.method setHashMapKeyValues(Ljava/lang/String;ILjava/util/LinkedHashMap;)V
    .locals 1
    .param p1, "Label"    # Ljava/lang/String;
    .param p2, "tabNum"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "I",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 1870
    .local p3, "keyValues":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    invoke-virtual {p0, p2, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->inithmapLabelsList(ILjava/lang/String;)V

    .line 1871
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1, p3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1872
    return-void
.end method

.method setHashMapKeyValues(Ljava/lang/String;I[Ljava/lang/String;[Ljava/lang/Object;)V
    .locals 6
    .param p1, "label"    # Ljava/lang/String;
    .param p2, "tabNum"    # I
    .param p3, "keys"    # [Ljava/lang/String;
    .param p4, "values"    # [Ljava/lang/Object;

    .line 1885
    array-length v0, p3

    array-length v1, p4

    if-eq v0, v1, :cond_0

    .line 1886
    return-void

    .line 1888
    :cond_0
    invoke-virtual {p0, p2, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->inithmapLabelsList(ILjava/lang/String;)V

    .line 1889
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->logInfo:[Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[setHashMapKeyValues] tabNum: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ",label:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ", keys: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1890
    invoke-static {p3}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ", values:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1891
    invoke-static {p4}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1889
    const-string v2, "EmInfo/MDMComponent"

    invoke-static {v2, v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1892
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->isLabelArrayType(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 1893
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    array-length v1, p3

    if-ge v0, v1, :cond_2

    .line 1894
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    aget-object v2, p3, v0

    invoke-virtual {v1, v2}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    .line 1895
    invoke-interface {v1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    aget-object v3, p3, v0

    invoke-virtual {v1, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 1896
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    .line 1897
    invoke-interface {v1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    aget-object v3, p3, v0

    invoke-virtual {v1, v3}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [Ljava/lang/String;

    .line 1898
    .local v1, "oldValues":[Ljava/lang/String;
    array-length v3, v1

    add-int/2addr v3, v2

    invoke-static {v1, v3}, Ljava/util/Arrays;->copyOf([Ljava/lang/Object;I)[Ljava/lang/Object;

    move-result-object v2

    check-cast v2, [Ljava/lang/String;

    .line 1899
    .local v2, "newValues":[Ljava/lang/String;
    array-length v3, v1

    aget-object v4, p4, v0

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    aput-object v4, v2, v3

    .line 1900
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v3, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/LinkedHashMap;

    invoke-virtual {v3, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/LinkedHashMap;

    aget-object v4, p3, v0

    invoke-virtual {v3, v4, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1901
    .end local v1    # "oldValues":[Ljava/lang/String;
    .end local v2    # "newValues":[Ljava/lang/String;
    goto :goto_1

    .line 1902
    :cond_1
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    aget-object v3, p3, v0

    new-array v2, v2, [Ljava/lang/String;

    const/4 v4, 0x0

    aget-object v5, p4, v0

    .line 1903
    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v2, v4

    .line 1902
    invoke-virtual {v1, v3, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1893
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto/16 :goto_0

    .end local v0    # "i":I
    :cond_2
    goto :goto_4

    .line 1908
    :cond_3
    const/4 v0, 0x0

    .restart local v0    # "i":I
    :goto_2
    array-length v1, p3

    if-ge v0, v1, :cond_5

    .line 1909
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    aget-object v2, p3, v0

    .line 1910
    aget-object v3, p4, v0

    if-nez v3, :cond_4

    const-string v3, ""

    goto :goto_3

    :cond_4
    aget-object v3, p4, v0

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    .line 1909
    :goto_3
    invoke-virtual {v1, v2, v3}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1908
    add-int/lit8 v0, v0, 0x1

    goto :goto_2

    .line 1913
    .end local v0    # "i":I
    :cond_5
    :goto_4
    return-void
.end method

.method setHmapAdapterByLabel(Ljava/lang/String;I)V
    .locals 11
    .param p1, "label"    # Ljava/lang/String;
    .param p2, "tabNum"    # I

    .line 1741
    invoke-virtual {p0, p2}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->isValidTabNum(I)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 1742
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->logInfo:[Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[setHmapAdapterByLabel] label: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ",tabNum: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "EmInfo/MDMComponent"

    invoke-static {v2, v0, v1}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)V

    .line 1743
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->clear()V

    .line 1744
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->size()I

    move-result v0

    new-array v0, v0, [Ljava/lang/String;

    .line 1745
    .local v0, "keys":[Ljava/lang/String;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/Set;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    .line 1746
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->arrayTypeLabels:Ljava/util/ArrayList;

    invoke-virtual {v1, p1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v1

    const-string v2, ""

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-eqz v1, :cond_7

    .line 1747
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 1748
    .local v1, "cells":Ljava/util/List;, "Ljava/util/List<[Ljava/lang/String;>;"
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v5, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/util/HashMap;

    invoke-virtual {v5, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v5, v0}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 1749
    const/4 v5, 0x0

    .line 1750
    .local v5, "cellNum":I
    const/4 v6, 0x0

    .local v6, "i":I
    :goto_0
    array-length v7, v0

    if-ge v6, v7, :cond_3

    .line 1751
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v7, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/util/LinkedHashMap;

    invoke-virtual {v7, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/util/LinkedHashMap;

    aget-object v8, v0, v6

    invoke-virtual {v7, v8}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    .line 1752
    .local v7, "objValues":Ljava/lang/Object;
    new-array v8, v3, [Ljava/lang/String;

    .line 1753
    .local v8, "values":[Ljava/lang/String;
    if-eqz v7, :cond_2

    .line 1754
    instance-of v9, v7, [Ljava/lang/String;

    if-eqz v9, :cond_0

    .line 1755
    move-object v8, v7

    check-cast v8, [Ljava/lang/String;

    goto :goto_1

    .line 1757
    :cond_0
    new-array v9, v4, [Ljava/lang/String;

    invoke-virtual {v7}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v10

    aput-object v10, v9, v3

    move-object v8, v9

    .line 1759
    :goto_1
    array-length v9, v8

    if-le v9, v5, :cond_1

    array-length v9, v8

    goto :goto_2

    :cond_1
    move v9, v5

    :goto_2
    move v5, v9

    .line 1761
    :cond_2
    invoke-interface {v1, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1750
    .end local v7    # "objValues":Ljava/lang/Object;
    .end local v8    # "values":[Ljava/lang/String;
    add-int/lit8 v6, v6, 0x1

    goto :goto_0

    .line 1763
    .end local v6    # "i":I
    :cond_3
    const/4 v3, 0x0

    .local v3, "j":I
    :goto_3
    if-ge v3, v5, :cond_6

    .line 1764
    array-length v4, v0

    new-array v4, v4, [Ljava/lang/String;

    .line 1765
    .local v4, "values":[Ljava/lang/String;
    const/4 v6, 0x0

    .restart local v6    # "i":I
    :goto_4
    array-length v7, v0

    if-ge v6, v7, :cond_5

    .line 1766
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v7

    if-ge v6, v7, :cond_4

    invoke-interface {v1, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    if-eqz v7, :cond_4

    .line 1767
    invoke-interface {v1, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, [Ljava/lang/String;

    array-length v7, v7

    if-ge v3, v7, :cond_4

    invoke-interface {v1, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, [Ljava/lang/String;

    aget-object v7, v7, v3

    goto :goto_5

    :cond_4
    move-object v7, v2

    :goto_5
    aput-object v7, v4, v6

    .line 1765
    add-int/lit8 v6, v6, 0x1

    goto :goto_4

    .line 1769
    .end local v6    # "i":I
    :cond_5
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v6, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/HashMap;

    invoke-virtual {v6, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v6, v4}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 1763
    .end local v4    # "values":[Ljava/lang/String;
    add-int/lit8 v3, v3, 0x1

    goto :goto_3

    .line 1771
    .end local v1    # "cells":Ljava/util/List;, "Ljava/util/List<[Ljava/lang/String;>;"
    .end local v3    # "j":I
    .end local v5    # "cellNum":I
    :cond_6
    goto :goto_8

    .line 1772
    :cond_7
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_6
    array-length v5, v0

    if-ge v1, v5, :cond_9

    .line 1773
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v5, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/util/HashMap;

    invoke-virtual {v5, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    const/4 v6, 0x2

    new-array v6, v6, [Ljava/lang/String;

    aget-object v7, v0, v1

    aput-object v7, v6, v3

    .line 1775
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v7, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/util/LinkedHashMap;

    invoke-virtual {v7, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/util/LinkedHashMap;

    aget-object v8, v0, v1

    invoke-virtual {v7, v8}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    if-nez v7, :cond_8

    .line 1776
    move-object v7, v2

    goto :goto_7

    :cond_8
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v7, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/util/LinkedHashMap;

    invoke-virtual {v7, p1}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/util/LinkedHashMap;

    aget-object v8, v0, v1

    invoke-virtual {v7, v8}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    :goto_7
    check-cast v7, Ljava/lang/String;

    aput-object v7, v6, v4

    .line 1773
    invoke-virtual {v5, v6}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->add(Ljava/lang/Object;)V

    .line 1772
    add-int/lit8 v1, v1, 0x1

    goto :goto_6

    .line 1781
    .end local v0    # "keys":[Ljava/lang/String;
    .end local v1    # "i":I
    :cond_9
    :goto_8
    return-void
.end method

.method public setInfoValid(I)V
    .locals 2
    .param p1, "utasInfoValid"    # I

    .line 1455
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->infoValid:I

    if-eq p1, v0, :cond_1

    .line 1456
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Utas Info Valid -> Current :"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", Last: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->infoValid:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "EmInfo/MDMComponent"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1458
    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 1459
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->setViewAsTable()V

    .line 1460
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->curTab:I

    invoke-direct {p0, v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->setCurTab(I)V

    goto :goto_0

    .line 1462
    :cond_0
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->setViewAsPlank()V

    .line 1465
    :cond_1
    :goto_0
    iput p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->infoValid:I

    .line 1466
    return-void
.end method

.method public setTabCount(I)V
    .locals 0
    .param p1, "tabCount"    # I

    .line 1473
    iput p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabCount:I

    .line 1474
    return-void
.end method

.method public setViewAsPlank()V
    .locals 6

    .line 1523
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->resetView()V

    .line 1524
    new-instance v0, Landroid/widget/TextView;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->mContext:Landroid/app/Activity;

    invoke-direct {v0, v1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    .line 1525
    .local v0, "textView":Landroid/widget/TextView;
    new-instance v1, Landroid/widget/AbsListView$LayoutParams;

    const/4 v2, -0x1

    const/4 v3, -0x2

    invoke-direct {v1, v2, v3}, Landroid/widget/AbsListView$LayoutParams;-><init>(II)V

    .line 1527
    .local v1, "layoutParams":Landroid/widget/AbsListView$LayoutParams;
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1528
    const/16 v2, 0x14

    const/4 v3, 0x0

    invoke-virtual {v0, v2, v3, v2, v3}, Landroid/widget/TextView;->setPadding(IIII)V

    .line 1529
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Use "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->getName()Ljava/lang/String;

    move-result-object v3

    const-string v4, "UTAS"

    const-string v5, "TAS"

    invoke-virtual {v3, v4, v5}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1530
    const/high16 v2, 0x41800000    # 16.0f

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setTextSize(F)V

    .line 1531
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->scrollView:Landroid/widget/ScrollView;

    invoke-virtual {v2, v0}, Landroid/widget/ScrollView;->addView(Landroid/view/View;)V

    .line 1532
    return-void
.end method

.method public setViewAsTable()V
    .locals 8

    .line 1535
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->resetView()V

    .line 1536
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->layout:Landroid/widget/LinearLayout;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabTatileLayout:Landroid/widget/LinearLayout;

    invoke-virtual {v0, v1}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    .line 1537
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabCount:I

    if-ge v0, v1, :cond_4

    .line 1538
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabTatileLayout:Landroid/widget/LinearLayout;

    invoke-virtual {v1, v0}, Landroid/widget/LinearLayout;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    if-nez v1, :cond_0

    .line 1539
    new-instance v1, Landroid/widget/Button;

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->mContext:Landroid/app/Activity;

    invoke-direct {v1, v2}, Landroid/widget/Button;-><init>(Landroid/content/Context;)V

    move-object v7, v1

    .line 1540
    .local v7, "codeBtn":Landroid/widget/Button;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabTitleList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    move-object v3, v1

    check-cast v3, Ljava/lang/String;

    const/4 v5, -0x1

    const/16 v6, 0x10

    move-object v1, p0

    move-object v2, v7

    move v4, v0

    invoke-direct/range {v1 .. v6}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->setBtnAttribute(Landroid/widget/Button;Ljava/lang/String;III)V

    .line 1541
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->tabTatileLayout:Landroid/widget/LinearLayout;

    invoke-virtual {v1, v7}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    .line 1543
    .end local v7    # "codeBtn":Landroid/widget/Button;
    :cond_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_3

    .line 1544
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapLabelsList:Ljava/util/List;

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 1545
    .local v2, "label":Ljava/lang/String;
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/HashMap;

    invoke-virtual {v3, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->getCount()I

    move-result v3

    if-nez v3, :cond_1

    .line 1546
    invoke-virtual {p0, v2, v0}, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->setHmapAdapterByLabel(Ljava/lang/String;I)V

    .line 1548
    :cond_1
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/HashMap;

    invoke-virtual {v3, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v4, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/HashMap;

    invoke-virtual {v4, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/widget/ListAdapter;

    invoke-virtual {v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 1549
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapAdapterList:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/HashMap;

    invoke-virtual {v3, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdmcomponent/TableInfoAdapter;->notifyDataSetChanged()V

    .line 1550
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/HashMap;

    invoke-virtual {v3, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->setListViewHeightBasedOnChildren()V

    .line 1551
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/HashMap;

    invoke-virtual {v3, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    if-eqz v3, :cond_2

    .line 1552
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/HashMap;

    invoke-virtual {v3, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    check-cast v3, Landroid/view/ViewGroup;

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    .line 1553
    invoke-interface {v4, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/HashMap;

    invoke-virtual {v4, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/view/View;

    .line 1552
    invoke-virtual {v3, v4}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 1555
    :cond_2
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->layout:Landroid/widget/LinearLayout;

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->hmapViewList:Ljava/util/List;

    invoke-interface {v4, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/HashMap;

    invoke-virtual {v4, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/view/View;

    invoke-virtual {v3, v4}, Landroid/widget/LinearLayout;->addView(Landroid/view/View;)V

    .line 1556
    .end local v2    # "label":Ljava/lang/String;
    goto/16 :goto_1

    .line 1537
    :cond_3
    add-int/lit8 v0, v0, 0x1

    goto/16 :goto_0

    .line 1559
    .end local v0    # "i":I
    :cond_4
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->scrollView:Landroid/widget/ScrollView;

    invoke-virtual {v0}, Landroid/widget/ScrollView;->removeAllViews()V

    .line 1560
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->scrollView:Landroid/widget/ScrollView;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CombinationTableComponent;->layout:Landroid/widget/LinearLayout;

    invoke-virtual {v0, v1}, Landroid/widget/ScrollView;->addView(Landroid/view/View;)V

    .line 1561
    return-void
.end method
