.class public Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView;
.super Landroid/widget/HorizontalScrollView;
.source "LinkedHorizontalScrollView.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView$LinkScrollChangeListener;
    }
.end annotation


# instance fields
.field private listener:Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView$LinkScrollChangeListener;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0
    .param p1, "context"    # Landroid/content/Context;

    .line 10
    invoke-direct {p0, p1}, Landroid/widget/HorizontalScrollView;-><init>(Landroid/content/Context;)V

    .line 11
    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "attrs"    # Landroid/util/AttributeSet;

    .line 14
    invoke-direct {p0, p1, p2}, Landroid/widget/HorizontalScrollView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 15
    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "attrs"    # Landroid/util/AttributeSet;
    .param p3, "defStyleAttr"    # I

    .line 17
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/HorizontalScrollView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 18
    return-void
.end method


# virtual methods
.method public fling(I)V
    .locals 1
    .param p1, "velocityY"    # I

    .line 30
    div-int/lit8 v0, p1, 0x2

    invoke-super {p0, v0}, Landroid/widget/HorizontalScrollView;->fling(I)V

    .line 31
    return-void
.end method

.method protected onScrollChanged(IIII)V
    .locals 6
    .param p1, "l"    # I
    .param p2, "t"    # I
    .param p3, "oldl"    # I
    .param p4, "oldt"    # I

    .line 24
    invoke-super {p0, p1, p2, p3, p4}, Landroid/widget/HorizontalScrollView;->onScrollChanged(IIII)V

    .line 25
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView;->listener:Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView$LinkScrollChangeListener;

    if-eqz v0, :cond_0

    .line 26
    move-object v1, p0

    move v2, p1

    move v3, p2

    move v4, p3

    move v5, p4

    invoke-interface/range {v0 .. v5}, Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView$LinkScrollChangeListener;->onscroll(Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView;IIII)V

    .line 27
    :cond_0
    return-void
.end method

.method public setMyScrollChangeListener(Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView$LinkScrollChangeListener;)V
    .locals 0
    .param p1, "listener"    # Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView$LinkScrollChangeListener;

    .line 20
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView;->listener:Lcom/mediatek/engineermode/iotconfig/LinkedHorizontalScrollView$LinkScrollChangeListener;

    .line 21
    return-void
.end method
