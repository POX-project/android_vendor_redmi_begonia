.class Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent$1;
.super Ljava/lang/Object;
.source "MDMComponent.java"

# interfaces
.implements Landroid/widget/AbsListView$OnScrollListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->getView()Landroid/view/View;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field firstVisible:I

.field lastVisibleIndex:I

.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;

.field totalCount:I

.field visibleCount:I


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;)V
    .locals 0
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;

    .line 932
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onScroll(Landroid/widget/AbsListView;III)V
    .locals 1
    .param p1, "view"    # Landroid/widget/AbsListView;
    .param p2, "firstVisibleItem"    # I
    .param p3, "visibleItemCount"    # I
    .param p4, "totalItemCount"    # I

    .line 948
    iput p2, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent$1;->firstVisible:I

    .line 949
    iput p3, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent$1;->visibleCount:I

    .line 950
    iput p4, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent$1;->totalCount:I

    .line 951
    add-int v0, p2, p3

    add-int/lit8 v0, v0, -0x1

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent$1;->lastVisibleIndex:I

    .line 952
    return-void
.end method

.method public onScrollStateChanged(Landroid/widget/AbsListView;I)V
    .locals 3
    .param p1, "view"    # Landroid/widget/AbsListView;
    .param p2, "scrollState"    # I

    .line 936
    if-eqz p2, :cond_0

    goto :goto_1

    .line 938
    :cond_0
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mListView:Landroid/widget/ListView;

    invoke-virtual {v1}, Landroid/widget/ListView;->getFirstVisiblePosition()I

    move-result v1

    iput v1, v0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->scrollPos:I

    .line 939
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;

    iget-object v0, v0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->mListView:Landroid/widget/ListView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ListView;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    .line 940
    .local v0, "viewItem":Landroid/view/View;
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent$1;->this$0:Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;

    if-nez v0, :cond_1

    goto :goto_0

    :cond_1
    invoke-virtual {v0}, Landroid/view/View;->getTop()I

    move-result v1

    :goto_0
    iput v1, v2, Lcom/mediatek/engineermode/mdmcomponent/NormalTableComponent;->scrollTop:I

    .line 941
    nop

    .line 945
    .end local v0    # "viewItem":Landroid/view/View;
    :goto_1
    return-void
.end method
