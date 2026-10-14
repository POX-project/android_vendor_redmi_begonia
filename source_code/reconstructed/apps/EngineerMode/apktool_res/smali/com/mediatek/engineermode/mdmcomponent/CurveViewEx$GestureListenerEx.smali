.class Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;
.super Ljava/lang/Object;
.source "CurveViewEx.java"

# interfaces
.implements Landroid/view/GestureDetector$OnGestureListener;
.implements Landroid/view/GestureDetector$OnDoubleTapListener;
.implements Landroid/view/ScaleGestureDetector$OnScaleGestureListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "GestureListenerEx"
.end annotation


# static fields
.field private static final DIRECTION_HORIZONTAL:I = 0x1

.field private static final DIRECTION_UNKNOWN:I = 0x0

.field private static final DIRECTION_VERTICAL:I = 0x2


# instance fields
.field private mScaleDirection:I

.field private mScrollDirection:I

.field private mValues:[F

.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)V
    .locals 1
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    .line 117
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 123
    const/16 v0, 0x9

    new-array v0, v0, [F

    iput-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->mValues:[F

    return-void
.end method

.method private doScale(FFFF)V
    .locals 1
    .param p1, "scaleX"    # F
    .param p2, "scaleY"    # F
    .param p3, "x"    # F
    .param p4, "y"    # F

    .line 158
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$000(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/Matrix;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 159
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$000(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/Matrix;

    move-result-object v0

    invoke-virtual {v0, p1, p2, p3, p4}, Landroid/graphics/Matrix;->postScale(FFFF)Z

    .line 161
    :cond_0
    return-void
.end method

.method private doTranslate(FF)V
    .locals 3
    .param p1, "distanceX"    # F
    .param p2, "distanceY"    # F

    .line 208
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$000(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/Matrix;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 209
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$000(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/Matrix;

    move-result-object v0

    neg-float v1, p1

    neg-float v2, p2

    invoke-virtual {v0, v1, v2}, Landroid/graphics/Matrix;->postTranslate(FF)Z

    .line 211
    :cond_0
    return-void
.end method

.method private snapBack()V
    .locals 12

    .line 214
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$000(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/Matrix;

    move-result-object v0

    if-nez v0, :cond_0

    .line 215
    return-void

    .line 217
    :cond_0
    const/high16 v0, 0x3f800000    # 1.0f

    .line 218
    .local v0, "scaleX":F
    const/high16 v1, 0x3f800000    # 1.0f

    .line 219
    .local v1, "scaleY":F
    const/4 v2, 0x2

    new-array v3, v2, [F

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    iget-object v4, v4, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-wide v4, v4, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->min:J

    long-to-float v4, v4

    const/4 v5, 0x0

    aput v4, v3, v5

    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    iget-object v4, v4, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-wide v6, v4, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->min:J

    long-to-float v4, v6

    const/4 v6, 0x1

    aput v4, v3, v6

    .line 220
    .local v3, "p1":[F
    new-array v4, v2, [F

    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    iget-object v7, v7, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-wide v7, v7, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->max:J

    long-to-float v7, v7

    aput v7, v4, v5

    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    iget-object v7, v7, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-wide v7, v7, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->max:J

    long-to-float v7, v7

    aput v7, v4, v6

    .line 221
    .local v4, "p2":[F
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v7}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$000(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/Matrix;

    move-result-object v7

    invoke-virtual {v7, v3}, Landroid/graphics/Matrix;->mapPoints([F)V

    .line 222
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v7}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$000(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/Matrix;

    move-result-object v7

    invoke-virtual {v7, v4}, Landroid/graphics/Matrix;->mapPoints([F)V

    .line 223
    aget v7, v3, v5

    aget v8, v4, v5

    sub-float/2addr v7, v8

    invoke-static {v7}, Ljava/lang/Math;->abs(F)F

    move-result v7

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v8}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$200(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/RectF;

    move-result-object v8

    invoke-virtual {v8}, Landroid/graphics/RectF;->width()F

    move-result v8

    cmpg-float v7, v7, v8

    if-gez v7, :cond_1

    .line 224
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v7}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$200(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/RectF;

    move-result-object v7

    invoke-virtual {v7}, Landroid/graphics/RectF;->width()F

    move-result v7

    aget v8, v3, v5

    aget v9, v4, v5

    sub-float/2addr v8, v9

    invoke-static {v8}, Ljava/lang/Math;->abs(F)F

    move-result v8

    div-float v0, v7, v8

    .line 226
    :cond_1
    aget v7, v3, v6

    aget v8, v4, v6

    sub-float/2addr v7, v8

    invoke-static {v7}, Ljava/lang/Math;->abs(F)F

    move-result v7

    iget-object v8, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v8}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$200(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/RectF;

    move-result-object v8

    invoke-virtual {v8}, Landroid/graphics/RectF;->height()F

    move-result v8

    cmpg-float v7, v7, v8

    if-gez v7, :cond_2

    .line 227
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v7}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$200(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/RectF;

    move-result-object v7

    invoke-virtual {v7}, Landroid/graphics/RectF;->height()F

    move-result v7

    aget v8, v3, v6

    aget v9, v4, v6

    sub-float/2addr v8, v9

    invoke-static {v8}, Ljava/lang/Math;->abs(F)F

    move-result v8

    div-float v1, v7, v8

    .line 229
    :cond_2
    iget-object v7, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v7}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$000(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/Matrix;

    move-result-object v7

    invoke-virtual {v7, v0, v1}, Landroid/graphics/Matrix;->postScale(FF)Z

    .line 231
    const/4 v7, 0x0

    .line 232
    .local v7, "transX":F
    const/4 v8, 0x0

    .line 233
    .local v8, "transY":F
    new-array v9, v2, [F

    iget-object v10, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    iget-object v10, v10, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-wide v10, v10, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->min:J

    long-to-float v10, v10

    aput v10, v9, v5

    iget-object v10, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    iget-object v10, v10, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-wide v10, v10, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->min:J

    long-to-float v10, v10

    aput v10, v9, v6

    move-object v3, v9

    .line 234
    new-array v2, v2, [F

    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    iget-object v9, v9, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mXAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-wide v9, v9, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->max:J

    long-to-float v9, v9

    aput v9, v2, v5

    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    iget-object v9, v9, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->mYAxis:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;

    iget-wide v9, v9, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->max:J

    long-to-float v9, v9

    aput v9, v2, v6

    .line 235
    .end local v4    # "p2":[F
    .local v2, "p2":[F
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v4}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$000(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/Matrix;

    move-result-object v4

    invoke-virtual {v4, v3}, Landroid/graphics/Matrix;->mapPoints([F)V

    .line 236
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v4}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$000(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/Matrix;

    move-result-object v4

    invoke-virtual {v4, v2}, Landroid/graphics/Matrix;->mapPoints([F)V

    .line 237
    aget v4, v3, v5

    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v9}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$200(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/RectF;

    move-result-object v9

    iget v9, v9, Landroid/graphics/RectF;->left:F

    cmpl-float v4, v4, v9

    if-lez v4, :cond_3

    .line 238
    aget v4, v3, v5

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v5}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$200(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/RectF;

    move-result-object v5

    iget v5, v5, Landroid/graphics/RectF;->left:F

    sub-float/2addr v4, v5

    neg-float v7, v4

    goto :goto_0

    .line 239
    :cond_3
    aget v4, v2, v5

    iget-object v9, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v9}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$200(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/RectF;

    move-result-object v9

    iget v9, v9, Landroid/graphics/RectF;->right:F

    cmpg-float v4, v4, v9

    if-gez v4, :cond_4

    .line 240
    aget v4, v2, v5

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v5}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$200(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/RectF;

    move-result-object v5

    iget v5, v5, Landroid/graphics/RectF;->right:F

    sub-float/2addr v4, v5

    neg-float v7, v4

    .line 242
    :cond_4
    :goto_0
    aget v4, v3, v6

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v5}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$200(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/RectF;

    move-result-object v5

    iget v5, v5, Landroid/graphics/RectF;->bottom:F

    cmpg-float v4, v4, v5

    if-gez v4, :cond_5

    .line 243
    aget v4, v3, v6

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v5}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$200(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/RectF;

    move-result-object v5

    iget v5, v5, Landroid/graphics/RectF;->bottom:F

    sub-float/2addr v4, v5

    neg-float v8, v4

    goto :goto_1

    .line 244
    :cond_5
    aget v4, v2, v6

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v5}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$200(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/RectF;

    move-result-object v5

    iget v5, v5, Landroid/graphics/RectF;->top:F

    cmpl-float v4, v4, v5

    if-lez v4, :cond_6

    .line 245
    aget v4, v2, v6

    iget-object v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v5}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$200(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/RectF;

    move-result-object v5

    iget v5, v5, Landroid/graphics/RectF;->top:F

    sub-float/2addr v4, v5

    neg-float v8, v4

    .line 247
    :cond_6
    :goto_1
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v4}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$000(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Landroid/graphics/Matrix;

    move-result-object v4

    invoke-virtual {v4, v7, v8}, Landroid/graphics/Matrix;->postTranslate(FF)Z

    .line 248
    return-void
.end method


# virtual methods
.method public onDoubleTap(Landroid/view/MotionEvent;)Z
    .locals 1
    .param p1, "e"    # Landroid/view/MotionEvent;

    .line 282
    const/4 v0, 0x1

    return v0
.end method

.method public onDoubleTapEvent(Landroid/view/MotionEvent;)Z
    .locals 1
    .param p1, "e"    # Landroid/view/MotionEvent;

    .line 287
    const/4 v0, 0x1

    return v0
.end method

.method public onDown(Landroid/view/MotionEvent;)Z
    .locals 1
    .param p1, "e"    # Landroid/view/MotionEvent;

    .line 253
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->mScrollDirection:I

    .line 254
    const/4 v0, 0x1

    return v0
.end method

.method public onFling(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z
    .locals 1
    .param p1, "e1"    # Landroid/view/MotionEvent;
    .param p2, "e2"    # Landroid/view/MotionEvent;
    .param p3, "velocityX"    # F
    .param p4, "velocityY"    # F

    .line 272
    const/4 v0, 0x1

    return v0
.end method

.method public onLongPress(Landroid/view/MotionEvent;)V
    .locals 0
    .param p1, "e"    # Landroid/view/MotionEvent;

    .line 268
    return-void
.end method

.method public onScale(Landroid/view/ScaleGestureDetector;)Z
    .locals 7
    .param p1, "detector"    # Landroid/view/ScaleGestureDetector;

    .line 129
    invoke-virtual {p1}, Landroid/view/ScaleGestureDetector;->getScaleFactor()F

    move-result v0

    .line 131
    .local v0, "scale":F
    move v1, v0

    .line 132
    .local v1, "scaleX":F
    move v2, v0

    .line 134
    .local v2, "scaleY":F
    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->mScaleDirection:I

    const/4 v4, 0x2

    const/4 v5, 0x1

    if-nez v3, :cond_1

    .line 137
    invoke-virtual {p1}, Landroid/view/ScaleGestureDetector;->getCurrentSpanX()F

    move-result v3

    invoke-virtual {p1}, Landroid/view/ScaleGestureDetector;->getCurrentSpanY()F

    move-result v6

    cmpl-float v3, v3, v6

    if-lez v3, :cond_0

    .line 138
    iput v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->mScaleDirection:I

    goto :goto_0

    .line 140
    :cond_0
    iput v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->mScaleDirection:I

    .line 143
    :cond_1
    :goto_0
    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->mScaleDirection:I

    if-ne v3, v5, :cond_2

    .line 144
    const/high16 v2, 0x3f800000    # 1.0f

    .line 146
    :cond_2
    iget v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->mScaleDirection:I

    if-ne v3, v4, :cond_3

    .line 147
    const/high16 v1, 0x3f800000    # 1.0f

    .line 149
    :cond_3
    invoke-virtual {p1}, Landroid/view/ScaleGestureDetector;->getFocusX()F

    move-result v3

    invoke-virtual {p1}, Landroid/view/ScaleGestureDetector;->getFocusY()F

    move-result v4

    invoke-direct {p0, v1, v2, v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->doScale(FFFF)V

    .line 150
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->snapBack()V

    .line 152
    iget-object v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-virtual {v3}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->invalidate()V

    .line 153
    return v5
.end method

.method public onScaleBegin(Landroid/view/ScaleGestureDetector;)Z
    .locals 2
    .param p1, "detector"    # Landroid/view/ScaleGestureDetector;

    .line 166
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$102(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;Z)Z

    .line 167
    return v1
.end method

.method public onScaleEnd(Landroid/view/ScaleGestureDetector;)V
    .locals 2
    .param p1, "detector"    # Landroid/view/ScaleGestureDetector;

    .line 173
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$102(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;Z)Z

    .line 174
    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->mScaleDirection:I

    .line 175
    return-void
.end method

.method public onScroll(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z
    .locals 4
    .param p1, "e1"    # Landroid/view/MotionEvent;
    .param p2, "e2"    # Landroid/view/MotionEvent;
    .param p3, "distanceX"    # F
    .param p4, "distanceY"    # F

    .line 180
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-static {v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->access$100(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)Z

    move-result v0

    if-nez v0, :cond_4

    .line 182
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->mScrollDirection:I

    const/4 v1, 0x2

    const/4 v2, 0x1

    if-nez v0, :cond_1

    .line 185
    invoke-static {p3}, Ljava/lang/Math;->abs(F)F

    move-result v0

    invoke-static {p4}, Ljava/lang/Math;->abs(F)F

    move-result v3

    cmpl-float v0, v0, v3

    if-lez v0, :cond_0

    .line 186
    iput v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->mScrollDirection:I

    goto :goto_0

    .line 188
    :cond_0
    iput v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->mScrollDirection:I

    .line 191
    :cond_1
    :goto_0
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->mScrollDirection:I

    if-ne v0, v2, :cond_2

    .line 192
    const/4 p4, 0x0

    .line 194
    :cond_2
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->mScrollDirection:I

    if-ne v0, v1, :cond_3

    .line 195
    const/4 p3, 0x0

    .line 198
    :cond_3
    invoke-direct {p0, p3, p4}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->doTranslate(FF)V

    .line 199
    invoke-direct {p0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->snapBack()V

    .line 200
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$GestureListenerEx;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-virtual {v0}, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;->invalidate()V

    .line 201
    return v2

    .line 203
    :cond_4
    const/4 v0, 0x0

    return v0
.end method

.method public onShowPress(Landroid/view/MotionEvent;)V
    .locals 0
    .param p1, "e"    # Landroid/view/MotionEvent;

    .line 259
    return-void
.end method

.method public onSingleTapConfirmed(Landroid/view/MotionEvent;)Z
    .locals 1
    .param p1, "e"    # Landroid/view/MotionEvent;

    .line 277
    const/4 v0, 0x1

    return v0
.end method

.method public onSingleTapUp(Landroid/view/MotionEvent;)Z
    .locals 1
    .param p1, "e"    # Landroid/view/MotionEvent;

    .line 263
    const/4 v0, 0x1

    return v0
.end method
