.class public Lcom/mediatek/engineermode/mdmcomponent/CurveView;
.super Landroid/view/View;
.source "CurveView.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;,
        Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;,
        Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;,
        Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;,
        Lcom/mediatek/engineermode/mdmcomponent/CurveView$GestureListener;
    }
.end annotation


# static fields
.field private static final BOTTOM_GAP:I = 0x14

.field private static final FONT_SIZE:I = 0xa

.field private static final LEFT_GAP:I = 0x5

.field private static final LINE_LENGTH:I = 0x5

.field private static final MAX_COUNT:I = 0x14

.field private static final RIGHT_GAP:I = 0xa

.field private static final TAG:Ljava/lang/String; = "EmInfo/CurveView"

.field private static final TEXT_OFFSET_X:I = 0x5

.field private static final TEXT_OFFSET_Y:I = 0xa

.field private static final TOP_GAP:I = 0x46


# instance fields
.field drawIndex:I

.field private mAutoScroll:Z

.field private mBoldPaint:Landroid/graphics/Paint;

.field private mConfigs:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;",
            ">;"
        }
    .end annotation
.end field

.field private mData:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "[F>;"
        }
    .end annotation
.end field

.field private mGestureDetector:Landroid/view/GestureDetector;

.field private mHeight:I

.field private mLightPaint:Landroid/graphics/Paint;

.field private mMatrix:Landroid/graphics/Matrix;

.field private mPaint:Landroid/graphics/Paint;

.field private mScaleDetector:Landroid/view/ScaleGestureDetector;

.field private mScaling:Z

.field private mTextPaint:Landroid/graphics/Paint;

.field private mTextPaint2:Landroid/graphics/Paint;

.field private mViewRect:Landroid/graphics/RectF;

.field private mWidth:I

.field mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

.field mXAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

.field mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

.field mXMax:F

.field mXMin:F

.field mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

.field mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

.field mYAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

.field mYMax:F

.field mYMin:F

.field test:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2
    .param p1, "context"    # Landroid/content/Context;

    .line 456
    invoke-direct {p0, p1}, Landroid/view/View;-><init>(Landroid/content/Context;)V

    .line 315
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    .line 316
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    .line 371
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    .line 372
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    .line 396
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    .line 397
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    .line 399
    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->test:Z

    .line 429
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mData:Ljava/util/ArrayList;

    .line 431
    const/high16 v0, 0x7f800000    # Float.POSITIVE_INFINITY

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXMin:F

    .line 432
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYMin:F

    .line 433
    const/high16 v0, -0x800000    # Float.NEGATIVE_INFINITY

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXMax:F

    .line 434
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYMax:F

    .line 435
    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->drawIndex:I

    .line 436
    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mWidth:I

    .line 437
    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mHeight:I

    .line 441
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mAutoScroll:Z

    .line 442
    new-instance v0, Landroid/graphics/RectF;

    invoke-direct {v0}, Landroid/graphics/RectF;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mViewRect:Landroid/graphics/RectF;

    .line 457
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->init(Landroid/content/Context;)V

    .line 458
    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 2
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "attrs"    # Landroid/util/AttributeSet;

    .line 469
    invoke-direct {p0, p1, p2}, Landroid/view/View;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 315
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    .line 316
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    .line 371
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    .line 372
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    .line 396
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    .line 397
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    .line 399
    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->test:Z

    .line 429
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mData:Ljava/util/ArrayList;

    .line 431
    const/high16 v0, 0x7f800000    # Float.POSITIVE_INFINITY

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXMin:F

    .line 432
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYMin:F

    .line 433
    const/high16 v0, -0x800000    # Float.NEGATIVE_INFINITY

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXMax:F

    .line 434
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYMax:F

    .line 435
    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->drawIndex:I

    .line 436
    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mWidth:I

    .line 437
    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mHeight:I

    .line 441
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mAutoScroll:Z

    .line 442
    new-instance v0, Landroid/graphics/RectF;

    invoke-direct {v0}, Landroid/graphics/RectF;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mViewRect:Landroid/graphics/RectF;

    .line 470
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->init(Landroid/content/Context;)V

    .line 471
    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)Landroid/graphics/RectF;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    .line 62
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mViewRect:Landroid/graphics/RectF;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)V
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    .line 62
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->updateAxisLabel()V

    return-void
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)Landroid/graphics/Matrix;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    .line 62
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mMatrix:Landroid/graphics/Matrix;

    return-object v0
.end method

.method static synthetic access$300(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    .line 62
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mScaling:Z

    return v0
.end method

.method static synthetic access$302(Lcom/mediatek/engineermode/mdmcomponent/CurveView;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/CurveView;
    .param p1, "x1"    # Z

    .line 62
    iput-boolean p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mScaling:Z

    return p1
.end method

.method static synthetic access$400(Lcom/mediatek/engineermode/mdmcomponent/CurveView;J)J
    .locals 2
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/CurveView;
    .param p1, "x1"    # J

    .line 62
    invoke-direct {p0, p1, p2}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->increase(J)J

    move-result-wide v0

    return-wide v0
.end method

.method static synthetic access$500(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)Landroid/graphics/Paint;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    .line 62
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mTextPaint:Landroid/graphics/Paint;

    return-object v0
.end method

.method private checkData()V
    .locals 6

    .line 548
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mData:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_6

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [F

    .line 549
    .local v1, "data":[F
    if-nez v1, :cond_0

    .line 550
    goto :goto_0

    .line 552
    :cond_0
    iget v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->drawIndex:I

    .local v2, "i":I
    :goto_1
    array-length v3, v1

    if-ge v2, v3, :cond_5

    .line 553
    aget v3, v1, v2

    .line 554
    .local v3, "x":F
    add-int/lit8 v4, v2, 0x1

    aget v4, v1, v4

    .line 555
    .local v4, "y":F
    iget v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXMin:F

    cmpg-float v5, v3, v5

    if-gez v5, :cond_1

    .line 556
    iput v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXMin:F

    .line 558
    :cond_1
    iget v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYMin:F

    cmpg-float v5, v4, v5

    if-gez v5, :cond_2

    .line 559
    iput v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYMin:F

    .line 561
    :cond_2
    iget v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXMax:F

    cmpl-float v5, v3, v5

    if-lez v5, :cond_3

    .line 562
    iput v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXMax:F

    .line 564
    :cond_3
    iget v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYMax:F

    cmpl-float v5, v4, v5

    if-lez v5, :cond_4

    .line 565
    iput v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYMax:F

    .line 552
    .end local v3    # "x":F
    .end local v4    # "y":F
    :cond_4
    add-int/lit8 v2, v2, 0x2

    goto :goto_1

    .line 568
    .end local v2    # "i":I
    :cond_5
    array-length v2, v1

    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->drawIndex:I

    .line 569
    .end local v1    # "data":[F
    goto :goto_0

    .line 570
    :cond_6
    return-void
.end method

.method private drawSeries(Landroid/graphics/Canvas;Landroid/graphics/RectF;)V
    .locals 16
    .param p1, "canvas"    # Landroid/graphics/Canvas;
    .param p2, "rect"    # Landroid/graphics/RectF;

    .line 803
    move-object/from16 v0, p0

    move-object/from16 v7, p1

    move-object/from16 v8, p2

    invoke-virtual/range {p1 .. p1}, Landroid/graphics/Canvas;->save()I

    .line 804
    invoke-virtual/range {p1 .. p2}, Landroid/graphics/Canvas;->clipRect(Landroid/graphics/RectF;)Z

    .line 818
    const/4 v9, 0x2

    new-array v10, v9, [F

    .line 819
    .local v10, "p":[F
    iget v1, v8, Landroid/graphics/RectF;->left:F

    const/4 v11, 0x0

    aput v1, v10, v11

    .line 820
    iget v1, v8, Landroid/graphics/RectF;->top:F

    iget v2, v8, Landroid/graphics/RectF;->bottom:F

    add-float/2addr v1, v2

    const/high16 v2, 0x40000000    # 2.0f

    div-float/2addr v1, v2

    const/4 v12, 0x1

    aput v1, v10, v12

    .line 822
    const/4 v1, 0x0

    move v13, v1

    .local v13, "i":I
    :goto_0
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-ge v13, v1, :cond_3

    .line 823
    aget v1, v10, v11

    const/high16 v2, 0x41200000    # 10.0f

    add-float/2addr v1, v2

    aput v1, v10, v11

    .line 824
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v2, v13}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    iget v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->color:I

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setColor(I)V

    .line 825
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v2, v13}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    iget v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineWidth:I

    int-to-float v2, v2

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    .line 826
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v1, v13}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    iget v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineType:I

    sget v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->LINE_DASH:I

    if-ne v1, v2, :cond_0

    .line 827
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    new-instance v2, Landroid/graphics/DashPathEffect;

    new-array v3, v9, [F

    fill-array-data v3, :array_0

    const/4 v4, 0x0

    invoke-direct {v2, v3, v4}, Landroid/graphics/DashPathEffect;-><init>([FF)V

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setPathEffect(Landroid/graphics/PathEffect;)Landroid/graphics/PathEffect;

    goto :goto_1

    .line 829
    :cond_0
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setPathEffect(Landroid/graphics/PathEffect;)Landroid/graphics/PathEffect;

    .line 832
    :goto_1
    aget v2, v10, v11

    aget v3, v10, v12

    aget v1, v10, v11

    const/high16 v4, 0x42c80000    # 100.0f

    add-float/2addr v4, v1

    aget v5, v10, v12

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    move-object/from16 v1, p1

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    .line 834
    aget v1, v10, v11

    const/high16 v2, 0x42480000    # 50.0f

    add-float/2addr v1, v2

    aput v1, v10, v11

    .line 835
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v1, v13}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    iget v14, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->nodeType:I

    .line 836
    .local v14, "nodeType":I
    sget v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CIRCLE:I

    const/high16 v15, 0x40a00000    # 5.0f

    if-ne v14, v1, :cond_1

    .line 837
    aget v1, v10, v11

    aget v2, v10, v12

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {v7, v1, v2, v15, v3}, Landroid/graphics/Canvas;->drawCircle(FFFLandroid/graphics/Paint;)V

    goto :goto_2

    .line 838
    :cond_1
    sget v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CROSS:I

    if-ne v14, v1, :cond_2

    .line 839
    aget v1, v10, v11

    sub-float v2, v1, v15

    aget v1, v10, v12

    sub-float v3, v1, v15

    aget v1, v10, v11

    add-float v4, v1, v15

    aget v1, v10, v12

    add-float v5, v1, v15

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    move-object/from16 v1, p1

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    .line 840
    aget v1, v10, v11

    add-float v2, v1, v15

    aget v1, v10, v12

    sub-float v3, v1, v15

    aget v1, v10, v11

    sub-float v4, v1, v15

    aget v1, v10, v12

    add-float v5, v1, v15

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    move-object/from16 v1, p1

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    .line 843
    :cond_2
    :goto_2
    aget v1, v10, v11

    const/high16 v2, 0x42700000    # 60.0f

    add-float/2addr v1, v2

    aput v1, v10, v11

    .line 844
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v1, v13}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    iget-object v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->name:Ljava/lang/String;

    .line 845
    .local v1, "str":Ljava/lang/String;
    aget v2, v10, v11

    aget v3, v10, v12

    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mTextPaint2:Landroid/graphics/Paint;

    invoke-virtual {v7, v1, v2, v3, v4}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    .line 847
    new-instance v2, Landroid/graphics/Rect;

    invoke-direct {v2}, Landroid/graphics/Rect;-><init>()V

    .line 848
    .local v2, "r":Landroid/graphics/Rect;
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mTextPaint2:Landroid/graphics/Paint;

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v4

    invoke-virtual {v3, v1, v11, v4, v2}, Landroid/graphics/Paint;->getTextBounds(Ljava/lang/String;IILandroid/graphics/Rect;)V

    .line 849
    aget v3, v10, v11

    invoke-virtual {v2}, Landroid/graphics/Rect;->width()I

    move-result v4

    int-to-float v4, v4

    add-float/2addr v3, v4

    aput v3, v10, v11

    .line 822
    .end local v1    # "str":Ljava/lang/String;
    .end local v2    # "r":Landroid/graphics/Rect;
    .end local v14    # "nodeType":I
    add-int/lit8 v13, v13, 0x1

    goto/16 :goto_0

    .line 852
    .end local v13    # "i":I
    :cond_3
    invoke-virtual/range {p1 .. p1}, Landroid/graphics/Canvas;->restore()V

    .line 853
    return-void

    nop

    :array_0
    .array-data 4
        0x40800000    # 4.0f
        0x40000000    # 2.0f
    .end array-data
.end method

.method private formatTime(J)Ljava/lang/String;
    .locals 2
    .param p1, "miliSeconds"    # J

    .line 869
    new-instance v0, Ljava/text/SimpleDateFormat;

    const-string v1, "HH:mm:ss"

    invoke-direct {v0, v1}, Ljava/text/SimpleDateFormat;-><init>(Ljava/lang/String;)V

    new-instance v1, Ljava/util/Date;

    invoke-direct {v1, p1, p2}, Ljava/util/Date;-><init>(J)V

    invoke-virtual {v0, v1}, Ljava/text/SimpleDateFormat;->format(Ljava/util/Date;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private increase(J)J
    .locals 4
    .param p1, "value"    # J

    .line 857
    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-nez v0, :cond_0

    .line 858
    const-wide/16 p1, 0x1

    goto :goto_1

    .line 859
    :cond_0
    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    const-wide/16 v1, 0x2

    if-nez v0, :cond_2

    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    const-string v3, "5"

    invoke-virtual {v0, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    .line 862
    :cond_1
    div-long/2addr p1, v1

    .line 863
    const-wide/16 v0, 0x5

    mul-long/2addr p1, v0

    goto :goto_1

    .line 860
    :cond_2
    :goto_0
    mul-long/2addr p1, v1

    .line 865
    :goto_1
    return-wide p1
.end method

.method private init(Landroid/content/Context;)V
    .locals 6
    .param p1, "context"    # Landroid/content/Context;

    .line 474
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$GestureListener;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$GestureListener;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)V

    .line 475
    .local v0, "listener":Lcom/mediatek/engineermode/mdmcomponent/CurveView$GestureListener;
    new-instance v1, Landroid/view/GestureDetector;

    const/4 v2, 0x0

    const/4 v3, 0x1

    invoke-direct {v1, p1, v0, v2, v3}, Landroid/view/GestureDetector;-><init>(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;Z)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mGestureDetector:Landroid/view/GestureDetector;

    .line 476
    new-instance v1, Landroid/view/ScaleGestureDetector;

    invoke-direct {v1, p1, v0}, Landroid/view/ScaleGestureDetector;-><init>(Landroid/content/Context;Landroid/view/ScaleGestureDetector$OnScaleGestureListener;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mScaleDetector:Landroid/view/ScaleGestureDetector;

    .line 478
    new-instance v1, Landroid/graphics/Paint;

    invoke-direct {v1}, Landroid/graphics/Paint;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    .line 479
    sget-object v2, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 480
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {v1, v3}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 482
    new-instance v1, Landroid/graphics/Paint;

    invoke-direct {v1}, Landroid/graphics/Paint;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mBoldPaint:Landroid/graphics/Paint;

    .line 483
    sget-object v2, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 484
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mBoldPaint:Landroid/graphics/Paint;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 485
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mBoldPaint:Landroid/graphics/Paint;

    const/high16 v4, -0x1000000

    invoke-virtual {v1, v4}, Landroid/graphics/Paint;->setColor(I)V

    .line 487
    new-instance v1, Landroid/graphics/Paint;

    invoke-direct {v1}, Landroid/graphics/Paint;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mLightPaint:Landroid/graphics/Paint;

    .line 488
    sget-object v5, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {v1, v5}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 489
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mLightPaint:Landroid/graphics/Paint;

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 490
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mLightPaint:Landroid/graphics/Paint;

    const v2, -0x333334

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setColor(I)V

    .line 492
    new-instance v1, Landroid/graphics/Paint;

    invoke-direct {v1}, Landroid/graphics/Paint;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mTextPaint:Landroid/graphics/Paint;

    .line 493
    sget-object v2, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 494
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mTextPaint:Landroid/graphics/Paint;

    invoke-virtual {v1, v3}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 495
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mTextPaint:Landroid/graphics/Paint;

    invoke-virtual {v1, v4}, Landroid/graphics/Paint;->setColor(I)V

    .line 496
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mTextPaint:Landroid/graphics/Paint;

    const/high16 v2, 0x41200000    # 10.0f

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setTextSize(F)V

    .line 498
    new-instance v1, Landroid/graphics/Paint;

    invoke-direct {v1}, Landroid/graphics/Paint;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mTextPaint2:Landroid/graphics/Paint;

    .line 499
    sget-object v2, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 500
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mTextPaint2:Landroid/graphics/Paint;

    invoke-virtual {v1, v3}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 501
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mTextPaint2:Landroid/graphics/Paint;

    invoke-virtual {v1, v4}, Landroid/graphics/Paint;->setColor(I)V

    .line 502
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mTextPaint2:Landroid/graphics/Paint;

    const/high16 v2, 0x41400000    # 12.0f

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setTextSize(F)V

    .line 503
    return-void
.end method

.method private makeLastVisible()V
    .locals 6

    .line 535
    const/4 v0, 0x0

    .line 536
    .local v0, "transX":F
    const/4 v1, 0x0

    .line 537
    .local v1, "transY":F
    const/4 v2, 0x2

    new-array v2, v2, [F

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXMax:F

    const/4 v4, 0x0

    aput v3, v2, v4

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYMax:F

    const/4 v5, 0x1

    aput v3, v2, v5

    .line 538
    .local v2, "p":[F
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mMatrix:Landroid/graphics/Matrix;

    invoke-virtual {v3, v2}, Landroid/graphics/Matrix;->mapPoints([F)V

    .line 539
    aget v3, v2, v4

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mViewRect:Landroid/graphics/RectF;

    iget v5, v5, Landroid/graphics/RectF;->right:F

    cmpl-float v3, v3, v5

    if-lez v3, :cond_0

    .line 540
    aget v3, v2, v4

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mViewRect:Landroid/graphics/RectF;

    iget v4, v4, Landroid/graphics/RectF;->right:F

    sub-float/2addr v3, v4

    neg-float v0, v3

    .line 542
    :cond_0
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mMatrix:Landroid/graphics/Matrix;

    const/4 v4, 0x0

    invoke-virtual {v3, v0, v4}, Landroid/graphics/Matrix;->postTranslate(FF)Z

    .line 543
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    invoke-virtual {v3, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->set(Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;)V

    .line 544
    return-void
.end method

.method private setMatrix()V
    .locals 7

    .line 611
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mMatrix:Landroid/graphics/Matrix;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mViewRect:Landroid/graphics/RectF;

    invoke-virtual {v1}, Landroid/graphics/RectF;->width()F

    move-result v1

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-wide v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->max:J

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-wide v4, v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->min:J

    sub-long/2addr v2, v4

    long-to-float v2, v2

    div-float/2addr v1, v2

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mViewRect:Landroid/graphics/RectF;

    .line 612
    invoke-virtual {v2}, Landroid/graphics/RectF;->height()F

    move-result v2

    neg-float v2, v2

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-wide v3, v3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->max:J

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-wide v5, v5, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->min:J

    sub-long/2addr v3, v5

    long-to-float v3, v3

    div-float/2addr v2, v3

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-wide v3, v3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->min:J

    long-to-float v3, v3

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-wide v4, v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->min:J

    long-to-float v4, v4

    .line 611
    invoke-virtual {v0, v1, v2, v3, v4}, Landroid/graphics/Matrix;->postScale(FFFF)Z

    .line 614
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mMatrix:Landroid/graphics/Matrix;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mViewRect:Landroid/graphics/RectF;

    iget v1, v1, Landroid/graphics/RectF;->left:F

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-wide v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->min:J

    long-to-float v2, v2

    sub-float/2addr v1, v2

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mViewRect:Landroid/graphics/RectF;

    iget v2, v2, Landroid/graphics/RectF;->bottom:F

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-wide v3, v3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->min:J

    long-to-float v3, v3

    sub-float/2addr v2, v3

    invoke-virtual {v0, v1, v2}, Landroid/graphics/Matrix;->postTranslate(FF)Z

    .line 615
    return-void
.end method

.method private updateAxis()V
    .locals 7

    .line 574
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXMin:F

    iget v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXMax:F

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    invoke-virtual {v0, v1, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->set(FFLcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;)V

    .line 575
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYMin:F

    iget v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYMax:F

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    invoke-virtual {v0, v1, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->set(FFLcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;)V

    .line 576
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-wide v0, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->lastMax:J

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-wide v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->max:J

    cmp-long v0, v0, v2

    if-ltz v0, :cond_0

    .line 577
    return-void

    .line 580
    :cond_0
    const/4 v0, 0x0

    .line 581
    .local v0, "width":I
    new-instance v1, Landroid/graphics/Rect;

    invoke-direct {v1}, Landroid/graphics/Rect;-><init>()V

    .line 582
    .local v1, "rect":Landroid/graphics/Rect;
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    iget-object v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->customLabel:Ljava/util/HashMap;

    const/4 v3, 0x0

    if-eqz v2, :cond_3

    .line 583
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    iget-object v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->customLabel:Ljava/util/HashMap;

    invoke-virtual {v2}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 584
    .local v4, "str":Ljava/lang/String;
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mTextPaint:Landroid/graphics/Paint;

    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v6

    invoke-virtual {v5, v4, v3, v6, v1}, Landroid/graphics/Paint;->getTextBounds(Ljava/lang/String;IILandroid/graphics/Rect;)V

    .line 585
    invoke-virtual {v1}, Landroid/graphics/Rect;->width()I

    move-result v5

    if-le v5, v0, :cond_1

    .line 586
    invoke-virtual {v1}, Landroid/graphics/Rect;->width()I

    move-result v0

    .line 588
    .end local v4    # "str":Ljava/lang/String;
    :cond_1
    goto :goto_0

    :cond_2
    goto :goto_1

    .line 590
    :cond_3
    iget v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYMax:F

    invoke-static {v2}, Ljava/lang/String;->valueOf(F)Ljava/lang/String;

    move-result-object v2

    .line 591
    .local v2, "str":Ljava/lang/String;
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mTextPaint:Landroid/graphics/Paint;

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v5

    invoke-virtual {v4, v2, v3, v5, v1}, Landroid/graphics/Paint;->getTextBounds(Ljava/lang/String;IILandroid/graphics/Rect;)V

    .line 592
    invoke-virtual {v1}, Landroid/graphics/Rect;->width()I

    move-result v3

    if-le v3, v0, :cond_4

    .line 593
    invoke-virtual {v1}, Landroid/graphics/Rect;->width()I

    move-result v0

    .line 595
    :cond_4
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-wide v4, v3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->max:J

    iput-wide v4, v3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->lastMax:J

    .line 597
    .end local v2    # "str":Ljava/lang/String;
    :goto_1
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mViewRect:Landroid/graphics/RectF;

    add-int/lit8 v3, v0, 0x5

    int-to-float v3, v3

    const/high16 v4, 0x428c0000    # 70.0f

    iget v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mWidth:I

    add-int/lit8 v5, v5, -0xa

    int-to-float v5, v5

    iget v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mHeight:I

    add-int/lit8 v6, v6, -0x14

    int-to-float v6, v6

    invoke-virtual {v2, v3, v4, v5, v6}, Landroid/graphics/RectF;->set(FFFF)V

    .line 599
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mMatrix:Landroid/graphics/Matrix;

    if-nez v2, :cond_5

    .line 600
    new-instance v2, Landroid/graphics/Matrix;

    invoke-direct {v2}, Landroid/graphics/Matrix;-><init>()V

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mMatrix:Landroid/graphics/Matrix;

    .line 601
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->setMatrix()V

    goto :goto_2

    .line 602
    :cond_5
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    iget v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->type:I

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->TYPE_AUTO_SCALE:I

    if-ne v2, v3, :cond_6

    .line 603
    new-instance v2, Landroid/graphics/Matrix;

    invoke-direct {v2}, Landroid/graphics/Matrix;-><init>()V

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mMatrix:Landroid/graphics/Matrix;

    .line 604
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->setMatrix()V

    .line 606
    :cond_6
    :goto_2
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->updateAxisLabel()V

    .line 608
    return-void
.end method

.method private updateAxisLabel()V
    .locals 3

    .line 618
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->set(Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;)V

    .line 619
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->set(Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;)V

    .line 620
    return-void
.end method


# virtual methods
.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 27
    .param p1, "canvas"    # Landroid/graphics/Canvas;

    .line 638
    move-object/from16 v0, p0

    move-object/from16 v7, p1

    invoke-super/range {p0 .. p1}, Landroid/view/View;->onDraw(Landroid/graphics/Canvas;)V

    .line 639
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    if-eqz v1, :cond_1a

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    if-nez v1, :cond_0

    goto/16 :goto_13

    .line 642
    :cond_0
    iget-boolean v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->test:Z

    const/4 v8, 0x0

    if-eqz v1, :cond_1

    .line 643
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->updateAxis()V

    .line 644
    iput-boolean v8, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->test:Z

    .line 646
    :cond_1
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->getWidth()I

    move-result v9

    .line 647
    .local v9, "width":I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->getHeight()I

    move-result v10

    .line 650
    .local v10, "height":I
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mMatrix:Landroid/graphics/Matrix;

    .line 651
    .local v11, "m":Landroid/graphics/Matrix;
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mViewRect:Landroid/graphics/RectF;

    .line 653
    .local v12, "r":Landroid/graphics/RectF;
    const/4 v13, 0x2

    new-array v1, v13, [F

    iget v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXMax:F

    aput v2, v1, v8

    const/4 v14, 0x1

    const/4 v15, 0x0

    aput v15, v1, v14

    move-object v6, v1

    .line 654
    .local v6, "p":[F
    invoke-virtual {v11, v6}, Landroid/graphics/Matrix;->mapPoints([F)V

    .line 655
    aget v1, v6, v8

    int-to-float v2, v9

    cmpg-float v1, v1, v2

    if-gtz v1, :cond_2

    .line 656
    iput-boolean v14, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mAutoScroll:Z

    goto :goto_0

    .line 658
    :cond_2
    iput-boolean v8, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mAutoScroll:Z

    .line 662
    :goto_0
    const/4 v1, -0x1

    invoke-virtual {v7, v1}, Landroid/graphics/Canvas;->drawColor(I)V

    .line 665
    iget v2, v12, Landroid/graphics/RectF;->left:F

    iget v3, v12, Landroid/graphics/RectF;->bottom:F

    iget v4, v12, Landroid/graphics/RectF;->right:F

    iget v5, v12, Landroid/graphics/RectF;->bottom:F

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mBoldPaint:Landroid/graphics/Paint;

    move-object/from16 v16, v1

    move-object/from16 v1, p1

    move-object/from16 v17, v6

    .end local v6    # "p":[F
    .local v17, "p":[F
    move-object/from16 v6, v16

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    .line 668
    iget v2, v12, Landroid/graphics/RectF;->left:F

    iget v3, v12, Landroid/graphics/RectF;->top:F

    iget v4, v12, Landroid/graphics/RectF;->left:F

    iget v5, v12, Landroid/graphics/RectF;->bottom:F

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mBoldPaint:Landroid/graphics/Paint;

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    .line 671
    invoke-virtual/range {p1 .. p1}, Landroid/graphics/Canvas;->save()I

    .line 672
    iget v1, v12, Landroid/graphics/RectF;->left:F

    iget v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mWidth:I

    int-to-float v2, v2

    iget v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mHeight:I

    int-to-float v3, v3

    invoke-virtual {v7, v1, v15, v2, v3}, Landroid/graphics/Canvas;->clipRect(FFFF)Z

    .line 674
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->min:J

    move-wide v5, v1

    .local v5, "x":J
    :goto_1
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->max:J

    cmp-long v1, v5, v1

    const/high16 v16, 0x3f800000    # 1.0f

    if-gtz v1, :cond_4

    .line 675
    new-array v1, v13, [F

    long-to-float v2, v5

    aput v2, v1, v8

    aput v15, v1, v14

    move-object v4, v1

    .line 676
    .end local v17    # "p":[F
    .local v4, "p":[F
    invoke-virtual {v11, v4}, Landroid/graphics/Matrix;->mapPoints([F)V

    .line 677
    aget v1, v4, v8

    iget v2, v12, Landroid/graphics/RectF;->left:F

    sub-float/2addr v1, v2

    invoke-static {v1}, Ljava/lang/Math;->abs(F)F

    move-result v1

    cmpl-float v1, v1, v16

    if-lez v1, :cond_3

    .line 678
    aget v2, v4, v8

    iget v3, v12, Landroid/graphics/RectF;->top:F

    aget v16, v4, v8

    iget v1, v12, Landroid/graphics/RectF;->bottom:F

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mLightPaint:Landroid/graphics/Paint;

    move/from16 v17, v1

    move-object/from16 v1, p1

    move-object/from16 v19, v4

    .end local v4    # "p":[F
    .local v19, "p":[F
    move/from16 v4, v16

    move-wide/from16 v20, v5

    .end local v5    # "x":J
    .local v20, "x":J
    move/from16 v5, v17

    move-object v6, v14

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    goto :goto_2

    .line 677
    .end local v19    # "p":[F
    .end local v20    # "x":J
    .restart local v4    # "p":[F
    .restart local v5    # "x":J
    :cond_3
    move-object/from16 v19, v4

    move-wide/from16 v20, v5

    .line 674
    .end local v4    # "p":[F
    .end local v5    # "x":J
    .restart local v19    # "p":[F
    .restart local v20    # "x":J
    :goto_2
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->step:J

    add-long v5, v20, v1

    move-object/from16 v17, v19

    const/4 v14, 0x1

    .end local v20    # "x":J
    .restart local v5    # "x":J
    goto :goto_1

    .end local v19    # "p":[F
    .restart local v17    # "p":[F
    :cond_4
    move-wide/from16 v20, v5

    .line 693
    .end local v5    # "x":J
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->min:J

    move-wide v5, v1

    .restart local v5    # "x":J
    :goto_3
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->max:J

    cmp-long v1, v5, v1

    const/high16 v14, 0x40a00000    # 5.0f

    if-gtz v1, :cond_5

    .line 694
    new-array v1, v13, [F

    long-to-float v2, v5

    aput v2, v1, v8

    const/4 v2, 0x1

    aput v15, v1, v2

    move-object v4, v1

    .line 695
    .end local v17    # "p":[F
    .restart local v4    # "p":[F
    invoke-virtual {v11, v4}, Landroid/graphics/Matrix;->mapPoints([F)V

    .line 696
    aget v2, v4, v8

    iget v3, v12, Landroid/graphics/RectF;->bottom:F

    aget v17, v4, v8

    iget v1, v12, Landroid/graphics/RectF;->bottom:F

    sub-float v14, v1, v14

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mBoldPaint:Landroid/graphics/Paint;

    move-object/from16 v19, v1

    move-object/from16 v1, p1

    move-object/from16 v20, v4

    .end local v4    # "p":[F
    .local v20, "p":[F
    move/from16 v4, v17

    move-wide/from16 v21, v5

    .end local v5    # "x":J
    .local v21, "x":J
    move v5, v14

    move-object/from16 v6, v19

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    .line 693
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->step:J

    add-long v5, v21, v1

    move-object/from16 v17, v20

    .end local v21    # "x":J
    .restart local v5    # "x":J
    goto :goto_3

    .end local v20    # "p":[F
    .restart local v17    # "p":[F
    :cond_5
    move-wide/from16 v21, v5

    .line 698
    .end local v5    # "x":J
    invoke-virtual/range {p1 .. p1}, Landroid/graphics/Canvas;->restore()V

    .line 700
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->min:J

    .local v1, "x":J
    :goto_4
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    iget-wide v3, v3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->max:J

    cmp-long v3, v1, v3

    const/high16 v6, 0x41200000    # 10.0f

    if-gtz v3, :cond_7

    .line 702
    new-array v3, v13, [F

    long-to-float v4, v1

    aput v4, v3, v8

    const/4 v4, 0x1

    aput v15, v3, v4

    .line 703
    .end local v17    # "p":[F
    .local v3, "p":[F
    invoke-virtual {v11, v3}, Landroid/graphics/Matrix;->mapPoints([F)V

    .line 704
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    iget v4, v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->type:I

    sget v5, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->TYPE_TIME:I

    if-ne v4, v5, :cond_6

    .line 705
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-wide v4, v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->base:J

    add-long/2addr v4, v1

    const-wide/16 v19, 0x3e8

    mul-long v4, v4, v19

    invoke-direct {v0, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->formatTime(J)Ljava/lang/String;

    move-result-object v4

    .line 706
    .local v4, "str":Ljava/lang/String;
    new-instance v5, Landroid/graphics/Rect;

    invoke-direct {v5}, Landroid/graphics/Rect;-><init>()V

    .line 707
    .local v5, "rect":Landroid/graphics/Rect;
    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mTextPaint:Landroid/graphics/Paint;

    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v15

    invoke-virtual {v14, v4, v8, v15, v5}, Landroid/graphics/Paint;->getTextBounds(Ljava/lang/String;IILandroid/graphics/Rect;)V

    .line 708
    aget v14, v3, v8

    invoke-virtual {v5}, Landroid/graphics/Rect;->width()I

    move-result v15

    div-int/2addr v15, v13

    int-to-float v15, v15

    sub-float/2addr v14, v15

    iget v15, v12, Landroid/graphics/RectF;->bottom:F

    add-float/2addr v15, v6

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mTextPaint:Landroid/graphics/Paint;

    invoke-virtual {v7, v4, v14, v15, v6}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    .line 709
    .end local v4    # "str":Ljava/lang/String;
    .end local v5    # "rect":Landroid/graphics/Rect;
    goto :goto_5

    .line 710
    :cond_6
    invoke-static {v1, v2}, Ljava/lang/Long;->toString(J)Ljava/lang/String;

    move-result-object v4

    aget v5, v3, v8

    iget v14, v12, Landroid/graphics/RectF;->bottom:F

    add-float/2addr v14, v6

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mTextPaint:Landroid/graphics/Paint;

    invoke-virtual {v7, v4, v5, v14, v6}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    .line 700
    :goto_5
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    iget-wide v4, v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->step:J

    add-long/2addr v1, v4

    move-object/from16 v17, v3

    const/high16 v14, 0x40a00000    # 5.0f

    const/4 v15, 0x0

    goto :goto_4

    .line 715
    .end local v1    # "x":J
    .end local v3    # "p":[F
    .restart local v17    # "p":[F
    :cond_7
    invoke-virtual/range {p1 .. p1}, Landroid/graphics/Canvas;->save()I

    .line 716
    iget v1, v12, Landroid/graphics/RectF;->top:F

    iget v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mWidth:I

    int-to-float v2, v2

    iget v3, v12, Landroid/graphics/RectF;->bottom:F

    const/4 v4, 0x0

    invoke-virtual {v7, v4, v1, v2, v3}, Landroid/graphics/Canvas;->clipRect(FFFF)Z

    .line 718
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->min:J

    move-wide v14, v1

    .local v14, "y":J
    :goto_6
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->max:J

    cmp-long v1, v14, v1

    if-gtz v1, :cond_b

    .line 719
    new-array v1, v13, [F

    const/4 v2, 0x0

    aput v2, v1, v8

    long-to-float v2, v14

    const/4 v3, 0x1

    aput v2, v1, v3

    move-object v5, v1

    .line 720
    .end local v17    # "p":[F
    .local v5, "p":[F
    invoke-virtual {v11, v5}, Landroid/graphics/Matrix;->mapPoints([F)V

    .line 721
    aget v1, v5, v3

    iget v2, v12, Landroid/graphics/RectF;->bottom:F

    sub-float/2addr v1, v2

    invoke-static {v1}, Ljava/lang/Math;->abs(F)F

    move-result v1

    cmpl-float v1, v1, v16

    if-lez v1, :cond_8

    .line 722
    iget v2, v12, Landroid/graphics/RectF;->left:F

    aget v4, v5, v3

    iget v1, v12, Landroid/graphics/RectF;->right:F

    aget v17, v5, v3

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mLightPaint:Landroid/graphics/Paint;

    move/from16 v21, v1

    move-object/from16 v1, p1

    move-object/from16 v22, v3

    move v3, v4

    move/from16 v4, v21

    move-object/from16 v21, v5

    .end local v5    # "p":[F
    .local v21, "p":[F
    move/from16 v5, v17

    move-object/from16 v6, v22

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    goto :goto_7

    .line 721
    .end local v21    # "p":[F
    .restart local v5    # "p":[F
    :cond_8
    move-object/from16 v21, v5

    .line 725
    .end local v5    # "p":[F
    .restart local v21    # "p":[F
    :goto_7
    const-string v1, ""

    .line 726
    .local v1, "text":Ljava/lang/String;
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    iget-object v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->customLabel:Ljava/util/HashMap;

    if-eqz v2, :cond_9

    .line 727
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    iget-object v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->customLabel:Ljava/util/HashMap;

    long-to-int v3, v14

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    move-object v1, v2

    check-cast v1, Ljava/lang/String;

    .line 728
    if-nez v1, :cond_a

    .line 729
    const-string v1, ""

    goto :goto_8

    .line 732
    :cond_9
    invoke-static {v14, v15}, Ljava/lang/Long;->toString(J)Ljava/lang/String;

    move-result-object v1

    .line 734
    :cond_a
    :goto_8
    const/4 v2, 0x1

    aget v3, v21, v2

    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mTextPaint:Landroid/graphics/Paint;

    const/high16 v4, 0x40a00000    # 5.0f

    invoke-virtual {v7, v1, v4, v3, v2}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    .line 718
    .end local v1    # "text":Ljava/lang/String;
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->step:J

    add-long/2addr v14, v1

    move-object/from16 v17, v21

    const/high16 v6, 0x41200000    # 10.0f

    goto :goto_6

    .line 737
    .end local v14    # "y":J
    .end local v21    # "p":[F
    .restart local v17    # "p":[F
    :cond_b
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    iget v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->type:I

    sget v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->TYPE_AUTO_SCALE:I

    if-ne v1, v2, :cond_c

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->step:J

    const-wide/16 v3, 0x5

    div-long/2addr v1, v3

    goto :goto_9

    .line 738
    :cond_c
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->step:J

    :goto_9
    move-wide v14, v1

    .line 739
    .local v14, "step":J
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->min:J

    move-wide v5, v1

    .local v5, "y":J
    :goto_a
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->max:J

    cmp-long v1, v5, v1

    if-gtz v1, :cond_d

    .line 740
    new-array v1, v13, [F

    const/4 v2, 0x0

    aput v2, v1, v8

    long-to-float v2, v5

    const/4 v3, 0x1

    aput v2, v1, v3

    move-object v4, v1

    .line 741
    .end local v17    # "p":[F
    .local v4, "p":[F
    invoke-virtual {v11, v4}, Landroid/graphics/Matrix;->mapPoints([F)V

    .line 742
    iget v2, v12, Landroid/graphics/RectF;->left:F

    aget v16, v4, v3

    iget v1, v12, Landroid/graphics/RectF;->left:F

    const/high16 v17, 0x40a00000    # 5.0f

    add-float v21, v1, v17

    aget v17, v4, v3

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mBoldPaint:Landroid/graphics/Paint;

    move-object/from16 v1, p1

    move-object/from16 v22, v3

    move/from16 v3, v16

    move-object/from16 v16, v4

    .end local v4    # "p":[F
    .local v16, "p":[F
    move/from16 v4, v21

    move-wide/from16 v24, v5

    .end local v5    # "y":J
    .local v24, "y":J
    move/from16 v5, v17

    move-object/from16 v6, v22

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    .line 739
    add-long v5, v24, v14

    move-object/from16 v17, v16

    .end local v24    # "y":J
    .restart local v5    # "y":J
    goto :goto_a

    .end local v16    # "p":[F
    .restart local v17    # "p":[F
    :cond_d
    move-wide/from16 v24, v5

    .line 744
    .end local v5    # "y":J
    invoke-virtual/range {p1 .. p1}, Landroid/graphics/Canvas;->restore()V

    .line 746
    new-instance v1, Landroid/graphics/RectF;

    iget v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mWidth:I

    int-to-float v2, v2

    const/high16 v3, 0x42a00000    # 80.0f

    const/high16 v4, 0x41200000    # 10.0f

    invoke-direct {v1, v4, v4, v2, v3}, Landroid/graphics/RectF;-><init>(FFFF)V

    invoke-direct {v0, v7, v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->drawSeries(Landroid/graphics/Canvas;Landroid/graphics/RectF;)V

    .line 748
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mData:Ljava/util/ArrayList;

    if-eqz v1, :cond_19

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    const/4 v2, 0x1

    if-ge v1, v2, :cond_e

    move/from16 v22, v9

    move/from16 v25, v10

    move-object/from16 v18, v11

    goto/16 :goto_12

    .line 753
    :cond_e
    invoke-virtual/range {p1 .. p1}, Landroid/graphics/Canvas;->save()I

    .line 754
    iget v1, v12, Landroid/graphics/RectF;->left:F

    iget v2, v12, Landroid/graphics/RectF;->top:F

    iget v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mWidth:I

    int-to-float v3, v3

    iget v4, v12, Landroid/graphics/RectF;->bottom:F

    invoke-virtual {v7, v1, v2, v3, v4}, Landroid/graphics/Canvas;->clipRect(FFFF)Z

    .line 755
    const/4 v1, 0x0

    move v8, v1

    .local v8, "i":I
    :goto_b
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mData:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-ge v8, v1, :cond_18

    .line 756
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mData:Ljava/util/ArrayList;

    invoke-virtual {v1, v8}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    move-object v6, v1

    check-cast v6, [F

    .line 757
    .local v6, "data":[F
    if-nez v6, :cond_f

    .line 758
    move/from16 v22, v9

    move/from16 v25, v10

    move-object/from16 v18, v11

    move/from16 v19, v13

    const/high16 v9, 0x40a00000    # 5.0f

    const/16 v16, 0x1

    const/16 v20, 0x0

    goto/16 :goto_11

    .line 760
    :cond_f
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v2, v8}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    iget v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->color:I

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setColor(I)V

    .line 761
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v2, v8}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    iget v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineWidth:I

    int-to-float v2, v2

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    .line 762
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v1, v8}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    iget-object v5, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->name:Ljava/lang/String;

    .line 763
    .local v5, "name":Ljava/lang/String;
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v1, v8}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "("

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v3, v6

    const/16 v16, 0x1

    add-int/lit8 v3, v3, -0x1

    aget v3, v6, v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    const-string v3, ")"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "\\([0-9]+\\.[0-9]+\\)"

    invoke-virtual {v5, v3, v2}, Ljava/lang/String;->replaceAll(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->name:Ljava/lang/String;

    .line 766
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v1, v8}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    iget v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->lineType:I

    sget v2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->LINE_DASH:I

    if-ne v1, v2, :cond_10

    .line 767
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    new-instance v2, Landroid/graphics/DashPathEffect;

    new-array v3, v13, [F

    fill-array-data v3, :array_0

    const/4 v4, 0x0

    invoke-direct {v2, v3, v4}, Landroid/graphics/DashPathEffect;-><init>([FF)V

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setPathEffect(Landroid/graphics/PathEffect;)Landroid/graphics/PathEffect;

    goto :goto_c

    .line 769
    :cond_10
    const/4 v4, 0x0

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setPathEffect(Landroid/graphics/PathEffect;)Landroid/graphics/PathEffect;

    .line 771
    :goto_c
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v1, v8}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    iget v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->nodeType:I

    .line 773
    .local v3, "nodeType":I
    array-length v1, v6

    new-array v2, v1, [F

    .line 774
    .local v2, "tmp":[F
    invoke-virtual {v11, v2, v6}, Landroid/graphics/Matrix;->mapPoints([F[F)V

    .line 776
    const/4 v1, 0x0

    .local v1, "j":I
    :goto_d
    array-length v4, v2

    if-ge v1, v4, :cond_13

    .line 777
    sget v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CIRCLE:I

    if-ne v3, v4, :cond_11

    .line 778
    aget v4, v2, v1

    add-int/lit8 v18, v1, 0x1

    aget v13, v2, v18

    move-object/from16 v18, v5

    .end local v5    # "name":Ljava/lang/String;
    .local v18, "name":Ljava/lang/String;
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    move/from16 v22, v9

    const/high16 v9, 0x40a00000    # 5.0f

    .end local v9    # "width":I
    .local v22, "width":I
    invoke-virtual {v7, v4, v13, v9, v5}, Landroid/graphics/Canvas;->drawCircle(FFFLandroid/graphics/Paint;)V

    move/from16 v24, v1

    move/from16 v26, v3

    move/from16 v25, v10

    move-object/from16 v13, v18

    const/16 v20, 0x0

    move-object v10, v2

    move-object/from16 v18, v11

    move-object v11, v6

    goto/16 :goto_e

    .line 779
    .end local v18    # "name":Ljava/lang/String;
    .end local v22    # "width":I
    .restart local v5    # "name":Ljava/lang/String;
    .restart local v9    # "width":I
    :cond_11
    move-object/from16 v18, v5

    move/from16 v22, v9

    const/high16 v9, 0x40a00000    # 5.0f

    .end local v5    # "name":Ljava/lang/String;
    .end local v9    # "width":I
    .restart local v18    # "name":Ljava/lang/String;
    .restart local v22    # "width":I
    sget v4, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CROSS:I

    if-ne v3, v4, :cond_12

    .line 780
    aget v4, v2, v1

    sub-float/2addr v4, v9

    add-int/lit8 v5, v1, 0x1

    aget v5, v2, v5

    sub-float/2addr v5, v9

    aget v13, v2, v1

    add-float/2addr v13, v9

    add-int/lit8 v19, v1, 0x1

    aget v19, v2, v19

    add-float v19, v19, v9

    iget-object v9, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    move/from16 v24, v1

    .end local v1    # "j":I
    .local v24, "j":I
    move-object/from16 v1, p1

    move/from16 v25, v10

    move-object v10, v2

    .end local v2    # "tmp":[F
    .local v10, "tmp":[F
    .local v25, "height":I
    move v2, v4

    move/from16 v26, v3

    .end local v3    # "nodeType":I
    .local v26, "nodeType":I
    move v3, v5

    const/16 v20, 0x0

    move v4, v13

    move-object/from16 v13, v18

    .end local v18    # "name":Ljava/lang/String;
    .local v13, "name":Ljava/lang/String;
    move/from16 v5, v19

    move-object/from16 v18, v11

    move-object v11, v6

    .end local v6    # "data":[F
    .local v11, "data":[F
    .local v18, "m":Landroid/graphics/Matrix;
    move-object v6, v9

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    .line 781
    aget v1, v10, v24

    const/high16 v9, 0x40a00000    # 5.0f

    add-float v2, v1, v9

    add-int/lit8 v1, v24, 0x1

    aget v1, v10, v1

    sub-float v3, v1, v9

    aget v1, v10, v24

    sub-float v4, v1, v9

    add-int/lit8 v1, v24, 0x1

    aget v1, v10, v1

    add-float v5, v1, v9

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    move-object/from16 v1, p1

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    goto :goto_e

    .line 779
    .end local v13    # "name":Ljava/lang/String;
    .end local v24    # "j":I
    .end local v25    # "height":I
    .end local v26    # "nodeType":I
    .restart local v1    # "j":I
    .restart local v2    # "tmp":[F
    .restart local v3    # "nodeType":I
    .restart local v6    # "data":[F
    .local v10, "height":I
    .local v11, "m":Landroid/graphics/Matrix;
    .local v18, "name":Ljava/lang/String;
    :cond_12
    move/from16 v24, v1

    move/from16 v26, v3

    move/from16 v25, v10

    move-object/from16 v13, v18

    const/16 v20, 0x0

    move-object v10, v2

    move-object/from16 v18, v11

    move-object v11, v6

    .line 776
    .end local v1    # "j":I
    .end local v2    # "tmp":[F
    .end local v3    # "nodeType":I
    .end local v6    # "data":[F
    .local v10, "tmp":[F
    .local v11, "data":[F
    .restart local v13    # "name":Ljava/lang/String;
    .local v18, "m":Landroid/graphics/Matrix;
    .restart local v24    # "j":I
    .restart local v25    # "height":I
    .restart local v26    # "nodeType":I
    :goto_e
    add-int/lit8 v1, v24, 0x2

    move-object v2, v10

    move-object v6, v11

    move-object v5, v13

    move-object/from16 v11, v18

    move/from16 v4, v20

    move/from16 v9, v22

    move/from16 v10, v25

    move/from16 v3, v26

    const/4 v13, 0x2

    .end local v24    # "j":I
    .restart local v1    # "j":I
    goto/16 :goto_d

    .end local v13    # "name":Ljava/lang/String;
    .end local v18    # "m":Landroid/graphics/Matrix;
    .end local v22    # "width":I
    .end local v25    # "height":I
    .end local v26    # "nodeType":I
    .restart local v2    # "tmp":[F
    .restart local v3    # "nodeType":I
    .restart local v5    # "name":Ljava/lang/String;
    .restart local v6    # "data":[F
    .restart local v9    # "width":I
    .local v10, "height":I
    .local v11, "m":Landroid/graphics/Matrix;
    :cond_13
    move/from16 v24, v1

    move/from16 v26, v3

    move-object v13, v5

    move/from16 v22, v9

    move/from16 v25, v10

    move-object/from16 v18, v11

    const/high16 v9, 0x40a00000    # 5.0f

    const/16 v20, 0x0

    move-object v10, v2

    move-object v11, v6

    .line 786
    .end local v1    # "j":I
    .end local v2    # "tmp":[F
    .end local v3    # "nodeType":I
    .end local v5    # "name":Ljava/lang/String;
    .end local v6    # "data":[F
    .end local v9    # "width":I
    .local v10, "tmp":[F
    .local v11, "data":[F
    .restart local v13    # "name":Ljava/lang/String;
    .restart local v18    # "m":Landroid/graphics/Matrix;
    .restart local v22    # "width":I
    .restart local v25    # "height":I
    .restart local v26    # "nodeType":I
    array-length v1, v11

    const/4 v2, 0x2

    if-le v1, v2, :cond_17

    .line 787
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v1, v8}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    iget v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->newLineThreadshold:I

    if-nez v1, :cond_14

    .line 788
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {v7, v10, v1}, Landroid/graphics/Canvas;->drawLines([FLandroid/graphics/Paint;)V

    .line 789
    array-length v1, v10

    const/4 v6, 0x2

    sub-int/2addr v1, v6

    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {v7, v10, v6, v1, v2}, Landroid/graphics/Canvas;->drawLines([FIILandroid/graphics/Paint;)V

    move/from16 v19, v6

    goto :goto_11

    .line 791
    :cond_14
    const/4 v6, 0x2

    const/4 v1, 0x0

    move v5, v1

    .local v5, "j":I
    :goto_f
    array-length v1, v11

    sub-int/2addr v1, v6

    if-ge v5, v1, :cond_16

    .line 792
    add-int/lit8 v1, v5, 0x2

    aget v1, v11, v1

    aget v2, v11, v5

    sub-float/2addr v1, v2

    invoke-static {v1}, Ljava/lang/Math;->abs(F)F

    move-result v1

    const/high16 v2, 0x41300000    # 11.0f

    cmpg-float v1, v1, v2

    if-gez v1, :cond_15

    .line 793
    aget v2, v10, v5

    add-int/lit8 v1, v5, 0x1

    aget v3, v10, v1

    add-int/lit8 v1, v5, 0x2

    aget v4, v10, v1

    add-int/lit8 v1, v5, 0x3

    aget v19, v10, v1

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mPaint:Landroid/graphics/Paint;

    move-object/from16 v21, v1

    move-object/from16 v1, p1

    move/from16 v23, v5

    .end local v5    # "j":I
    .local v23, "j":I
    move/from16 v5, v19

    move/from16 v19, v6

    move-object/from16 v6, v21

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    goto :goto_10

    .line 792
    .end local v23    # "j":I
    .restart local v5    # "j":I
    :cond_15
    move/from16 v23, v5

    move/from16 v19, v6

    .line 791
    .end local v5    # "j":I
    .restart local v23    # "j":I
    :goto_10
    add-int/lit8 v5, v23, 0x2

    move/from16 v6, v19

    .end local v23    # "j":I
    .restart local v5    # "j":I
    goto :goto_f

    :cond_16
    move/from16 v23, v5

    move/from16 v19, v6

    .end local v5    # "j":I
    .restart local v23    # "j":I
    goto :goto_11

    .line 786
    .end local v23    # "j":I
    :cond_17
    move/from16 v19, v2

    .line 755
    .end local v10    # "tmp":[F
    .end local v11    # "data":[F
    .end local v13    # "name":Ljava/lang/String;
    .end local v26    # "nodeType":I
    :goto_11
    add-int/lit8 v8, v8, 0x1

    move-object/from16 v11, v18

    move/from16 v13, v19

    move/from16 v9, v22

    move/from16 v10, v25

    goto/16 :goto_b

    .line 799
    .end local v8    # "i":I
    .end local v18    # "m":Landroid/graphics/Matrix;
    .end local v22    # "width":I
    .end local v25    # "height":I
    .restart local v9    # "width":I
    .local v10, "height":I
    .local v11, "m":Landroid/graphics/Matrix;
    :cond_18
    invoke-virtual/range {p1 .. p1}, Landroid/graphics/Canvas;->restore()V

    .line 800
    return-void

    .line 748
    :cond_19
    move/from16 v22, v9

    move/from16 v25, v10

    move-object/from16 v18, v11

    .line 749
    .end local v9    # "width":I
    .end local v10    # "height":I
    .end local v11    # "m":Landroid/graphics/Matrix;
    .restart local v18    # "m":Landroid/graphics/Matrix;
    .restart local v22    # "width":I
    .restart local v25    # "height":I
    :goto_12
    return-void

    .line 640
    .end local v12    # "r":Landroid/graphics/RectF;
    .end local v14    # "step":J
    .end local v17    # "p":[F
    .end local v18    # "m":Landroid/graphics/Matrix;
    .end local v22    # "width":I
    .end local v25    # "height":I
    :cond_1a
    :goto_13
    return-void

    nop

    :array_0
    .array-data 4
        0x40800000    # 4.0f
        0x40000000    # 2.0f
    .end array-data
.end method

.method protected onMeasure(II)V
    .locals 1
    .param p1, "widthSpec"    # I
    .param p2, "heightSpec"    # I

    .line 624
    invoke-super {p0, p1, p2}, Landroid/view/View;->onMeasure(II)V

    .line 625
    invoke-static {p1}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mWidth:I

    .line 626
    invoke-static {p2}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mHeight:I

    .line 627
    return-void
.end method

.method public onTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 1
    .param p1, "event"    # Landroid/view/MotionEvent;

    .line 631
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mGestureDetector:Landroid/view/GestureDetector;

    invoke-virtual {v0, p1}, Landroid/view/GestureDetector;->onTouchEvent(Landroid/view/MotionEvent;)Z

    .line 632
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mScaleDetector:Landroid/view/ScaleGestureDetector;

    invoke-virtual {v0, p1}, Landroid/view/ScaleGestureDetector;->onTouchEvent(Landroid/view/MotionEvent;)Z

    .line 633
    const/4 v0, 0x1

    return v0
.end method

.method public setAxisConfig(Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;)V
    .locals 1
    .param p1, "xConfig"    # Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
    .param p2, "yConfig"    # Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    .line 401
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mXAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    .line 402
    iput-object p2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    .line 403
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->test:Z

    .line 404
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->invalidate()V

    .line 405
    return-void
.end method

.method public setConfig([Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;)V
    .locals 3
    .param p1, "configs"    # [Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;

    .line 423
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mConfigs:Ljava/util/ArrayList;

    .line 424
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    array-length v1, p1

    if-ge v0, v1, :cond_0

    .line 425
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mConfigs:Ljava/util/ArrayList;

    aget-object v2, p1, v0

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 424
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 427
    .end local v0    # "i":I
    :cond_0
    return-void
.end method

.method public setData(I[F)V
    .locals 3
    .param p1, "index"    # I
    .param p2, "data"    # [F

    .line 506
    if-eqz p2, :cond_6

    array-length v0, p2

    const/4 v1, 0x1

    if-gt v0, v1, :cond_0

    goto :goto_2

    .line 509
    :cond_0
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mWidth:I

    if-eqz v0, :cond_5

    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mHeight:I

    if-nez v0, :cond_1

    goto :goto_1

    .line 512
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mData:Ljava/util/ArrayList;

    if-nez v0, :cond_2

    .line 513
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mData:Ljava/util/ArrayList;

    .line 514
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 515
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mData:Ljava/util/ArrayList;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 514
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 522
    .end local v0    # "i":I
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mData:Ljava/util/ArrayList;

    invoke-virtual {v0, p1, p2}, Ljava/util/ArrayList;->set(ILjava/lang/Object;)Ljava/lang/Object;

    .line 523
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->checkData()V

    .line 524
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->updateAxis()V

    .line 526
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mAutoScroll:Z

    if-eqz v0, :cond_3

    .line 527
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->makeLastVisible()V

    .line 529
    :cond_3
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->mScaling:Z

    if-nez v0, :cond_4

    .line 530
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->invalidate()V

    .line 532
    :cond_4
    return-void

    .line 510
    :cond_5
    :goto_1
    return-void

    .line 507
    :cond_6
    :goto_2
    return-void
.end method
