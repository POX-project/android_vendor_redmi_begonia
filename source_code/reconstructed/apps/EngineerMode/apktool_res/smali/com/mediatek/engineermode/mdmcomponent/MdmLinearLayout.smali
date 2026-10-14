.class public Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;
.super Landroid/widget/LinearLayout;
.source "MdmLinearLayout.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "EMInfo_MdmLinearLayout"


# instance fields
.field private convertView:Landroid/view/View;

.field private listView:Landroid/widget/ListView;

.field private mActivity:Landroid/app/Activity;

.field private textView:Landroid/widget/TextView;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;

    .line 25
    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    .line 26
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->mActivity:Landroid/app/Activity;

    .line 27
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->initView(Landroid/app/Activity;)V

    .line 30
    return-void
.end method

.method public constructor <init>(Landroid/app/Activity;Landroid/util/AttributeSet;)V
    .locals 0
    .param p1, "context"    # Landroid/app/Activity;
    .param p2, "attrs"    # Landroid/util/AttributeSet;

    .line 32
    invoke-direct {p0, p1, p2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 34
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->mActivity:Landroid/app/Activity;

    .line 35
    invoke-virtual {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->initView(Landroid/app/Activity;)V

    .line 36
    return-void
.end method


# virtual methods
.method getListView()Landroid/view/View;
    .locals 1

    .line 70
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->listView:Landroid/widget/ListView;

    return-object v0
.end method

.method getTextView()Landroid/view/View;
    .locals 1

    .line 74
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->textView:Landroid/widget/TextView;

    return-object v0
.end method

.method public hideTitle()V
    .locals 2

    .line 58
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->textView:Landroid/widget/TextView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 59
    return-void
.end method

.method public hideView()V
    .locals 2

    .line 50
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->convertView:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 51
    return-void
.end method

.method public initView(Landroid/app/Activity;)V
    .locals 3
    .param p1, "context"    # Landroid/app/Activity;

    .line 39
    invoke-virtual {p1}, Landroid/app/Activity;->getLayoutInflater()Landroid/view/LayoutInflater;

    move-result-object v0

    .line 40
    .local v0, "inflater":Landroid/view/LayoutInflater;
    const v1, 0x7f080053

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v1

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->convertView:Landroid/view/View;

    .line 41
    invoke-virtual {p0, v1}, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->addView(Landroid/view/View;)V

    .line 42
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->convertView:Landroid/view/View;

    const v2, 0x7f060322

    invoke-virtual {v1, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->textView:Landroid/widget/TextView;

    .line 43
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->convertView:Landroid/view/View;

    const v2, 0x7f060320

    invoke-virtual {v1, v2}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ListView;

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->listView:Landroid/widget/ListView;

    .line 44
    return-void
.end method

.method public setAdapter(Landroid/widget/ListAdapter;)V
    .locals 1
    .param p1, "adapter"    # Landroid/widget/ListAdapter;

    .line 66
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->listView:Landroid/widget/ListView;

    invoke-virtual {v0, p1}, Landroid/widget/ListView;->setAdapter(Landroid/widget/ListAdapter;)V

    .line 67
    return-void
.end method

.method public setBackgroudColor(I)V
    .locals 1
    .param p1, "resid"    # I

    .line 78
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->listView:Landroid/widget/ListView;

    invoke-virtual {v0, p1}, Landroid/widget/ListView;->setBackgroundResource(I)V

    .line 79
    return-void
.end method

.method public setListViewHeightBasedOnChildren()V
    .locals 9

    .line 86
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->listView:Landroid/widget/ListView;

    invoke-virtual {v0}, Landroid/widget/ListView;->getAdapter()Landroid/widget/ListAdapter;

    move-result-object v0

    .line 87
    .local v0, "listAdapter":Landroid/widget/ListAdapter;
    if-eqz v0, :cond_3

    invoke-interface {v0}, Landroid/widget/ListAdapter;->getCount()I

    move-result v1

    if-nez v1, :cond_0

    goto :goto_1

    .line 91
    :cond_0
    const/4 v1, 0x0

    .line 92
    .local v1, "totalHeight":I
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->mActivity:Landroid/app/Activity;

    .line 93
    invoke-virtual {v2}, Landroid/app/Activity;->getWindowManager()Landroid/view/WindowManager;

    move-result-object v2

    invoke-interface {v2}, Landroid/view/WindowManager;->getDefaultDisplay()Landroid/view/Display;

    move-result-object v2

    invoke-virtual {v2}, Landroid/view/Display;->getWidth()I

    move-result v2

    const/high16 v3, -0x80000000

    .line 92
    invoke-static {v2, v3}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result v2

    .line 95
    .local v2, "widthMeasureSpec":I
    invoke-static {v2}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result v3

    .line 96
    .local v3, "size":I
    const/4 v4, 0x0

    invoke-static {v4, v4}, Landroid/view/View$MeasureSpec;->makeMeasureSpec(II)I

    move-result v4

    .line 97
    .local v4, "heightMeasureSpec":I
    new-instance v5, Landroid/view/ViewGroup$LayoutParams;

    const/4 v6, -0x1

    const/4 v7, -0x2

    invoke-direct {v5, v6, v7}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    .line 101
    .local v5, "lp":Landroid/view/ViewGroup$LayoutParams;
    const/4 v6, 0x0

    .local v6, "i":I
    :goto_0
    invoke-interface {v0}, Landroid/widget/ListAdapter;->getCount()I

    move-result v7

    if-ge v6, v7, :cond_2

    .line 102
    const/4 v7, 0x0

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->listView:Landroid/widget/ListView;

    invoke-interface {v0, v6, v7, v8}, Landroid/widget/ListAdapter;->getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v7

    .line 103
    .local v7, "listItem":Landroid/view/View;
    instance-of v8, v7, Landroid/view/ViewGroup;

    if-eqz v8, :cond_1

    invoke-virtual {v7, v5}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 104
    :cond_1
    invoke-virtual {v7, v2, v4}, Landroid/view/View;->measure(II)V

    .line 105
    invoke-virtual {v7}, Landroid/view/View;->getMeasuredHeight()I

    move-result v8

    add-int/2addr v1, v8

    .line 101
    .end local v7    # "listItem":Landroid/view/View;
    add-int/lit8 v6, v6, 0x1

    goto :goto_0

    .line 108
    .end local v6    # "i":I
    :cond_2
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->listView:Landroid/widget/ListView;

    invoke-virtual {v6}, Landroid/widget/ListView;->getPaddingTop()I

    move-result v6

    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->listView:Landroid/widget/ListView;

    invoke-virtual {v7}, Landroid/widget/ListView;->getPaddingBottom()I

    move-result v7

    add-int/2addr v6, v7

    add-int/2addr v1, v6

    .line 109
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->listView:Landroid/widget/ListView;

    invoke-virtual {v6}, Landroid/widget/ListView;->getDividerHeight()I

    move-result v6

    invoke-interface {v0}, Landroid/widget/ListAdapter;->getCount()I

    move-result v7

    add-int/lit8 v7, v7, -0x1

    mul-int/2addr v6, v7

    add-int/2addr v1, v6

    .line 110
    add-int/lit8 v1, v1, 0x14

    .line 111
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->listView:Landroid/widget/ListView;

    invoke-virtual {v6}, Landroid/widget/ListView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v6

    .line 112
    .local v6, "params":Landroid/view/ViewGroup$LayoutParams;
    iput v1, v6, Landroid/view/ViewGroup$LayoutParams;->height:I

    .line 114
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->listView:Landroid/widget/ListView;

    invoke-virtual {v7, v6}, Landroid/widget/ListView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 115
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->listView:Landroid/widget/ListView;

    invoke-virtual {v7}, Landroid/widget/ListView;->requestLayout()V

    .line 116
    return-void

    .line 88
    .end local v1    # "totalHeight":I
    .end local v2    # "widthMeasureSpec":I
    .end local v3    # "size":I
    .end local v4    # "heightMeasureSpec":I
    .end local v5    # "lp":Landroid/view/ViewGroup$LayoutParams;
    .end local v6    # "params":Landroid/view/ViewGroup$LayoutParams;
    :cond_3
    :goto_1
    return-void
.end method

.method public setTextBackgroudColor(I)V
    .locals 1
    .param p1, "resid"    # I

    .line 82
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->textView:Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setBackgroundResource(I)V

    .line 83
    return-void
.end method

.method public setTextContent(Ljava/lang/String;)V
    .locals 1
    .param p1, "content"    # Ljava/lang/String;

    .line 47
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->textView:Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 48
    return-void
.end method

.method public showTitle()V
    .locals 2

    .line 62
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->textView:Landroid/widget/TextView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 63
    return-void
.end method

.method public showView()V
    .locals 2

    .line 54
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/MdmLinearLayout;->convertView:Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 55
    return-void
.end method
