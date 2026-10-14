.class public Lcom/mediatek/engineermode/iotconfig/IotConfigListView;
.super Landroid/widget/ListView;
.source "IotConfigListView.java"

# interfaces
.implements Landroid/view/View$OnTouchListener;
.implements Landroid/widget/AbsListView$OnScrollListener;


# static fields
.field private static final MAXIMUM_LIST_ITEMS_VIEWABLE:I = 0x63


# instance fields
.field private listViewTouchAction:I


# direct methods
.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "attrs"    # Landroid/util/AttributeSet;

    .line 54
    invoke-direct {p0, p1, p2}, Landroid/widget/ListView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 55
    const/4 v0, -0x1

    iput v0, p0, Lcom/mediatek/engineermode/iotconfig/IotConfigListView;->listViewTouchAction:I

    .line 56
    invoke-virtual {p0, p0}, Lcom/mediatek/engineermode/iotconfig/IotConfigListView;->setOnScrollListener(Landroid/widget/AbsListView$OnScrollListener;)V

    .line 57
    invoke-virtual {p0, p0}, Lcom/mediatek/engineermode/iotconfig/IotConfigListView;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    .line 58
    return-void
.end method


# virtual methods
.method protected onMeasure(II)V
    .locals 8
    .param p1, "widthMeasureSpec"    # I
    .param p2, "heightMeasureSpec"    # I

    .line 76
    invoke-super {p0, p1, p2}, Landroid/widget/ListView;->onMeasure(II)V

    .line 78
    const/4 v0, 0x0

    .line 79
    .local v0, "newHeight":I
    invoke-static {p2}, Landroid/view/View$MeasureSpec;->getMode(I)I

    move-result v1

    .line 80
    .local v1, "heightMode":I
    invoke-static {p2}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result v2

    .line 81
    .local v2, "heightSize":I
    const/high16 v3, 0x40000000    # 2.0f

    if-eq v1, v3, :cond_4

    .line 82
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/IotConfigListView;->getAdapter()Landroid/widget/ListAdapter;

    move-result-object v3

    .line 83
    .local v3, "listAdapter":Landroid/widget/ListAdapter;
    if-eqz v3, :cond_2

    invoke-interface {v3}, Landroid/widget/ListAdapter;->isEmpty()Z

    move-result v4

    if-nez v4, :cond_2

    .line 84
    const/4 v4, 0x0

    .line 85
    .local v4, "listPosition":I
    const/4 v4, 0x0

    .line 86
    :goto_0
    nop

    .line 85
    invoke-interface {v3}, Landroid/widget/ListAdapter;->getCount()I

    move-result v5

    if-ge v4, v5, :cond_1

    const/16 v5, 0x63

    if-ge v4, v5, :cond_1

    .line 87
    const/4 v5, 0x0

    invoke-interface {v3, v4, v5, p0}, Landroid/widget/ListAdapter;->getView(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v5

    .line 89
    .local v5, "listItem":Landroid/view/View;
    instance-of v6, v5, Landroid/view/ViewGroup;

    if-eqz v6, :cond_0

    .line 90
    new-instance v6, Landroid/widget/AbsListView$LayoutParams;

    const/4 v7, -0x2

    invoke-direct {v6, v7, v7}, Landroid/widget/AbsListView$LayoutParams;-><init>(II)V

    invoke-virtual {v5, v6}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 93
    :cond_0
    invoke-virtual {v5, p1, p2}, Landroid/view/View;->measure(II)V

    .line 94
    invoke-virtual {v5}, Landroid/view/View;->getMeasuredHeight()I

    move-result v6

    add-int/2addr v0, v6

    .line 86
    .end local v5    # "listItem":Landroid/view/View;
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 96
    :cond_1
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/IotConfigListView;->getDividerHeight()I

    move-result v5

    mul-int/2addr v5, v4

    add-int/2addr v0, v5

    .line 98
    .end local v4    # "listPosition":I
    :cond_2
    const/high16 v4, -0x80000000

    if-ne v1, v4, :cond_3

    if-le v0, v2, :cond_3

    .line 99
    if-le v0, v2, :cond_3

    .line 100
    move v0, v2

    .line 103
    .end local v3    # "listAdapter":Landroid/widget/ListAdapter;
    :cond_3
    goto :goto_1

    .line 104
    :cond_4
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/IotConfigListView;->getMeasuredHeight()I

    move-result v0

    .line 106
    :goto_1
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/IotConfigListView;->getMeasuredWidth()I

    move-result v3

    invoke-virtual {p0, v3, v0}, Lcom/mediatek/engineermode/iotconfig/IotConfigListView;->setMeasuredDimension(II)V

    .line 107
    return-void
.end method

.method public onScroll(Landroid/widget/AbsListView;III)V
    .locals 2
    .param p1, "view"    # Landroid/widget/AbsListView;
    .param p2, "firstVisibleItem"    # I
    .param p3, "visibleItemCount"    # I
    .param p4, "totalItemCount"    # I

    .line 63
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/IotConfigListView;->getAdapter()Landroid/widget/ListAdapter;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/IotConfigListView;->getAdapter()Landroid/widget/ListAdapter;

    move-result-object v0

    invoke-interface {v0}, Landroid/widget/ListAdapter;->getCount()I

    move-result v0

    const/16 v1, 0x63

    if-le v0, v1, :cond_0

    .line 64
    iget v0, p0, Lcom/mediatek/engineermode/iotconfig/IotConfigListView;->listViewTouchAction:I

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    .line 65
    const/4 v0, 0x0

    const/4 v1, -0x1

    invoke-virtual {p0, v0, v1}, Lcom/mediatek/engineermode/iotconfig/IotConfigListView;->scrollBy(II)V

    .line 68
    :cond_0
    return-void
.end method

.method public onScrollStateChanged(Landroid/widget/AbsListView;I)V
    .locals 0
    .param p1, "view"    # Landroid/widget/AbsListView;
    .param p2, "scrollState"    # I

    .line 72
    return-void
.end method

.method public onTouch(Landroid/view/View;Landroid/view/MotionEvent;)Z
    .locals 3
    .param p1, "v"    # Landroid/view/View;
    .param p2, "event"    # Landroid/view/MotionEvent;

    .line 111
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/IotConfigListView;->getAdapter()Landroid/widget/ListAdapter;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/IotConfigListView;->getAdapter()Landroid/widget/ListAdapter;

    move-result-object v0

    invoke-interface {v0}, Landroid/widget/ListAdapter;->getCount()I

    move-result v0

    const/16 v2, 0x63

    if-le v0, v2, :cond_0

    .line 112
    iget v0, p0, Lcom/mediatek/engineermode/iotconfig/IotConfigListView;->listViewTouchAction:I

    const/4 v2, 0x2

    if-ne v0, v2, :cond_0

    .line 113
    const/4 v0, 0x1

    invoke-virtual {p0, v1, v0}, Lcom/mediatek/engineermode/iotconfig/IotConfigListView;->scrollBy(II)V

    .line 116
    :cond_0
    return v1
.end method
