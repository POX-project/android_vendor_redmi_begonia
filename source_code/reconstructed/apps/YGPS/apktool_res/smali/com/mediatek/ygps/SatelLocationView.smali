.class public Lcom/mediatek/ygps/SatelLocationView;
.super Lcom/mediatek/ygps/SatelliteBaseView;
.source "SatelLocationView.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/ygps/SatelLocationView$Point;
    }
.end annotation


# instance fields
.field private mBgPaint:Landroid/graphics/Paint;

.field private mCircleBorderPaint:Landroid/graphics/Paint;

.field private mGraphicPaint:Landroid/graphics/Paint;

.field private mTextPaint:Landroid/graphics/Paint;

.field private mUnfixedBmp:Landroid/graphics/Bitmap;

.field private mUnusedInFixBmp:Landroid/graphics/Bitmap;

.field private mUsedInFixBmp:Landroid/graphics/Bitmap;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 89
    invoke-direct {p0, p1, v0, v1}, Lcom/mediatek/ygps/SatelLocationView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    .line 98
    invoke-direct {p0, p1, p2, v0}, Lcom/mediatek/ygps/SatelLocationView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 109
    invoke-direct {p0, p1, p2, p3}, Lcom/mediatek/ygps/SatelliteBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 p1, 0x0

    .line 76
    iput-object p1, p0, Lcom/mediatek/ygps/SatelLocationView;->mGraphicPaint:Landroid/graphics/Paint;

    .line 77
    iput-object p1, p0, Lcom/mediatek/ygps/SatelLocationView;->mTextPaint:Landroid/graphics/Paint;

    .line 78
    iput-object p1, p0, Lcom/mediatek/ygps/SatelLocationView;->mBgPaint:Landroid/graphics/Paint;

    .line 79
    iput-object p1, p0, Lcom/mediatek/ygps/SatelLocationView;->mCircleBorderPaint:Landroid/graphics/Paint;

    .line 80
    iput-object p1, p0, Lcom/mediatek/ygps/SatelLocationView;->mUnfixedBmp:Landroid/graphics/Bitmap;

    .line 81
    iput-object p1, p0, Lcom/mediatek/ygps/SatelLocationView;->mUsedInFixBmp:Landroid/graphics/Bitmap;

    .line 82
    iput-object p1, p0, Lcom/mediatek/ygps/SatelLocationView;->mUnusedInFixBmp:Landroid/graphics/Bitmap;

    .line 110
    invoke-direct {p0}, Lcom/mediatek/ygps/SatelLocationView;->onCreateView()V

    return-void
.end method

.method private computeViewPostion(Lcom/mediatek/ygps/SatelliteInfo;Lcom/mediatek/ygps/SatelLocationView$Point;F)Lcom/mediatek/ygps/SatelLocationView$Point;
    .locals 7

    .line 144
    new-instance p0, Lcom/mediatek/ygps/SatelLocationView$Point;

    invoke-direct {p0}, Lcom/mediatek/ygps/SatelLocationView$Point;-><init>()V

    .line 145
    iget v0, p1, Lcom/mediatek/ygps/SatelliteInfo;->mElevation:F

    const/high16 v1, 0x42b40000    # 90.0f

    sub-float v0, v1, v0

    mul-float/2addr p3, v0

    div-float/2addr p3, v1

    .line 146
    iget p1, p1, Lcom/mediatek/ygps/SatelliteInfo;->mAzimuth:F

    float-to-double v0, p1

    const-wide v2, 0x400921fb54442d18L    # Math.PI

    mul-double/2addr v0, v2

    const-wide v2, 0x4066800000000000L    # 180.0

    div-double/2addr v0, v2

    double-to-float p1, v0

    .line 148
    iget v0, p2, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoX:F

    float-to-double v1, p3

    float-to-double v3, p1

    invoke-static {v3, v4}, Ljava/lang/Math;->sin(D)D

    move-result-wide v5

    mul-double/2addr v5, v1

    double-to-float p1, v5

    add-float/2addr v0, p1

    iput v0, p0, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoX:F

    .line 149
    iget p1, p2, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoY:F

    invoke-static {v3, v4}, Ljava/lang/Math;->cos(D)D

    move-result-wide p2

    mul-double/2addr v1, p2

    double-to-float p2, v1

    sub-float/2addr p1, p2

    iput p1, p0, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoY:F

    return-object p0
.end method

.method private getBmpFromRes(I)Landroid/graphics/Bitmap;
    .locals 0

    .line 139
    invoke-virtual {p0}, Landroid/view/View;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0, p1}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object p0

    check-cast p0, Landroid/graphics/drawable/BitmapDrawable;

    .line 140
    invoke-virtual {p0}, Landroid/graphics/drawable/BitmapDrawable;->getBitmap()Landroid/graphics/Bitmap;

    move-result-object p0

    return-object p0
.end method

.method private onCreateView()V
    .locals 4

    .line 114
    new-instance v0, Landroid/graphics/Paint;

    invoke-direct {v0}, Landroid/graphics/Paint;-><init>()V

    iput-object v0, p0, Lcom/mediatek/ygps/SatelLocationView;->mGraphicPaint:Landroid/graphics/Paint;

    .line 115
    sget-object v1, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 116
    iget-object v0, p0, Lcom/mediatek/ygps/SatelLocationView;->mGraphicPaint:Landroid/graphics/Paint;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 117
    iget-object v0, p0, Lcom/mediatek/ygps/SatelLocationView;->mGraphicPaint:Landroid/graphics/Paint;

    invoke-virtual {p0}, Landroid/view/View;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const v3, 0x7f020004

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getColor(I)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setColor(I)V

    .line 118
    iget-object v0, p0, Lcom/mediatek/ygps/SatelLocationView;->mGraphicPaint:Landroid/graphics/Paint;

    const/high16 v2, 0x3f800000    # 1.0f

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    .line 120
    new-instance v0, Landroid/graphics/Paint;

    invoke-direct {v0}, Landroid/graphics/Paint;-><init>()V

    iput-object v0, p0, Lcom/mediatek/ygps/SatelLocationView;->mTextPaint:Landroid/graphics/Paint;

    .line 121
    sget-object v2, Landroid/graphics/Paint$Align;->CENTER:Landroid/graphics/Paint$Align;

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setTextAlign(Landroid/graphics/Paint$Align;)V

    .line 122
    iget-object v0, p0, Lcom/mediatek/ygps/SatelLocationView;->mTextPaint:Landroid/graphics/Paint;

    const/high16 v2, 0x41400000    # 12.0f

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setTextSize(F)V

    .line 123
    iget-object v0, p0, Lcom/mediatek/ygps/SatelLocationView;->mTextPaint:Landroid/graphics/Paint;

    invoke-virtual {p0}, Landroid/view/View;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const v3, 0x7f020011

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getColor(I)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setColor(I)V

    .line 125
    new-instance v0, Landroid/graphics/Paint;

    invoke-direct {v0}, Landroid/graphics/Paint;-><init>()V

    iput-object v0, p0, Lcom/mediatek/ygps/SatelLocationView;->mBgPaint:Landroid/graphics/Paint;

    .line 126
    invoke-virtual {p0}, Landroid/view/View;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const v3, 0x7f020010

    invoke-virtual {v2, v3}, Landroid/content/res/Resources;->getColor(I)I

    move-result v2

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setColor(I)V

    .line 128
    new-instance v0, Landroid/graphics/Paint;

    invoke-direct {v0}, Landroid/graphics/Paint;-><init>()V

    iput-object v0, p0, Lcom/mediatek/ygps/SatelLocationView;->mCircleBorderPaint:Landroid/graphics/Paint;

    .line 129
    sget-object v2, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {v0, v2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 130
    iget-object v0, p0, Lcom/mediatek/ygps/SatelLocationView;->mCircleBorderPaint:Landroid/graphics/Paint;

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 131
    iget-object v0, p0, Lcom/mediatek/ygps/SatelLocationView;->mCircleBorderPaint:Landroid/graphics/Paint;

    const/high16 v1, 0x40400000    # 3.0f

    invoke-virtual {v0, v1}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    const v0, 0x7f040015

    .line 133
    invoke-direct {p0, v0}, Lcom/mediatek/ygps/SatelLocationView;->getBmpFromRes(I)Landroid/graphics/Bitmap;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/ygps/SatelLocationView;->mUnfixedBmp:Landroid/graphics/Bitmap;

    const v0, 0x7f040016

    .line 134
    invoke-direct {p0, v0}, Lcom/mediatek/ygps/SatelLocationView;->getBmpFromRes(I)Landroid/graphics/Bitmap;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/ygps/SatelLocationView;->mUnusedInFixBmp:Landroid/graphics/Bitmap;

    const v0, 0x7f040014

    .line 135
    invoke-direct {p0, v0}, Lcom/mediatek/ygps/SatelLocationView;->getBmpFromRes(I)Landroid/graphics/Bitmap;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/ygps/SatelLocationView;->mUsedInFixBmp:Landroid/graphics/Bitmap;

    return-void
.end method


# virtual methods
.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 12

    .line 155
    invoke-super {p0, p1}, Landroid/view/View;->onDraw(Landroid/graphics/Canvas;)V

    .line 156
    invoke-virtual {p0}, Landroid/view/View;->getWidth()I

    move-result v0

    int-to-float v0, v0

    .line 157
    invoke-virtual {p0}, Landroid/view/View;->getHeight()I

    move-result v1

    int-to-float v1, v1

    .line 158
    new-instance v6, Lcom/mediatek/ygps/SatelLocationView$Point;

    const/high16 v7, 0x40000000    # 2.0f

    div-float/2addr v0, v7

    div-float/2addr v1, v7

    invoke-direct {v6, v0, v1}, Lcom/mediatek/ygps/SatelLocationView$Point;-><init>(FF)V

    .line 159
    iget v0, v6, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoX:F

    iget v1, v6, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoY:F

    invoke-static {v0, v1}, Ljava/lang/Math;->min(FF)F

    move-result v0

    const/high16 v1, 0x41400000    # 12.0f

    sub-float/2addr v0, v1

    float-to-double v0, v0

    invoke-static {v0, v1}, Ljava/lang/Math;->floor(D)D

    move-result-wide v0

    double-to-int v0, v0

    .line 161
    iget-object v1, p0, Lcom/mediatek/ygps/SatelLocationView;->mBgPaint:Landroid/graphics/Paint;

    invoke-virtual {p1, v1}, Landroid/graphics/Canvas;->drawPaint(Landroid/graphics/Paint;)V

    const/4 v1, 0x4

    new-array v2, v1, [F

    shr-int/lit8 v3, v0, 0x2

    int-to-float v8, v3

    const/4 v3, 0x0

    aput v8, v2, v3

    shr-int/lit8 v4, v0, 0x1

    int-to-float v4, v4

    const/4 v5, 0x1

    aput v4, v2, v5

    int-to-float v9, v0

    const/high16 v0, 0x3f400000    # 0.75f

    mul-float/2addr v0, v9

    const/4 v4, 0x2

    aput v0, v2, v4

    const/4 v0, 0x3

    aput v9, v2, v0

    :goto_0
    if-ge v3, v1, :cond_0

    .line 164
    iget v0, v6, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoX:F

    iget v4, v6, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoY:F

    aget v5, v2, v3

    iget-object v10, p0, Lcom/mediatek/ygps/SatelLocationView;->mGraphicPaint:Landroid/graphics/Paint;

    invoke-virtual {p1, v0, v4, v5, v10}, Landroid/graphics/Canvas;->drawCircle(FFFLandroid/graphics/Paint;)V

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 166
    :cond_0
    iget v0, v6, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoX:F

    sub-float v1, v0, v9

    iget v4, v6, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoY:F

    sub-float v3, v0, v8

    iget-object v5, p0, Lcom/mediatek/ygps/SatelLocationView;->mGraphicPaint:Landroid/graphics/Paint;

    move-object v0, p1

    move v2, v4

    invoke-virtual/range {v0 .. v5}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    .line 168
    iget v0, v6, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoX:F

    add-float v1, v0, v9

    iget v4, v6, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoY:F

    add-float v3, v0, v8

    iget-object v5, p0, Lcom/mediatek/ygps/SatelLocationView;->mGraphicPaint:Landroid/graphics/Paint;

    move-object v0, p1

    move v2, v4

    invoke-virtual/range {v0 .. v5}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    .line 170
    iget v3, v6, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoX:F

    iget v0, v6, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoY:F

    sub-float v2, v0, v9

    sub-float v4, v0, v8

    iget-object v5, p0, Lcom/mediatek/ygps/SatelLocationView;->mGraphicPaint:Landroid/graphics/Paint;

    move-object v0, p1

    move v1, v3

    invoke-virtual/range {v0 .. v5}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    .line 172
    iget v3, v6, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoX:F

    iget v0, v6, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoY:F

    add-float v2, v0, v9

    add-float v4, v0, v8

    iget-object v5, p0, Lcom/mediatek/ygps/SatelLocationView;->mGraphicPaint:Landroid/graphics/Paint;

    move-object v0, p1

    move v1, v3

    invoke-virtual/range {v0 .. v5}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    .line 175
    invoke-virtual {p0}, Lcom/mediatek/ygps/SatelliteBaseView;->getSatelliteInfoManager()Lcom/mediatek/ygps/SatelliteInfoManager;

    move-result-object v0

    if-eqz v0, :cond_6

    .line 177
    invoke-virtual {v0}, Lcom/mediatek/ygps/SatelliteInfoManager;->getSatelInfoList()Ljava/util/List;

    move-result-object v1

    .line 178
    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_1
    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_6

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/ygps/SatelliteInfo;

    .line 180
    iget v3, v2, Lcom/mediatek/ygps/SatelliteInfo;->mPrn:I

    if-lez v3, :cond_1

    iget v3, v2, Lcom/mediatek/ygps/SatelliteInfo;->mElevation:F

    const/4 v4, 0x0

    cmpg-float v3, v3, v4

    if-lez v3, :cond_1

    iget v3, v2, Lcom/mediatek/ygps/SatelliteInfo;->mAzimuth:F

    cmpg-float v3, v3, v4

    if-gez v3, :cond_2

    goto :goto_1

    .line 185
    :cond_2
    invoke-direct {p0, v2, v6, v9}, Lcom/mediatek/ygps/SatelLocationView;->computeViewPostion(Lcom/mediatek/ygps/SatelliteInfo;Lcom/mediatek/ygps/SatelLocationView$Point;F)Lcom/mediatek/ygps/SatelLocationView$Point;

    move-result-object v3

    const/4 v5, -0x1

    .line 187
    invoke-virtual {v0, v5}, Lcom/mediatek/ygps/SatelliteInfoManager;->isUsedInFix(I)Z

    move-result v5

    if-eqz v5, :cond_5

    iget v5, v2, Lcom/mediatek/ygps/SatelliteInfo;->mSnr:F

    cmpg-float v4, v5, v4

    if-gtz v4, :cond_3

    goto :goto_2

    .line 190
    :cond_3
    iget-boolean v4, v2, Lcom/mediatek/ygps/SatelliteInfo;->mUsedInFix:Z

    if-eqz v4, :cond_4

    .line 191
    iget-object v4, p0, Lcom/mediatek/ygps/SatelLocationView;->mUsedInFixBmp:Landroid/graphics/Bitmap;

    goto :goto_3

    .line 193
    :cond_4
    iget-object v4, p0, Lcom/mediatek/ygps/SatelLocationView;->mUnusedInFixBmp:Landroid/graphics/Bitmap;

    goto :goto_3

    .line 188
    :cond_5
    :goto_2
    iget-object v4, p0, Lcom/mediatek/ygps/SatelLocationView;->mUnfixedBmp:Landroid/graphics/Bitmap;

    .line 196
    :goto_3
    invoke-virtual {v4}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v5

    .line 197
    iget v8, v3, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoX:F

    int-to-float v5, v5

    div-float/2addr v5, v7

    sub-float/2addr v8, v5

    .line 198
    iget v10, v3, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoY:F

    sub-float/2addr v10, v5

    .line 200
    iget-object v11, p0, Lcom/mediatek/ygps/SatelLocationView;->mGraphicPaint:Landroid/graphics/Paint;

    invoke-virtual {p1, v4, v8, v10, v11}, Landroid/graphics/Canvas;->drawBitmap(Landroid/graphics/Bitmap;FFLandroid/graphics/Paint;)V

    .line 201
    iget-object v4, p0, Lcom/mediatek/ygps/SatelLocationView;->mCircleBorderPaint:Landroid/graphics/Paint;

    invoke-virtual {v2}, Lcom/mediatek/ygps/SatelliteInfo;->getColor()I

    move-result v11

    invoke-virtual {v4, v11}, Landroid/graphics/Paint;->setColor(I)V

    .line 202
    iget v4, v3, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoX:F

    iget v3, v3, Lcom/mediatek/ygps/SatelLocationView$Point;->mCoY:F

    const/high16 v11, 0x3fc00000    # 1.5f

    sub-float/2addr v5, v11

    iget-object v11, p0, Lcom/mediatek/ygps/SatelLocationView;->mCircleBorderPaint:Landroid/graphics/Paint;

    invoke-virtual {p1, v4, v3, v5, v11}, Landroid/graphics/Canvas;->drawCircle(FFFLandroid/graphics/Paint;)V

    .line 204
    iget v2, v2, Lcom/mediatek/ygps/SatelliteInfo;->mPrn:I

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mediatek/ygps/SatelLocationView;->mTextPaint:Landroid/graphics/Paint;

    invoke-virtual {p1, v2, v8, v10, v3}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    goto :goto_1

    :cond_6
    return-void
.end method
