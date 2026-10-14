.class public Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;
.super Landroid/view/View;
.source "CurveViewEx.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;,
        Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;,
        Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;,
        Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;,
        Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;
    }
.end annotation


# static fields
.field private static final BOTTOM_GAP:I = 0x14

.field private static final COMPONENT_RSRPSINR_CONFIG_SHAREPRE:Ljava/lang/String; = "telephony_rsrpsinr_config_settings"

.field private static final FONT_SIZE:I = 0x12

.field private static final LEFT_GAP:I = 0x5

.field private static final LINE_LENGTH:I = 0x5

.field private static final MAX_COUNT:I = 0x14

.field private static final MEDIUMWEAK_POINT1_X_DEFAULT:I = -0x8c

.field private static final MEDIUMWEAK_POINT1_Y_DEFAULT:I = 0xa

.field private static final MEDIUMWEAK_POINT2_X_DEFAULT:I = -0x5a

.field private static final MEDIUMWEAK_POINT2_Y_DEFAULT:I = 0xa

.field private static final MEDIUMWEAK_POINT3_X_DEFAULT:I = -0x5a

.field private static final MEDIUMWEAK_POINT3_Y_DEFAULT:I = -0x14

.field private static final RIGHT_GAP:I = 0xa

.field private static final STRONG_POINT1_X_DEFAULT:I = -0x50

.field private static final STRONG_POINT1_Y_DEFAULT:I = 0x1e

.field private static final STRONG_POINT2_X_DEFAULT:I = -0x50

.field private static final STRONG_POINT2_Y_DEFAULT:I = 0x14

.field private static final STRONG_POINT3_X_DEFAULT:I = -0x1e

.field private static final STRONG_POINT3_Y_DEFAULT:I = 0x14

.field private static final TAG:Ljava/lang/String; = "EmInfo/CurveViewEx"

.field private static final TEXT_OFFSET_X:I = 0x10

.field private static final TEXT_OFFSET_Y:I = 0x10

.field private static final TOP_GAP:I = 0x46

.field private static final WEAK_POINT1_X_DEFAULT:I = -0x8c

.field private static final WEAK_POINT1_Y_DEFAULT:I = 0x5

.field private static final WEAK_POINT2_X_DEFAULT:I = -0x64

.field private static final WEAK_POINT2_Y_DEFAULT:I = 0x5

.field private static final WEAK_POINT3_X_DEFAULT:I = -0x64

.field private static final WEAK_POINT3_Y_DEFAULT:I = -0x14

.field private static mediumWeakPoint1X:I

.field private static mediumWeakPoint1Y:I

.field private static mediumWeakPoint2X:I

.field private static mediumWeakPoint2Y:I

.field private static mediumWeakPoint3X:I

.field private static mediumWeakPoint3Y:I

.field private static strongPoint1X:I

.field private static strongPoint1Y:I

.field private static strongPoint2X:I

.field private static strongPoint2Y:I

.field private static strongPoint3X:I

.field private static strongPoint3Y:I

.field private static weakPoint1X:I

.field private static weakPoint1Y:I

.field private static weakPoint2X:I

.field private static weakPoint2Y:I

.field private static weakPoint3X:I

.field private static weakPoint3Y:I


# instance fields
.field private mAutoScroll:Z

.field private mBoldPaint:Landroid/graphics/Paint;

.field private mConfigs:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;",
            ">;"
        }
    .end annotation
.end field

.field mContext:Landroid/content/Context;

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

.field private mMediumWeakEndX:I

.field private mMediumWeakEndY:I

.field private mMediumWeakStartX:I

.field private mMediumWeakStartY:I

.field private mOffsetY:I

.field private mPaint:Landroid/graphics/Paint;

.field private mRegionColor:[I

.field private mRegionPaint:Landroid/graphics/Paint;

.field private mScaleDetector:Landroid/view/ScaleGestureDetector;

.field private mScaling:Z

.field private mStrongX:I

.field private mStrongY:I

.field private mTextPaint:Landroid/graphics/Paint;

.field private mTextPaint2:Landroid/graphics/Paint;

.field private mViewRect:Landroid/graphics/RectF;

.field private mWeakEndX:I

.field private mWeakEndY:I

.field private mWeakStartX:I

.field private mWeakStartY:I

.field private mWidth:I

.field mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

.field mXAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

.field mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

.field mXMax:F

.field mXMin:F

.field mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

.field mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

.field mYAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

.field mYMax:F

.field mYMin:F

.field test:Z


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 96
    const/16 v0, -0x50

    sput v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->strongPoint1X:I

    .line 97
    const/16 v1, 0x1e

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->strongPoint1Y:I

    .line 98
    sput v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->strongPoint2X:I

    .line 99
    const/16 v0, 0x14

    sput v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->strongPoint2Y:I

    .line 100
    const/16 v1, -0x1e

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->strongPoint3X:I

    .line 101
    sput v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->strongPoint3Y:I

    .line 102
    const/16 v0, -0x8c

    sput v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mediumWeakPoint1X:I

    .line 103
    const/16 v1, 0xa

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mediumWeakPoint1Y:I

    .line 104
    const/16 v2, -0x5a

    sput v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mediumWeakPoint2X:I

    .line 105
    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mediumWeakPoint2Y:I

    .line 106
    sput v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mediumWeakPoint3X:I

    .line 107
    const/16 v1, -0x14

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mediumWeakPoint3Y:I

    .line 108
    sput v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->weakPoint1X:I

    .line 109
    const/4 v0, 0x5

    sput v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->weakPoint1Y:I

    .line 110
    const/16 v2, -0x64

    sput v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->weakPoint2X:I

    .line 111
    sput v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->weakPoint2Y:I

    .line 112
    sput v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->weakPoint3X:I

    .line 113
    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->weakPoint3Y:I

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 6
    .param p1, "context"    # Landroid/content/Context;

    .line 453
    invoke-direct {p0, p1}, Landroid/view/View;-><init>(Landroid/content/Context;)V

    .line 73
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    .line 335
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    .line 336
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    .line 354
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    .line 355
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    .line 376
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    .line 377
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    .line 379
    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->test:Z

    .line 413
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mData:Ljava/util/ArrayList;

    .line 415
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXMin:F

    .line 416
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYMin:F

    .line 417
    const/high16 v2, -0x3e100000    # -30.0f

    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXMax:F

    .line 418
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYMax:F

    .line 419
    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mWidth:I

    .line 420
    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mHeight:I

    .line 424
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mAutoScroll:Z

    .line 425
    new-instance v2, Landroid/graphics/RectF;

    invoke-direct {v2}, Landroid/graphics/RectF;-><init>()V

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mViewRect:Landroid/graphics/RectF;

    .line 432
    const/4 v2, 0x3

    new-array v2, v2, [I

    const/16 v3, 0x2b

    const/16 v4, 0x65

    const/16 v5, 0xab

    invoke-static {v3, v4, v5}, Landroid/graphics/Color;->rgb(III)I

    move-result v3

    aput v3, v2, v1

    .line 433
    const/16 v3, 0xcc

    const/16 v4, 0x99

    invoke-static {v3, v4, v1}, Landroid/graphics/Color;->rgb(III)I

    move-result v1

    aput v1, v2, v0

    const/16 v0, 0x98

    const/16 v1, 0xba

    invoke-static {v0, v0, v1}, Landroid/graphics/Color;->rgb(III)I

    move-result v0

    const/4 v1, 0x2

    aput v0, v2, v1

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mRegionColor:[I

    .line 435
    const/16 v0, 0x64

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mOffsetY:I

    .line 436
    const/16 v0, -0x50

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mStrongX:I

    .line 437
    const/16 v0, 0x14

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mStrongY:I

    .line 438
    const/16 v0, -0x8c

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mMediumWeakStartX:I

    .line 439
    const/16 v1, -0x5a

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mMediumWeakEndX:I

    .line 440
    const/16 v1, -0x14

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mMediumWeakStartY:I

    .line 441
    const/16 v2, 0xa

    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mMediumWeakEndY:I

    .line 442
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mWeakStartX:I

    .line 443
    const/16 v0, -0x64

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mWeakEndX:I

    .line 444
    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mWeakStartY:I

    .line 445
    const/4 v0, 0x5

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mWeakEndY:I

    .line 454
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->init(Landroid/content/Context;)V

    .line 455
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    .line 456
    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 6
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "attrs"    # Landroid/util/AttributeSet;

    .line 467
    invoke-direct {p0, p1, p2}, Landroid/view/View;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    .line 73
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    .line 335
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    .line 336
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    .line 354
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    .line 355
    new-instance v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    .line 376
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    .line 377
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    .line 379
    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->test:Z

    .line 413
    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mData:Ljava/util/ArrayList;

    .line 415
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXMin:F

    .line 416
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYMin:F

    .line 417
    const/high16 v2, -0x3e100000    # -30.0f

    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXMax:F

    .line 418
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYMax:F

    .line 419
    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mWidth:I

    .line 420
    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mHeight:I

    .line 424
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mAutoScroll:Z

    .line 425
    new-instance v2, Landroid/graphics/RectF;

    invoke-direct {v2}, Landroid/graphics/RectF;-><init>()V

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mViewRect:Landroid/graphics/RectF;

    .line 432
    const/4 v2, 0x3

    new-array v2, v2, [I

    const/16 v3, 0x2b

    const/16 v4, 0x65

    const/16 v5, 0xab

    invoke-static {v3, v4, v5}, Landroid/graphics/Color;->rgb(III)I

    move-result v3

    aput v3, v2, v1

    .line 433
    const/16 v3, 0xcc

    const/16 v4, 0x99

    invoke-static {v3, v4, v1}, Landroid/graphics/Color;->rgb(III)I

    move-result v1

    aput v1, v2, v0

    const/16 v0, 0x98

    const/16 v1, 0xba

    invoke-static {v0, v0, v1}, Landroid/graphics/Color;->rgb(III)I

    move-result v0

    const/4 v1, 0x2

    aput v0, v2, v1

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mRegionColor:[I

    .line 435
    const/16 v0, 0x64

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mOffsetY:I

    .line 436
    const/16 v0, -0x50

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mStrongX:I

    .line 437
    const/16 v0, 0x14

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mStrongY:I

    .line 438
    const/16 v0, -0x8c

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mMediumWeakStartX:I

    .line 439
    const/16 v1, -0x5a

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mMediumWeakEndX:I

    .line 440
    const/16 v1, -0x14

    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mMediumWeakStartY:I

    .line 441
    const/16 v2, 0xa

    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mMediumWeakEndY:I

    .line 442
    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mWeakStartX:I

    .line 443
    const/16 v0, -0x64

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mWeakEndX:I

    .line 444
    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mWeakStartY:I

    .line 445
    const/4 v0, 0x5

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mWeakEndY:I

    .line 468
    invoke-direct {p0, p1}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->init(Landroid/content/Context;)V

    .line 469
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    .line 470
    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/Matrix;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    .line 69
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mMatrix:Landroid/graphics/Matrix;

    return-object v0
.end method

.method static synthetic access$100(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Z
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    .line 69
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mScaling:Z

    return v0
.end method

.method static synthetic access$102(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;Z)Z
    .locals 0
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;
    .param p1, "x1"    # Z

    .line 69
    iput-boolean p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mScaling:Z

    return p1
.end method

.method static synthetic access$200(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/RectF;
    .locals 1
    .param p0, "x0"    # Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    .line 69
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mViewRect:Landroid/graphics/RectF;

    return-object v0
.end method

.method private checkData()V
    .locals 6

    .line 548
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mData:Ljava/util/ArrayList;

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
    const/4 v2, 0x0

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
    iget v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXMin:F

    cmpg-float v5, v3, v5

    if-gez v5, :cond_1

    .line 556
    iput v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXMin:F

    .line 558
    :cond_1
    iget v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYMin:F

    cmpg-float v5, v4, v5

    if-gez v5, :cond_2

    .line 559
    iput v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYMin:F

    .line 561
    :cond_2
    iget v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXMax:F

    cmpl-float v5, v3, v5

    if-lez v5, :cond_3

    .line 562
    iput v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXMax:F

    .line 564
    :cond_3
    iget v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYMax:F

    cmpl-float v5, v4, v5

    if-lez v5, :cond_4

    .line 565
    iput v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYMax:F

    .line 552
    .end local v3    # "x":F
    .end local v4    # "y":F
    :cond_4
    add-int/lit8 v2, v2, 0x4

    goto :goto_1

    .line 568
    .end local v1    # "data":[F
    .end local v2    # "i":I
    :cond_5
    goto :goto_0

    .line 569
    :cond_6
    return-void
.end method

.method private drawSeries(Landroid/graphics/Canvas;Landroid/graphics/RectF;)V
    .locals 13
    .param p1, "canvas"    # Landroid/graphics/Canvas;
    .param p2, "rect"    # Landroid/graphics/RectF;

    .line 819
    invoke-virtual {p1}, Landroid/graphics/Canvas;->save()I

    .line 820
    invoke-virtual {p1, p2}, Landroid/graphics/Canvas;->clipRect(Landroid/graphics/RectF;)Z

    .line 834
    const/4 v0, 0x2

    new-array v0, v0, [F

    .line 835
    .local v0, "p":[F
    iget v1, p2, Landroid/graphics/RectF;->left:F

    const/4 v2, 0x0

    aput v1, v0, v2

    .line 836
    iget v1, p2, Landroid/graphics/RectF;->top:F

    iget v3, p2, Landroid/graphics/RectF;->bottom:F

    add-float/2addr v1, v3

    const/high16 v3, 0x40000000    # 2.0f

    div-float/2addr v1, v3

    const/high16 v3, 0x41e00000    # 28.0f

    sub-float/2addr v1, v3

    const/4 v3, 0x1

    aput v1, v0, v3

    .line 838
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mPaint:Landroid/graphics/Paint;

    sget-object v4, Landroid/graphics/Paint$Style;->FILL:Landroid/graphics/Paint$Style;

    invoke-virtual {v1, v4}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 839
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v4}, Ljava/util/ArrayList;->size()I

    move-result v4

    if-ge v1, v4, :cond_9

    .line 840
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "[CurveViewEx] drawSeries i "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "EmInfo/CurveViewEx"

    invoke-static {v5, v4}, Lcom/mediatek/engineermode/Elog;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 841
    aget v4, v0, v2

    const/high16 v5, 0x41200000    # 10.0f

    add-float/2addr v4, v5

    aput v4, v0, v2

    .line 842
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mPaint:Landroid/graphics/Paint;

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v5, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;

    iget v5, v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->color:I

    invoke-virtual {v4, v5}, Landroid/graphics/Paint;->setColor(I)V

    .line 843
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mPaint:Landroid/graphics/Paint;

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v5, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;

    iget v5, v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->lineWidth:I

    int-to-float v5, v5

    invoke-virtual {v4, v5}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    .line 844
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mPaint:Landroid/graphics/Paint;

    const/4 v5, 0x0

    invoke-virtual {v4, v5}, Landroid/graphics/Paint;->setPathEffect(Landroid/graphics/PathEffect;)Landroid/graphics/PathEffect;

    .line 846
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v4, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;

    iget v4, v4, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->nodeType:I

    .line 847
    .local v4, "nodeType":I
    sget v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_NONE:I

    if-ne v4, v5, :cond_0

    .line 848
    aget v7, v0, v2

    aget v8, v0, v3

    aget v5, v0, v2

    const/high16 v6, 0x42c80000    # 100.0f

    add-float v9, v5, v6

    aget v10, v0, v3

    iget-object v11, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mPaint:Landroid/graphics/Paint;

    move-object v6, p1

    invoke-virtual/range {v6 .. v11}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    .line 851
    :cond_0
    aget v5, v0, v2

    const/high16 v6, 0x42480000    # 50.0f

    add-float/2addr v5, v6

    aput v5, v0, v2

    .line 852
    sget v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_CIRCLE:I

    const/high16 v6, 0x40a00000    # 5.0f

    if-ne v4, v5, :cond_1

    .line 853
    aget v5, v0, v2

    aget v7, v0, v3

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {p1, v5, v7, v6, v8}, Landroid/graphics/Canvas;->drawCircle(FFFLandroid/graphics/Paint;)V

    goto/16 :goto_2

    .line 854
    :cond_1
    sget v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_NONE:I

    if-ne v4, v5, :cond_2

    goto/16 :goto_2

    .line 856
    :cond_2
    sget v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_TRIANGLE:I

    if-ne v4, v5, :cond_3

    .line 857
    new-instance v5, Landroid/graphics/Path;

    invoke-direct {v5}, Landroid/graphics/Path;-><init>()V

    .line 858
    .local v5, "pathTriangleFigure":Landroid/graphics/Path;
    aget v7, v0, v2

    aget v8, v0, v3

    sub-float/2addr v8, v6

    invoke-virtual {v5, v7, v8}, Landroid/graphics/Path;->moveTo(FF)V

    .line 859
    aget v7, v0, v2

    sub-float/2addr v7, v6

    aget v8, v0, v3

    add-float/2addr v8, v6

    invoke-virtual {v5, v7, v8}, Landroid/graphics/Path;->lineTo(FF)V

    .line 860
    aget v7, v0, v2

    add-float/2addr v7, v6

    aget v8, v0, v3

    add-float/2addr v8, v6

    invoke-virtual {v5, v7, v8}, Landroid/graphics/Path;->lineTo(FF)V

    .line 861
    invoke-virtual {v5}, Landroid/graphics/Path;->close()V

    .line 862
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {p1, v5, v6}, Landroid/graphics/Canvas;->drawPath(Landroid/graphics/Path;Landroid/graphics/Paint;)V

    .line 863
    .end local v5    # "pathTriangleFigure":Landroid/graphics/Path;
    goto/16 :goto_2

    :cond_3
    sget v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_CROSS:I

    if-ne v4, v5, :cond_4

    .line 864
    aget v5, v0, v2

    sub-float v8, v5, v6

    aget v5, v0, v3

    sub-float v9, v5, v6

    aget v5, v0, v2

    add-float v10, v5, v6

    aget v5, v0, v3

    add-float v11, v5, v6

    iget-object v12, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mPaint:Landroid/graphics/Paint;

    move-object v7, p1

    invoke-virtual/range {v7 .. v12}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    .line 865
    aget v5, v0, v2

    add-float v8, v5, v6

    aget v5, v0, v3

    sub-float v9, v5, v6

    aget v5, v0, v2

    sub-float v10, v5, v6

    aget v5, v0, v3

    add-float v11, v5, v6

    iget-object v12, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mPaint:Landroid/graphics/Paint;

    invoke-virtual/range {v7 .. v12}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    goto :goto_2

    .line 866
    :cond_4
    sget v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_RHOMBUS:I

    if-ne v4, v5, :cond_5

    .line 867
    new-instance v5, Landroid/graphics/Path;

    invoke-direct {v5}, Landroid/graphics/Path;-><init>()V

    .line 868
    .local v5, "pathRhombusFigure":Landroid/graphics/Path;
    aget v7, v0, v2

    aget v8, v0, v3

    add-float/2addr v8, v6

    invoke-virtual {v5, v7, v8}, Landroid/graphics/Path;->moveTo(FF)V

    .line 869
    aget v7, v0, v2

    sub-float/2addr v7, v6

    aget v8, v0, v3

    invoke-virtual {v5, v7, v8}, Landroid/graphics/Path;->lineTo(FF)V

    .line 870
    aget v7, v0, v2

    aget v8, v0, v3

    sub-float/2addr v8, v6

    invoke-virtual {v5, v7, v8}, Landroid/graphics/Path;->lineTo(FF)V

    .line 871
    aget v7, v0, v2

    add-float/2addr v7, v6

    aget v6, v0, v3

    invoke-virtual {v5, v7, v6}, Landroid/graphics/Path;->lineTo(FF)V

    .line 872
    invoke-virtual {v5}, Landroid/graphics/Path;->close()V

    .line 873
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {p1, v5, v6}, Landroid/graphics/Canvas;->drawPath(Landroid/graphics/Path;Landroid/graphics/Paint;)V

    .end local v5    # "pathRhombusFigure":Landroid/graphics/Path;
    goto :goto_1

    .line 874
    :cond_5
    sget v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_SQUARE:I

    if-ne v4, v5, :cond_6

    .line 875
    aget v5, v0, v2

    sub-float v8, v5, v6

    aget v5, v0, v3

    sub-float v9, v5, v6

    aget v5, v0, v2

    add-float v10, v5, v6

    aget v5, v0, v3

    add-float v11, v5, v6

    iget-object v12, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mPaint:Landroid/graphics/Paint;

    move-object v7, p1

    invoke-virtual/range {v7 .. v12}, Landroid/graphics/Canvas;->drawRect(FFFFLandroid/graphics/Paint;)V

    goto :goto_2

    .line 874
    :cond_6
    :goto_1
    nop

    .line 878
    :goto_2
    aget v5, v0, v2

    const/high16 v6, 0x42700000    # 60.0f

    add-float/2addr v5, v6

    aput v5, v0, v2

    .line 879
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v5, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;

    iget-object v5, v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->name:Ljava/lang/String;

    .line 880
    .local v5, "str":Ljava/lang/String;
    sget v6, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_CIRCLE:I

    if-eq v4, v6, :cond_8

    sget v6, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_TRIANGLE:I

    if-ne v4, v6, :cond_7

    goto :goto_3

    .line 883
    :cond_7
    aget v6, v0, v2

    aget v7, v0, v3

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint2:Landroid/graphics/Paint;

    invoke-virtual {p1, v5, v6, v7, v8}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    goto :goto_4

    .line 881
    :cond_8
    :goto_3
    aget v6, v0, v2

    const/high16 v7, 0x42200000    # 40.0f

    sub-float/2addr v6, v7

    aget v7, v0, v3

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint2:Landroid/graphics/Paint;

    invoke-virtual {p1, v5, v6, v7, v8}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    .line 886
    :goto_4
    new-instance v6, Landroid/graphics/Rect;

    invoke-direct {v6}, Landroid/graphics/Rect;-><init>()V

    .line 887
    .local v6, "r":Landroid/graphics/Rect;
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint2:Landroid/graphics/Paint;

    invoke-virtual {v5}, Ljava/lang/String;->length()I

    move-result v8

    invoke-virtual {v7, v5, v2, v8, v6}, Landroid/graphics/Paint;->getTextBounds(Ljava/lang/String;IILandroid/graphics/Rect;)V

    .line 888
    aget v7, v0, v2

    invoke-virtual {v6}, Landroid/graphics/Rect;->width()I

    move-result v8

    int-to-float v8, v8

    add-float/2addr v7, v8

    aput v7, v0, v2

    .line 839
    .end local v4    # "nodeType":I
    .end local v5    # "str":Ljava/lang/String;
    .end local v6    # "r":Landroid/graphics/Rect;
    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_0

    .line 891
    .end local v1    # "i":I
    :cond_9
    invoke-virtual {p1}, Landroid/graphics/Canvas;->restore()V

    .line 892
    return-void
.end method

.method private increase(J)J
    .locals 4
    .param p1, "value"    # J

    .line 896
    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-nez v0, :cond_0

    .line 897
    const-wide/16 p1, 0x1

    goto :goto_1

    .line 898
    :cond_0
    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    const-string v1, "1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    const-wide/16 v1, 0x2

    if-nez v0, :cond_2

    .line 899
    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    const-string v3, "5"

    invoke-virtual {v0, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    .line 902
    :cond_1
    div-long/2addr p1, v1

    .line 903
    const-wide/16 v0, 0x5

    mul-long/2addr p1, v0

    goto :goto_1

    .line 900
    :cond_2
    :goto_0
    mul-long/2addr p1, v1

    .line 905
    :goto_1
    return-wide p1
.end method

.method private init(Landroid/content/Context;)V
    .locals 7
    .param p1, "context"    # Landroid/content/Context;

    .line 473
    new-instance v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;-><init>(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)V

    .line 474
    .local v0, "listener":Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;
    new-instance v1, Landroid/view/GestureDetector;

    const/4 v2, 0x0

    const/4 v3, 0x1

    invoke-direct {v1, p1, v0, v2, v3}, Landroid/view/GestureDetector;-><init>(Landroid/content/Context;Landroid/view/GestureDetector$OnGestureListener;Landroid/os/Handler;Z)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mGestureDetector:Landroid/view/GestureDetector;

    .line 475
    new-instance v1, Landroid/view/ScaleGestureDetector;

    invoke-direct {v1, p1, v0}, Landroid/view/ScaleGestureDetector;-><init>(Landroid/content/Context;Landroid/view/ScaleGestureDetector$OnScaleGestureListener;)V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mScaleDetector:Landroid/view/ScaleGestureDetector;

    .line 477
    new-instance v1, Landroid/graphics/Paint;

    invoke-direct {v1}, Landroid/graphics/Paint;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mPaint:Landroid/graphics/Paint;

    .line 478
    sget-object v2, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 479
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {v1, v3}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 481
    new-instance v1, Landroid/graphics/Paint;

    invoke-direct {v1}, Landroid/graphics/Paint;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mBoldPaint:Landroid/graphics/Paint;

    .line 482
    sget-object v2, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 483
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mBoldPaint:Landroid/graphics/Paint;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 484
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mBoldPaint:Landroid/graphics/Paint;

    const/high16 v4, -0x1000000

    invoke-virtual {v1, v4}, Landroid/graphics/Paint;->setColor(I)V

    .line 486
    new-instance v1, Landroid/graphics/Paint;

    invoke-direct {v1}, Landroid/graphics/Paint;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mLightPaint:Landroid/graphics/Paint;

    .line 487
    sget-object v5, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {v1, v5}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 488
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mLightPaint:Landroid/graphics/Paint;

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 489
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mLightPaint:Landroid/graphics/Paint;

    const v5, -0x333334

    invoke-virtual {v1, v5}, Landroid/graphics/Paint;->setColor(I)V

    .line 491
    new-instance v1, Landroid/graphics/Paint;

    invoke-direct {v1}, Landroid/graphics/Paint;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint:Landroid/graphics/Paint;

    .line 492
    sget-object v5, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {v1, v5}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 493
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint:Landroid/graphics/Paint;

    invoke-virtual {v1, v3}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 494
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint:Landroid/graphics/Paint;

    invoke-virtual {v1, v4}, Landroid/graphics/Paint;->setColor(I)V

    .line 495
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint:Landroid/graphics/Paint;

    const/high16 v5, 0x41900000    # 18.0f

    invoke-virtual {v1, v5}, Landroid/graphics/Paint;->setTextSize(F)V

    .line 497
    new-instance v1, Landroid/graphics/Paint;

    invoke-direct {v1}, Landroid/graphics/Paint;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint2:Landroid/graphics/Paint;

    .line 498
    sget-object v6, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {v1, v6}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 499
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint2:Landroid/graphics/Paint;

    invoke-virtual {v1, v3}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 500
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint2:Landroid/graphics/Paint;

    invoke-virtual {v1, v4}, Landroid/graphics/Paint;->setColor(I)V

    .line 501
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint2:Landroid/graphics/Paint;

    invoke-virtual {v1, v5}, Landroid/graphics/Paint;->setTextSize(F)V

    .line 503
    new-instance v1, Landroid/graphics/Paint;

    invoke-direct {v1}, Landroid/graphics/Paint;-><init>()V

    iput-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mRegionPaint:Landroid/graphics/Paint;

    .line 504
    sget-object v3, Landroid/graphics/Paint$Style;->STROKE:Landroid/graphics/Paint$Style;

    invoke-virtual {v1, v3}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 505
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mRegionPaint:Landroid/graphics/Paint;

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setAntiAlias(Z)V

    .line 506
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mRegionPaint:Landroid/graphics/Paint;

    const/high16 v2, 0x41400000    # 12.0f

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setTextSize(F)V

    .line 507
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mRegionPaint:Landroid/graphics/Paint;

    const/high16 v2, 0x40a00000    # 5.0f

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setStrokeWidth(F)V

    .line 508
    return-void
.end method

.method private makeLastVisible()V
    .locals 6

    .line 537
    const/4 v0, 0x0

    .line 538
    .local v0, "transX":F
    const/4 v1, 0x0

    .line 539
    .local v1, "transY":F
    const/4 v2, 0x2

    new-array v2, v2, [F

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXMax:F

    const/4 v4, 0x0

    aput v3, v2, v4

    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYMax:F

    const/4 v5, 0x1

    aput v3, v2, v5

    .line 540
    .local v2, "p":[F
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mMatrix:Landroid/graphics/Matrix;

    invoke-virtual {v3, v2}, Landroid/graphics/Matrix;->mapPoints([F)V

    .line 541
    aget v3, v2, v4

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mViewRect:Landroid/graphics/RectF;

    iget v5, v5, Landroid/graphics/RectF;->right:F

    cmpl-float v3, v3, v5

    if-lez v3, :cond_0

    .line 542
    aget v3, v2, v4

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mViewRect:Landroid/graphics/RectF;

    iget v4, v4, Landroid/graphics/RectF;->right:F

    sub-float/2addr v3, v4

    neg-float v0, v3

    .line 544
    :cond_0
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mMatrix:Landroid/graphics/Matrix;

    const/4 v4, 0x0

    invoke-virtual {v3, v0, v4}, Landroid/graphics/Matrix;->postTranslate(FF)Z

    .line 545
    return-void
.end method

.method private updateAxis()V
    .locals 9

    .line 573
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXMin:F

    iget v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXMax:F

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    invoke-virtual {v0, v1, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->set(FFLcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;)V

    .line 574
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYMin:F

    iget v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYMax:F

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    invoke-virtual {v0, v1, v2, v3}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->set(FFLcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;)V

    .line 576
    const/4 v0, 0x0

    .line 577
    .local v0, "width":I
    new-instance v1, Landroid/graphics/Rect;

    invoke-direct {v1}, Landroid/graphics/Rect;-><init>()V

    .line 578
    .local v1, "rect":Landroid/graphics/Rect;
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    iget-object v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->customLabel:Ljava/util/HashMap;

    const/4 v3, 0x0

    if-eqz v2, :cond_2

    .line 579
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    iget-object v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->customLabel:Ljava/util/HashMap;

    invoke-virtual {v2}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 580
    .local v4, "str":Ljava/lang/String;
    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint:Landroid/graphics/Paint;

    invoke-virtual {v4}, Ljava/lang/String;->length()I

    move-result v6

    invoke-virtual {v5, v4, v3, v6, v1}, Landroid/graphics/Paint;->getTextBounds(Ljava/lang/String;IILandroid/graphics/Rect;)V

    .line 581
    invoke-virtual {v1}, Landroid/graphics/Rect;->width()I

    move-result v5

    if-le v5, v0, :cond_0

    .line 582
    invoke-virtual {v1}, Landroid/graphics/Rect;->width()I

    move-result v0

    .line 584
    .end local v4    # "str":Ljava/lang/String;
    :cond_0
    goto :goto_0

    :cond_1
    goto :goto_2

    .line 586
    :cond_2
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-wide v4, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->min:J

    .local v4, "y":J
    :goto_1
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-wide v6, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->max:J

    cmp-long v2, v4, v6

    if-gtz v2, :cond_4

    .line 587
    invoke-static {v4, v5}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v2

    .line 588
    .local v2, "str":Ljava/lang/String;
    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint:Landroid/graphics/Paint;

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v7

    invoke-virtual {v6, v2, v3, v7, v1}, Landroid/graphics/Paint;->getTextBounds(Ljava/lang/String;IILandroid/graphics/Rect;)V

    .line 589
    invoke-virtual {v1}, Landroid/graphics/Rect;->width()I

    move-result v6

    if-le v6, v0, :cond_3

    .line 590
    invoke-virtual {v1}, Landroid/graphics/Rect;->width()I

    move-result v0

    .line 586
    .end local v2    # "str":Ljava/lang/String;
    :cond_3
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-wide v6, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->step:J

    add-long/2addr v4, v6

    goto :goto_1

    .line 594
    .end local v4    # "y":J
    :cond_4
    :goto_2
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mViewRect:Landroid/graphics/RectF;

    add-int/lit8 v3, v0, 0x5

    int-to-float v3, v3

    const/high16 v4, 0x428c0000    # 70.0f

    iget v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mWidth:I

    add-int/lit8 v5, v5, -0xa

    int-to-float v5, v5

    iget v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mHeight:I

    add-int/lit8 v6, v6, -0x14

    int-to-float v6, v6

    invoke-virtual {v2, v3, v4, v5, v6}, Landroid/graphics/RectF;->set(FFFF)V

    .line 597
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mMatrix:Landroid/graphics/Matrix;

    if-nez v2, :cond_5

    .line 598
    new-instance v2, Landroid/graphics/Matrix;

    invoke-direct {v2}, Landroid/graphics/Matrix;-><init>()V

    iput-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mMatrix:Landroid/graphics/Matrix;

    .line 599
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mViewRect:Landroid/graphics/RectF;

    invoke-virtual {v3}, Landroid/graphics/RectF;->width()F

    move-result v3

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-wide v4, v4, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->max:J

    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-wide v6, v6, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->min:J

    sub-long/2addr v4, v6

    long-to-float v4, v4

    div-float/2addr v3, v4

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mViewRect:Landroid/graphics/RectF;

    .line 600
    invoke-virtual {v4}, Landroid/graphics/RectF;->height()F

    move-result v4

    neg-float v4, v4

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-wide v5, v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->max:J

    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-wide v7, v7, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->min:J

    sub-long/2addr v5, v7

    long-to-float v5, v5

    div-float/2addr v4, v5

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-wide v5, v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->min:J

    long-to-float v5, v5

    iget-object v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-wide v6, v6, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->min:J

    long-to-float v6, v6

    .line 599
    invoke-virtual {v2, v3, v4, v5, v6}, Landroid/graphics/Matrix;->postScale(FFFF)Z

    .line 602
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mMatrix:Landroid/graphics/Matrix;

    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mViewRect:Landroid/graphics/RectF;

    iget v3, v3, Landroid/graphics/RectF;->left:F

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-wide v4, v4, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->min:J

    long-to-float v4, v4

    sub-float/2addr v3, v4

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mViewRect:Landroid/graphics/RectF;

    iget v4, v4, Landroid/graphics/RectF;->bottom:F

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-wide v5, v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->min:J

    long-to-float v5, v5

    sub-float/2addr v4, v5

    invoke-virtual {v2, v3, v4}, Landroid/graphics/Matrix;->postTranslate(FF)Z

    .line 604
    :cond_5
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->updateAxisLabel()V

    .line 605
    return-void
.end method

.method private updateAxisLabel()V
    .locals 3

    .line 608
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->set(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;)V

    .line 609
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    invoke-virtual {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->set(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;)V

    .line 610
    return-void
.end method


# virtual methods
.method public getRSRPSINRConfig()V
    .locals 6

    .line 909
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    const-string v1, "telephony_rsrpsinr_config_settings"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 911
    .local v0, "rsrpSinrConfigSh":Landroid/content/SharedPreferences;
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    const v2, 0x7f0a05eb

    invoke-virtual {v1, v2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    const/16 v2, -0x50

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->strongPoint1X:I

    .line 913
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    const v3, 0x7f0a05ec

    invoke-virtual {v1, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    const/16 v3, 0x1e

    invoke-interface {v0, v1, v3}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->strongPoint1Y:I

    .line 915
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    const v3, 0x7f0a05ed

    invoke-virtual {v1, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->strongPoint2X:I

    .line 917
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    const v2, 0x7f0a05ee

    invoke-virtual {v1, v2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    const/16 v2, 0x14

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->strongPoint2Y:I

    .line 919
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    const v3, 0x7f0a05ef

    invoke-virtual {v1, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    const/16 v3, -0x1e

    invoke-interface {v0, v1, v3}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->strongPoint3X:I

    .line 921
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    const v3, 0x7f0a05f0

    invoke-virtual {v1, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->strongPoint3Y:I

    .line 923
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    const v2, 0x7f0a041e

    invoke-virtual {v1, v2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    const/16 v2, -0x8c

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mediumWeakPoint1X:I

    .line 925
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    const v3, 0x7f0a041f

    invoke-virtual {v1, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    const/16 v3, 0xa

    invoke-interface {v0, v1, v3}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mediumWeakPoint1Y:I

    .line 927
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    const v4, 0x7f0a0420

    invoke-virtual {v1, v4}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    const/16 v4, -0x5a

    invoke-interface {v0, v1, v4}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mediumWeakPoint2X:I

    .line 929
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    const v5, 0x7f0a0421

    invoke-virtual {v1, v5}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1, v3}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mediumWeakPoint2Y:I

    .line 931
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    const v3, 0x7f0a0422

    invoke-virtual {v1, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1, v4}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mediumWeakPoint3X:I

    .line 933
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    const v3, 0x7f0a0423

    invoke-virtual {v1, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    const/16 v3, -0x14

    invoke-interface {v0, v1, v3}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mediumWeakPoint3Y:I

    .line 935
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    const v4, 0x7f0a06cc

    invoke-virtual {v1, v4}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->weakPoint1X:I

    .line 937
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    const v2, 0x7f0a06cd

    invoke-virtual {v1, v2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x5

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->weakPoint1Y:I

    .line 939
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    const v4, 0x7f0a06ce

    invoke-virtual {v1, v4}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    const/16 v4, -0x64

    invoke-interface {v0, v1, v4}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->weakPoint2X:I

    .line 941
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    const v5, 0x7f0a06cf

    invoke-virtual {v1, v5}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->weakPoint2Y:I

    .line 943
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    const v2, 0x7f0a06d0

    invoke-virtual {v1, v2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1, v4}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->weakPoint3X:I

    .line 945
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mContext:Landroid/content/Context;

    const v2, 0x7f0a06d1

    invoke-virtual {v1, v2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1, v3}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result v1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->weakPoint3Y:I

    .line 947
    return-void
.end method

.method protected onDraw(Landroid/graphics/Canvas;)V
    .locals 31
    .param p1, "canvas"    # Landroid/graphics/Canvas;

    .line 628
    move-object/from16 v0, p0

    move-object/from16 v7, p1

    invoke-super/range {p0 .. p1}, Landroid/view/View;->onDraw(Landroid/graphics/Canvas;)V

    .line 629
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    if-eqz v1, :cond_13

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    if-nez v1, :cond_0

    goto/16 :goto_d

    .line 632
    :cond_0
    iget-boolean v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->test:Z

    const/4 v8, 0x0

    if-eqz v1, :cond_1

    .line 633
    invoke-direct/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->updateAxis()V

    .line 634
    iput-boolean v8, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->test:Z

    .line 636
    :cond_1
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->getWidth()I

    move-result v9

    .line 637
    .local v9, "width":I
    invoke-virtual/range {p0 .. p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->getHeight()I

    move-result v10

    .line 638
    .local v10, "height":I
    iget-object v11, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mMatrix:Landroid/graphics/Matrix;

    .line 639
    .local v11, "m":Landroid/graphics/Matrix;
    iget-object v12, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mViewRect:Landroid/graphics/RectF;

    .line 642
    .local v12, "r":Landroid/graphics/RectF;
    const/4 v13, 0x2

    new-array v1, v13, [F

    iget v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXMax:F

    aput v2, v1, v8

    const/4 v14, 0x1

    const/4 v15, 0x0

    aput v15, v1, v14

    move-object v6, v1

    .line 643
    .local v6, "p":[F
    invoke-virtual {v11, v6}, Landroid/graphics/Matrix;->mapPoints([F)V

    .line 644
    aget v1, v6, v8

    int-to-float v2, v9

    cmpg-float v1, v1, v2

    if-gtz v1, :cond_2

    .line 645
    iput-boolean v14, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mAutoScroll:Z

    goto :goto_0

    .line 647
    :cond_2
    iput-boolean v8, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mAutoScroll:Z

    .line 651
    :goto_0
    const/4 v1, -0x1

    invoke-virtual {v7, v1}, Landroid/graphics/Canvas;->drawColor(I)V

    .line 654
    iget v2, v12, Landroid/graphics/RectF;->left:F

    iget v3, v12, Landroid/graphics/RectF;->bottom:F

    iget v4, v12, Landroid/graphics/RectF;->right:F

    iget v5, v12, Landroid/graphics/RectF;->bottom:F

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mBoldPaint:Landroid/graphics/Paint;

    move-object/from16 v16, v1

    move-object/from16 v1, p1

    move-object/from16 v17, v6

    .end local v6    # "p":[F
    .local v17, "p":[F
    move-object/from16 v6, v16

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    .line 656
    iget v2, v12, Landroid/graphics/RectF;->left:F

    iget v3, v12, Landroid/graphics/RectF;->top:F

    iget v4, v12, Landroid/graphics/RectF;->left:F

    iget v5, v12, Landroid/graphics/RectF;->bottom:F

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mBoldPaint:Landroid/graphics/Paint;

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    .line 658
    invoke-virtual/range {p1 .. p1}, Landroid/graphics/Canvas;->save()I

    .line 659
    iget v1, v12, Landroid/graphics/RectF;->left:F

    iget v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mWidth:I

    int-to-float v2, v2

    iget v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mHeight:I

    int-to-float v3, v3

    invoke-virtual {v7, v1, v15, v2, v3}, Landroid/graphics/Canvas;->clipRect(FFFF)Z

    .line 661
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->min:J

    move-wide v5, v1

    .local v5, "x":J
    :goto_1
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->max:J

    cmp-long v1, v5, v1

    const/high16 v16, 0x3f800000    # 1.0f

    if-gtz v1, :cond_4

    .line 662
    new-array v1, v13, [F

    long-to-float v2, v5

    aput v2, v1, v8

    aput v15, v1, v14

    move-object v4, v1

    .line 663
    .end local v17    # "p":[F
    .local v4, "p":[F
    invoke-virtual {v11, v4}, Landroid/graphics/Matrix;->mapPoints([F)V

    .line 664
    aget v1, v4, v8

    iget v2, v12, Landroid/graphics/RectF;->left:F

    sub-float/2addr v1, v2

    invoke-static {v1}, Ljava/lang/Math;->abs(F)F

    move-result v1

    cmpl-float v1, v1, v16

    if-lez v1, :cond_3

    .line 665
    aget v2, v4, v8

    iget v3, v12, Landroid/graphics/RectF;->top:F

    aget v16, v4, v8

    iget v1, v12, Landroid/graphics/RectF;->bottom:F

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mBoldPaint:Landroid/graphics/Paint;

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

    .line 664
    .end local v19    # "p":[F
    .end local v20    # "x":J
    .restart local v4    # "p":[F
    .restart local v5    # "x":J
    :cond_3
    move-object/from16 v19, v4

    move-wide/from16 v20, v5

    .line 661
    .end local v4    # "p":[F
    .end local v5    # "x":J
    .restart local v19    # "p":[F
    .restart local v20    # "x":J
    :goto_2
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->step:J

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

    .line 668
    .end local v5    # "x":J
    invoke-virtual/range {p1 .. p1}, Landroid/graphics/Canvas;->restore()V

    .line 670
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->min:J

    .local v1, "x":J
    :goto_3
    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    iget-wide v3, v3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->max:J

    cmp-long v3, v1, v3

    const/high16 v14, 0x41800000    # 16.0f

    if-gtz v3, :cond_5

    .line 672
    new-array v3, v13, [F

    long-to-float v4, v1

    aput v4, v3, v8

    const/4 v4, 0x1

    aput v15, v3, v4

    .line 673
    .end local v17    # "p":[F
    .local v3, "p":[F
    invoke-virtual {v11, v3}, Landroid/graphics/Matrix;->mapPoints([F)V

    .line 674
    invoke-static {v1, v2}, Ljava/lang/Long;->toString(J)Ljava/lang/String;

    move-result-object v4

    aget v5, v3, v8

    sub-float/2addr v5, v14

    iget v6, v12, Landroid/graphics/RectF;->bottom:F

    add-float/2addr v6, v14

    iget-object v14, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint:Landroid/graphics/Paint;

    invoke-virtual {v7, v4, v5, v6, v14}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    .line 670
    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    iget-wide v4, v4, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->step:J

    add-long/2addr v1, v4

    move-object/from16 v17, v3

    goto :goto_3

    .line 679
    .end local v1    # "x":J
    .end local v3    # "p":[F
    .restart local v17    # "p":[F
    :cond_5
    invoke-virtual/range {p1 .. p1}, Landroid/graphics/Canvas;->save()I

    .line 680
    iget v1, v12, Landroid/graphics/RectF;->top:F

    iget v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mOffsetY:I

    int-to-float v2, v2

    sub-float/2addr v1, v2

    iget v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mWidth:I

    int-to-float v2, v2

    iget v3, v12, Landroid/graphics/RectF;->bottom:F

    invoke-virtual {v7, v15, v1, v2, v3}, Landroid/graphics/Canvas;->clipRect(FFFF)Z

    .line 682
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->min:J

    move-wide v5, v1

    .local v5, "y":J
    :goto_4
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->max:J

    cmp-long v1, v5, v1

    if-gtz v1, :cond_a

    .line 683
    new-array v1, v13, [F

    aput v15, v1, v8

    long-to-float v2, v5

    const/4 v3, 0x1

    aput v2, v1, v3

    move-object v2, v1

    .line 684
    .end local v17    # "p":[F
    .local v2, "p":[F
    invoke-virtual {v11, v2}, Landroid/graphics/Matrix;->mapPoints([F)V

    .line 685
    aget v1, v2, v3

    iget v4, v12, Landroid/graphics/RectF;->bottom:F

    sub-float/2addr v1, v4

    invoke-static {v1}, Ljava/lang/Math;->abs(F)F

    move-result v1

    cmpl-float v1, v1, v16

    if-lez v1, :cond_6

    .line 686
    iget v4, v12, Landroid/graphics/RectF;->left:F

    aget v17, v2, v3

    iget v1, v12, Landroid/graphics/RectF;->right:F

    aget v20, v2, v3

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mBoldPaint:Landroid/graphics/Paint;

    move/from16 v21, v1

    move-object/from16 v1, p1

    move-object/from16 v22, v2

    .end local v2    # "p":[F
    .local v22, "p":[F
    move v2, v4

    move-object/from16 v23, v3

    move/from16 v3, v17

    const/high16 v13, 0x40a00000    # 5.0f

    move/from16 v4, v21

    move/from16 v21, v9

    move-wide v8, v5

    .end local v5    # "y":J
    .end local v9    # "width":I
    .local v8, "y":J
    .local v21, "width":I
    move/from16 v5, v20

    move-object/from16 v6, v23

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    goto :goto_5

    .line 685
    .end local v8    # "y":J
    .end local v21    # "width":I
    .end local v22    # "p":[F
    .restart local v2    # "p":[F
    .restart local v5    # "y":J
    .restart local v9    # "width":I
    :cond_6
    move-object/from16 v22, v2

    move/from16 v21, v9

    const/high16 v13, 0x40a00000    # 5.0f

    move-wide v8, v5

    .line 689
    .end local v2    # "p":[F
    .end local v5    # "y":J
    .end local v9    # "width":I
    .restart local v8    # "y":J
    .restart local v21    # "width":I
    .restart local v22    # "p":[F
    :goto_5
    const-string v1, ""

    .line 690
    .local v1, "text":Ljava/lang/String;
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    iget-object v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->customLabel:Ljava/util/HashMap;

    if-eqz v2, :cond_7

    .line 691
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    iget-object v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->customLabel:Ljava/util/HashMap;

    long-to-int v3, v8

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    move-object v1, v2

    check-cast v1, Ljava/lang/String;

    .line 692
    if-nez v1, :cond_8

    .line 693
    const-string v1, ""

    goto :goto_6

    .line 696
    :cond_7
    invoke-static {v8, v9}, Ljava/lang/Long;->toString(J)Ljava/lang/String;

    move-result-object v1

    .line 698
    :cond_8
    :goto_6
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    iget-wide v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->max:J

    cmp-long v2, v8, v2

    if-nez v2, :cond_9

    .line 699
    const/4 v2, 0x1

    aget v3, v22, v2

    const/high16 v4, 0x41a00000    # 20.0f

    add-float/2addr v3, v4

    iget-object v4, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint:Landroid/graphics/Paint;

    invoke-virtual {v7, v1, v13, v3, v4}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    goto :goto_7

    .line 701
    :cond_9
    const/4 v2, 0x1

    aget v3, v22, v2

    sub-float/2addr v3, v14

    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint:Landroid/graphics/Paint;

    invoke-virtual {v7, v1, v13, v3, v2}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    .line 682
    .end local v1    # "text":Ljava/lang/String;
    :goto_7
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxisLabel:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;

    iget-wide v1, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->step:J

    add-long v5, v8, v1

    move/from16 v9, v21

    move-object/from16 v17, v22

    const/4 v8, 0x0

    const/4 v13, 0x2

    .end local v8    # "y":J
    .restart local v5    # "y":J
    goto/16 :goto_4

    .end local v21    # "width":I
    .end local v22    # "p":[F
    .restart local v9    # "width":I
    .restart local v17    # "p":[F
    :cond_a
    move/from16 v21, v9

    const/high16 v13, 0x40a00000    # 5.0f

    move-wide v8, v5

    .line 704
    .end local v5    # "y":J
    .end local v9    # "width":I
    .restart local v21    # "width":I
    invoke-virtual/range {p1 .. p1}, Landroid/graphics/Canvas;->restore()V

    .line 707
    invoke-virtual/range {p1 .. p1}, Landroid/graphics/Canvas;->save()I

    .line 708
    iget v1, v12, Landroid/graphics/RectF;->left:F

    iget v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mWidth:I

    int-to-float v2, v2

    iget v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mHeight:I

    int-to-float v3, v3

    invoke-virtual {v7, v1, v15, v2, v3}, Landroid/graphics/Canvas;->clipRect(FFFF)Z

    .line 709
    const/16 v1, 0x8

    new-array v2, v1, [F

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->strongPoint1X:I

    int-to-float v3, v3

    const/4 v4, 0x0

    aput v3, v2, v4

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->strongPoint1Y:I

    int-to-float v3, v3

    const/4 v4, 0x1

    aput v3, v2, v4

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->strongPoint2X:I

    int-to-float v4, v3

    const/4 v5, 0x2

    aput v4, v2, v5

    sget v4, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->strongPoint2Y:I

    int-to-float v5, v4

    const/4 v6, 0x3

    aput v5, v2, v6

    int-to-float v3, v3

    const/4 v5, 0x4

    aput v3, v2, v5

    int-to-float v3, v4

    const/4 v4, 0x5

    aput v3, v2, v4

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->strongPoint3X:I

    int-to-float v3, v3

    const/4 v8, 0x6

    aput v3, v2, v8

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->strongPoint3Y:I

    int-to-float v3, v3

    const/4 v9, 0x7

    aput v3, v2, v9

    move-object v14, v2

    .line 715
    .local v14, "strongPts":[F
    invoke-virtual {v11, v14}, Landroid/graphics/Matrix;->mapPoints([F)V

    .line 717
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mRegionPaint:Landroid/graphics/Paint;

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mRegionColor:[I

    const/16 v16, 0x0

    aget v3, v3, v16

    invoke-virtual {v2, v3}, Landroid/graphics/Paint;->setColor(I)V

    .line 718
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mRegionPaint:Landroid/graphics/Paint;

    invoke-virtual {v7, v14, v2}, Landroid/graphics/Canvas;->drawLines([FLandroid/graphics/Paint;)V

    .line 728
    new-array v2, v1, [F

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mediumWeakPoint1X:I

    int-to-float v3, v3

    aput v3, v2, v16

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mediumWeakPoint1Y:I

    int-to-float v3, v3

    const/16 v16, 0x1

    aput v3, v2, v16

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mediumWeakPoint2X:I

    int-to-float v13, v3

    const/16 v20, 0x2

    aput v13, v2, v20

    sget v13, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mediumWeakPoint2Y:I

    int-to-float v15, v13

    aput v15, v2, v6

    int-to-float v3, v3

    aput v3, v2, v5

    int-to-float v3, v13

    aput v3, v2, v4

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mediumWeakPoint3X:I

    int-to-float v3, v3

    aput v3, v2, v8

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mediumWeakPoint3Y:I

    int-to-float v3, v3

    aput v3, v2, v9

    move-object v13, v2

    .line 734
    .local v13, "mediumWeakPts":[F
    invoke-virtual {v11, v13}, Landroid/graphics/Matrix;->mapPoints([F)V

    .line 736
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mRegionPaint:Landroid/graphics/Paint;

    iget-object v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mRegionColor:[I

    const/4 v15, 0x1

    aget v3, v3, v15

    invoke-virtual {v2, v3}, Landroid/graphics/Paint;->setColor(I)V

    .line 737
    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mRegionPaint:Landroid/graphics/Paint;

    invoke-virtual {v7, v13, v2}, Landroid/graphics/Canvas;->drawLines([FLandroid/graphics/Paint;)V

    .line 741
    new-array v1, v1, [F

    sget v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->weakPoint1X:I

    int-to-float v2, v2

    const/4 v3, 0x0

    aput v2, v1, v3

    sget v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->weakPoint1Y:I

    int-to-float v2, v2

    const/4 v3, 0x1

    aput v2, v1, v3

    sget v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->weakPoint2X:I

    int-to-float v3, v2

    const/4 v15, 0x2

    aput v3, v1, v15

    sget v3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->weakPoint2Y:I

    int-to-float v15, v3

    aput v15, v1, v6

    int-to-float v2, v2

    aput v2, v1, v5

    int-to-float v2, v3

    aput v2, v1, v4

    sget v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->weakPoint3X:I

    int-to-float v2, v2

    aput v2, v1, v8

    sget v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->weakPoint3Y:I

    int-to-float v2, v2

    aput v2, v1, v9

    move-object v8, v1

    .line 747
    .local v8, "weakPts":[F
    invoke-virtual {v11, v8}, Landroid/graphics/Matrix;->mapPoints([F)V

    .line 749
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mRegionPaint:Landroid/graphics/Paint;

    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mRegionColor:[I

    const/4 v3, 0x2

    aget v2, v2, v3

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setColor(I)V

    .line 750
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mRegionPaint:Landroid/graphics/Paint;

    invoke-virtual {v7, v8, v1}, Landroid/graphics/Canvas;->drawLines([FLandroid/graphics/Paint;)V

    .line 757
    invoke-virtual/range {p1 .. p1}, Landroid/graphics/Canvas;->restore()V

    .line 760
    new-instance v1, Landroid/graphics/RectF;

    const/high16 v2, 0x42480000    # 50.0f

    iget v3, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mWidth:I

    int-to-float v3, v3

    const/high16 v4, 0x42ac0000    # 86.0f

    const/4 v5, 0x0

    invoke-direct {v1, v2, v5, v3, v4}, Landroid/graphics/RectF;-><init>(FFFF)V

    invoke-direct {v0, v7, v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->drawSeries(Landroid/graphics/Canvas;Landroid/graphics/RectF;)V

    .line 762
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mData:Ljava/util/ArrayList;

    if-eqz v1, :cond_12

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    const/4 v2, 0x1

    if-ge v1, v2, :cond_b

    move-object/from16 v24, v8

    goto/16 :goto_c

    .line 767
    :cond_b
    invoke-virtual/range {p1 .. p1}, Landroid/graphics/Canvas;->save()I

    .line 768
    iget v1, v12, Landroid/graphics/RectF;->left:F

    iget v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mWidth:I

    int-to-float v2, v2

    iget v3, v12, Landroid/graphics/RectF;->bottom:F

    const/4 v4, 0x0

    invoke-virtual {v7, v1, v4, v2, v3}, Landroid/graphics/Canvas;->clipRect(FFFF)Z

    .line 769
    const/4 v1, 0x2

    new-array v9, v1, [F

    .line 770
    .local v9, "pText":[F
    iget v1, v12, Landroid/graphics/RectF;->left:F

    const/4 v2, 0x0

    aput v1, v9, v2

    .line 771
    const/high16 v15, 0x42c80000    # 100.0f

    const/4 v1, 0x1

    aput v15, v9, v1

    .line 772
    aget v3, v9, v2

    const/high16 v6, 0x41200000    # 10.0f

    add-float/2addr v3, v6

    aget v4, v9, v1

    const/high16 v20, 0x42700000    # 60.0f

    sub-float v4, v4, v20

    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint2:Landroid/graphics/Paint;

    const-string v15, "PCI"

    invoke-virtual {v7, v15, v3, v4, v5}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    .line 773
    aget v3, v9, v2

    add-float/2addr v3, v6

    aget v2, v9, v1

    const/high16 v15, 0x42200000    # 40.0f

    sub-float/2addr v2, v15

    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint2:Landroid/graphics/Paint;

    const-string v4, "EARFCN"

    invoke-virtual {v7, v4, v3, v2, v1}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    .line 776
    const/4 v1, 0x0

    move v5, v1

    .local v5, "i":I
    :goto_8
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mData:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-ge v5, v1, :cond_11

    .line 777
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mData:Ljava/util/ArrayList;

    invoke-virtual {v1, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    move-object v4, v1

    check-cast v4, [F

    .line 778
    .local v4, "data":[F
    if-nez v4, :cond_c

    .line 779
    move/from16 v16, v6

    move-object/from16 v24, v8

    move/from16 v19, v15

    const/high16 v8, 0x40a00000    # 5.0f

    const/16 v18, 0x1

    const/high16 v22, 0x42c80000    # 100.0f

    move v15, v5

    goto/16 :goto_b

    .line 781
    :cond_c
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mPaint:Landroid/graphics/Paint;

    iget-object v2, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v2, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;

    iget v2, v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->color:I

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setColor(I)V

    .line 782
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mPaint:Landroid/graphics/Paint;

    sget-object v2, Landroid/graphics/Paint$Style;->FILL:Landroid/graphics/Paint$Style;

    invoke-virtual {v1, v2}, Landroid/graphics/Paint;->setStyle(Landroid/graphics/Paint$Style;)V

    .line 783
    iget-object v1, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v1, v5}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;

    iget v3, v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->nodeType:I

    .line 785
    .local v3, "nodeType":I
    array-length v1, v4

    new-array v2, v1, [F

    .line 786
    .local v2, "tmp":[F
    invoke-virtual {v11, v2, v4}, Landroid/graphics/Matrix;->mapPoints([F[F)V

    .line 788
    const/4 v1, 0x0

    .local v1, "j":I
    :goto_9
    array-length v15, v2

    if-ge v1, v15, :cond_10

    .line 789
    sget v15, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_CIRCLE:I

    if-ne v3, v15, :cond_d

    .line 790
    aget v15, v2, v1

    add-int/lit8 v24, v1, 0x1

    move/from16 v25, v5

    .end local v5    # "i":I
    .local v25, "i":I
    aget v5, v2, v24

    move-object/from16 v24, v8

    .end local v8    # "weakPts":[F
    .local v24, "weakPts":[F
    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {v7, v15, v5, v6, v8}, Landroid/graphics/Canvas;->drawCircle(FFFLandroid/graphics/Paint;)V

    .line 791
    add-int/lit8 v5, v1, 0x2

    aget v5, v4, v5

    invoke-static {v5}, Ljava/lang/Float;->toString(F)Ljava/lang/String;

    move-result-object v5

    const/4 v8, 0x0

    aget v15, v9, v8

    const/high16 v22, 0x42c80000    # 100.0f

    add-float v15, v15, v22

    const/16 v18, 0x1

    aget v19, v9, v18

    sub-float v6, v19, v20

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint2:Landroid/graphics/Paint;

    invoke-virtual {v7, v5, v15, v6, v8}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    .line 793
    add-int/lit8 v5, v1, 0x3

    aget v5, v4, v5

    invoke-static {v5}, Ljava/lang/Float;->toString(F)Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    aget v8, v9, v6

    add-float v8, v8, v22

    aget v6, v9, v18

    const/high16 v15, 0x42200000    # 40.0f

    sub-float/2addr v6, v15

    iget-object v15, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint2:Landroid/graphics/Paint;

    invoke-virtual {v7, v5, v8, v6, v15}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    move/from16 v27, v1

    move-object/from16 v28, v2

    move/from16 v29, v3

    move-object/from16 v30, v4

    move/from16 v15, v25

    const/high16 v8, 0x40a00000    # 5.0f

    const/high16 v16, 0x41200000    # 10.0f

    const/16 v18, 0x1

    const/high16 v19, 0x42200000    # 40.0f

    goto/16 :goto_a

    .line 796
    .end local v24    # "weakPts":[F
    .end local v25    # "i":I
    .restart local v5    # "i":I
    .restart local v8    # "weakPts":[F
    :cond_d
    move/from16 v25, v5

    move-object/from16 v24, v8

    const/high16 v22, 0x42c80000    # 100.0f

    .end local v5    # "i":I
    .end local v8    # "weakPts":[F
    .restart local v24    # "weakPts":[F
    .restart local v25    # "i":I
    sget v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_TRIANGLE:I

    if-ne v3, v5, :cond_e

    .line 797
    new-instance v5, Landroid/graphics/Path;

    invoke-direct {v5}, Landroid/graphics/Path;-><init>()V

    .line 798
    .local v5, "pathTriangleFigure":Landroid/graphics/Path;
    aget v6, v2, v1

    add-int/lit8 v8, v1, 0x1

    aget v8, v2, v8

    const/high16 v15, 0x41600000    # 14.0f

    sub-float/2addr v8, v15

    invoke-virtual {v5, v6, v8}, Landroid/graphics/Path;->moveTo(FF)V

    .line 799
    aget v6, v2, v1

    sub-float/2addr v6, v15

    add-int/lit8 v8, v1, 0x1

    aget v8, v2, v8

    add-float/2addr v8, v15

    invoke-virtual {v5, v6, v8}, Landroid/graphics/Path;->lineTo(FF)V

    .line 800
    aget v6, v2, v1

    add-float/2addr v6, v15

    add-int/lit8 v8, v1, 0x1

    aget v8, v2, v8

    add-float/2addr v8, v15

    invoke-virtual {v5, v6, v8}, Landroid/graphics/Path;->lineTo(FF)V

    .line 801
    invoke-virtual {v5}, Landroid/graphics/Path;->close()V

    .line 802
    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mPaint:Landroid/graphics/Paint;

    invoke-virtual {v7, v5, v6}, Landroid/graphics/Canvas;->drawPath(Landroid/graphics/Path;Landroid/graphics/Paint;)V

    .line 803
    add-int/lit8 v6, v1, 0x2

    aget v6, v4, v6

    invoke-static {v6}, Ljava/lang/Float;->toString(F)Ljava/lang/String;

    move-result-object v6

    const/4 v8, 0x0

    aget v15, v9, v8

    const/high16 v8, 0x437a0000    # 250.0f

    add-float/2addr v15, v8

    const/16 v18, 0x1

    aget v26, v9, v18

    sub-float v8, v26, v20

    move-object/from16 v26, v5

    .end local v5    # "pathTriangleFigure":Landroid/graphics/Path;
    .local v26, "pathTriangleFigure":Landroid/graphics/Path;
    iget-object v5, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint2:Landroid/graphics/Paint;

    invoke-virtual {v7, v6, v15, v8, v5}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    .line 805
    add-int/lit8 v5, v1, 0x3

    aget v5, v4, v5

    invoke-static {v5}, Ljava/lang/Float;->toString(F)Ljava/lang/String;

    move-result-object v5

    const/4 v8, 0x0

    aget v6, v9, v8

    const/high16 v15, 0x437a0000    # 250.0f

    add-float/2addr v6, v15

    aget v15, v9, v18

    const/high16 v19, 0x42200000    # 40.0f

    sub-float v15, v15, v19

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mTextPaint2:Landroid/graphics/Paint;

    invoke-virtual {v7, v5, v6, v15, v8}, Landroid/graphics/Canvas;->drawText(Ljava/lang/String;FFLandroid/graphics/Paint;)V

    .line 807
    .end local v26    # "pathTriangleFigure":Landroid/graphics/Path;
    move/from16 v27, v1

    move-object/from16 v28, v2

    move/from16 v29, v3

    move-object/from16 v30, v4

    move/from16 v15, v25

    const/high16 v8, 0x40a00000    # 5.0f

    const/high16 v16, 0x41200000    # 10.0f

    goto :goto_a

    :cond_e
    const/16 v18, 0x1

    const/high16 v19, 0x42200000    # 40.0f

    sget v5, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_CROSS:I

    if-ne v3, v5, :cond_f

    .line 808
    aget v5, v2, v1

    const/high16 v8, 0x40a00000    # 5.0f

    sub-float/2addr v5, v8

    add-int/lit8 v6, v1, 0x1

    aget v6, v2, v6

    sub-float/2addr v6, v8

    aget v15, v2, v1

    add-float/2addr v15, v8

    add-int/lit8 v16, v1, 0x1

    aget v16, v2, v16

    add-float v16, v16, v8

    iget-object v8, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mPaint:Landroid/graphics/Paint;

    move/from16 v27, v1

    .end local v1    # "j":I
    .local v27, "j":I
    move-object/from16 v1, p1

    move-object/from16 v28, v2

    .end local v2    # "tmp":[F
    .local v28, "tmp":[F
    move v2, v5

    move/from16 v29, v3

    .end local v3    # "nodeType":I
    .local v29, "nodeType":I
    move v3, v6

    move-object/from16 v30, v4

    .end local v4    # "data":[F
    .local v30, "data":[F
    move v4, v15

    move/from16 v15, v25

    .end local v25    # "i":I
    .local v15, "i":I
    move/from16 v5, v16

    const/high16 v16, 0x41200000    # 10.0f

    move-object v6, v8

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    .line 810
    aget v1, v28, v27

    const/high16 v8, 0x40a00000    # 5.0f

    add-float v2, v1, v8

    add-int/lit8 v1, v27, 0x1

    aget v1, v28, v1

    sub-float v3, v1, v8

    aget v1, v28, v27

    sub-float v4, v1, v8

    add-int/lit8 v1, v27, 0x1

    aget v1, v28, v1

    add-float v5, v1, v8

    iget-object v6, v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mPaint:Landroid/graphics/Paint;

    move-object/from16 v1, p1

    invoke-virtual/range {v1 .. v6}, Landroid/graphics/Canvas;->drawLine(FFFFLandroid/graphics/Paint;)V

    goto :goto_a

    .line 807
    .end local v15    # "i":I
    .end local v27    # "j":I
    .end local v28    # "tmp":[F
    .end local v29    # "nodeType":I
    .end local v30    # "data":[F
    .restart local v1    # "j":I
    .restart local v2    # "tmp":[F
    .restart local v3    # "nodeType":I
    .restart local v4    # "data":[F
    .restart local v25    # "i":I
    :cond_f
    move/from16 v27, v1

    move-object/from16 v28, v2

    move/from16 v29, v3

    move-object/from16 v30, v4

    move/from16 v15, v25

    const/high16 v8, 0x40a00000    # 5.0f

    const/high16 v16, 0x41200000    # 10.0f

    .line 788
    .end local v1    # "j":I
    .end local v2    # "tmp":[F
    .end local v3    # "nodeType":I
    .end local v4    # "data":[F
    .end local v25    # "i":I
    .restart local v15    # "i":I
    .restart local v27    # "j":I
    .restart local v28    # "tmp":[F
    .restart local v29    # "nodeType":I
    .restart local v30    # "data":[F
    :goto_a
    add-int/lit8 v1, v27, 0x4

    move v5, v15

    move/from16 v6, v16

    move/from16 v15, v19

    move-object/from16 v8, v24

    move-object/from16 v2, v28

    move/from16 v3, v29

    move-object/from16 v4, v30

    .end local v27    # "j":I
    .restart local v1    # "j":I
    goto/16 :goto_9

    .end local v15    # "i":I
    .end local v24    # "weakPts":[F
    .end local v28    # "tmp":[F
    .end local v29    # "nodeType":I
    .end local v30    # "data":[F
    .restart local v2    # "tmp":[F
    .restart local v3    # "nodeType":I
    .restart local v4    # "data":[F
    .local v5, "i":I
    .restart local v8    # "weakPts":[F
    :cond_10
    move/from16 v27, v1

    move-object/from16 v28, v2

    move/from16 v29, v3

    move-object/from16 v30, v4

    move v15, v5

    move/from16 v16, v6

    move-object/from16 v24, v8

    const/high16 v8, 0x40a00000    # 5.0f

    const/16 v18, 0x1

    const/high16 v19, 0x42200000    # 40.0f

    const/high16 v22, 0x42c80000    # 100.0f

    .line 776
    .end local v1    # "j":I
    .end local v2    # "tmp":[F
    .end local v3    # "nodeType":I
    .end local v4    # "data":[F
    .end local v5    # "i":I
    .end local v8    # "weakPts":[F
    .restart local v15    # "i":I
    .restart local v24    # "weakPts":[F
    :goto_b
    add-int/lit8 v5, v15, 0x1

    move/from16 v6, v16

    move/from16 v15, v19

    move-object/from16 v8, v24

    .end local v15    # "i":I
    .restart local v5    # "i":I
    goto/16 :goto_8

    .line 815
    .end local v5    # "i":I
    .end local v24    # "weakPts":[F
    .restart local v8    # "weakPts":[F
    :cond_11
    invoke-virtual/range {p1 .. p1}, Landroid/graphics/Canvas;->restore()V

    .line 816
    return-void

    .line 762
    .end local v9    # "pText":[F
    :cond_12
    move-object/from16 v24, v8

    .line 763
    .end local v8    # "weakPts":[F
    .restart local v24    # "weakPts":[F
    :goto_c
    return-void

    .line 630
    .end local v10    # "height":I
    .end local v11    # "m":Landroid/graphics/Matrix;
    .end local v12    # "r":Landroid/graphics/RectF;
    .end local v13    # "mediumWeakPts":[F
    .end local v14    # "strongPts":[F
    .end local v17    # "p":[F
    .end local v21    # "width":I
    .end local v24    # "weakPts":[F
    :cond_13
    :goto_d
    return-void
.end method

.method protected onMeasure(II)V
    .locals 1
    .param p1, "widthSpec"    # I
    .param p2, "heightSpec"    # I

    .line 614
    invoke-super {p0, p1, p2}, Landroid/view/View;->onMeasure(II)V

    .line 615
    invoke-static {p1}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mWidth:I

    .line 616
    invoke-static {p2}, Landroid/view/View$MeasureSpec;->getSize(I)I

    move-result v0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mHeight:I

    .line 617
    return-void
.end method

.method public onTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 1
    .param p1, "event"    # Landroid/view/MotionEvent;

    .line 621
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mGestureDetector:Landroid/view/GestureDetector;

    invoke-virtual {v0, p1}, Landroid/view/GestureDetector;->onTouchEvent(Landroid/view/MotionEvent;)Z

    .line 622
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mScaleDetector:Landroid/view/ScaleGestureDetector;

    invoke-virtual {v0, p1}, Landroid/view/ScaleGestureDetector;->onTouchEvent(Landroid/view/MotionEvent;)Z

    .line 623
    const/4 v0, 0x1

    return v0
.end method

.method public setAxisConfig(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;)V
    .locals 1
    .param p1, "xConfig"    # Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;
    .param p2, "yConfig"    # Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    .line 381
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    .line 382
    iput-object p2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxisConfig:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    .line 383
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->test:Z

    .line 384
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->invalidate()V

    .line 385
    return-void
.end method

.method public setConfig([Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;)V
    .locals 3
    .param p1, "configs"    # [Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;

    .line 407
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mConfigs:Ljava/util/ArrayList;

    .line 408
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    array-length v1, p1

    if-ge v0, v1, :cond_0

    .line 409
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mConfigs:Ljava/util/ArrayList;

    aget-object v2, p1, v0

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 408
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 411
    .end local v0    # "i":I
    :cond_0
    return-void
.end method

.method public setData(I[F)V
    .locals 3
    .param p1, "index"    # I
    .param p2, "data"    # [F

    .line 511
    if-eqz p2, :cond_6

    array-length v0, p2

    const/4 v1, 0x1

    if-gt v0, v1, :cond_0

    goto :goto_2

    .line 514
    :cond_0
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mWidth:I

    if-eqz v0, :cond_5

    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mHeight:I

    if-nez v0, :cond_1

    goto :goto_1

    .line 517
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mData:Ljava/util/ArrayList;

    if-nez v0, :cond_2

    .line 518
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mData:Ljava/util/ArrayList;

    .line 519
    const/4 v0, 0x0

    .local v0, "i":I
    :goto_0
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mConfigs:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 520
    iget-object v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mData:Ljava/util/ArrayList;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 519
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 524
    .end local v0    # "i":I
    :cond_2
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mData:Ljava/util/ArrayList;

    invoke-virtual {v0, p1, p2}, Ljava/util/ArrayList;->set(ILjava/lang/Object;)Ljava/lang/Object;

    .line 525
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->checkData()V

    .line 526
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->updateAxis()V

    .line 528
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mAutoScroll:Z

    if-eqz v0, :cond_3

    .line 529
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->makeLastVisible()V

    .line 531
    :cond_3
    iget-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mScaling:Z

    if-nez v0, :cond_4

    .line 532
    invoke-virtual {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->invalidate()V

    .line 534
    :cond_4
    return-void

    .line 515
    :cond_5
    :goto_1
    return-void

    .line 512
    :cond_6
    :goto_2
    return-void
.end method
