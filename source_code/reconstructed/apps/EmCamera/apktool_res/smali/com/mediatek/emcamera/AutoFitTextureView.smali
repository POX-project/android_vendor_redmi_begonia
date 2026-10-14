.class public Lcom/mediatek/emcamera/AutoFitTextureView;
.super Landroid/view/TextureView;
.source "AutoFitTextureView.java"


# instance fields
.field private mRatioHeight:I

.field private mRatioWidth:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;

    .line 50
    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/mediatek/emcamera/AutoFitTextureView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 51
    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "attrs"    # Landroid/util/AttributeSet;

    .line 54
    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/mediatek/emcamera/AutoFitTextureView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 55
    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "attrs"    # Landroid/util/AttributeSet;
    .param p3, "defStyle"    # I

    .line 58
    invoke-direct {p0, p1, p2, p3}, Landroid/view/TextureView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    .line 46
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/emcamera/AutoFitTextureView;->mRatioWidth:I

    .line 47
    iput v0, p0, Lcom/mediatek/emcamera/AutoFitTextureView;->mRatioHeight:I

    .line 59
    return-void
.end method


# virtual methods
.method protected onMeasure(II)V
    .locals 5
    .param p1, "widthMeasureSpec"    # I
    .param p2, "heightMeasureSpec"    # I

    .line 80
    invoke-super {p0, p1, p2}, Landroid/view/TextureView;->onMeasure(II)V

    .line 81
    invoke-static {p1}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result v0

    .line 82
    .local v0, "width":I
    invoke-static {p2}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result v1

    .line 83
    .local v1, "height":I
    iget v2, p0, Lcom/mediatek/emcamera/AutoFitTextureView;->mRatioWidth:I

    if-eqz v2, :cond_2

    iget v3, p0, Lcom/mediatek/emcamera/AutoFitTextureView;->mRatioHeight:I

    if-nez v3, :cond_0

    goto :goto_0

    .line 86
    :cond_0
    mul-int v4, v1, v2

    div-int/2addr v4, v3

    if-ge v0, v4, :cond_1

    .line 87
    mul-int/2addr v3, v0

    div-int/2addr v3, v2

    invoke-virtual {p0, v0, v3}, Lcom/mediatek/emcamera/AutoFitTextureView;->setMeasuredDimension(II)V

    goto :goto_1

    .line 89
    :cond_1
    mul-int/2addr v2, v1

    div-int/2addr v2, v3

    invoke-virtual {p0, v2, v1}, Lcom/mediatek/emcamera/AutoFitTextureView;->setMeasuredDimension(II)V

    goto :goto_1

    .line 84
    :cond_2
    :goto_0
    invoke-virtual {p0, v0, v1}, Lcom/mediatek/emcamera/AutoFitTextureView;->setMeasuredDimension(II)V

    .line 92
    :goto_1
    return-void
.end method

.method public setAspectRatio(II)V
    .locals 2
    .param p1, "width"    # I
    .param p2, "height"    # I

    .line 70
    if-ltz p1, :cond_0

    if-ltz p2, :cond_0

    .line 73
    iput p1, p0, Lcom/mediatek/emcamera/AutoFitTextureView;->mRatioWidth:I

    .line 74
    iput p2, p0, Lcom/mediatek/emcamera/AutoFitTextureView;->mRatioHeight:I

    .line 75
    invoke-virtual {p0}, Lcom/mediatek/emcamera/AutoFitTextureView;->requestLayout()V

    .line 76
    return-void

    .line 71
    :cond_0
    new-instance v0, Ljava/lang/IllegalArgumentException;

    const-string v1, "Size cannot be negative."

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method
