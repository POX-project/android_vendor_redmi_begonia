.class Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;
.super Ljava/lang/Object;
.source "CurveView.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/CurveView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "AxisLabel"
.end annotation


# instance fields
.field count:J

.field max:J

.field min:J

.field step:J

.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

.field type:I


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    .line 318
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 319
    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->min:J

    .line 320
    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->max:J

    .line 321
    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->step:J

    .line 322
    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->count:J

    return-void
.end method


# virtual methods
.method set(Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;)V
    .locals 10
    .param p1, "axis"    # Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;
    .param p2, "config"    # Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    .line 326
    iget-wide v0, p1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->step:J

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->step:J

    .line 327
    iget-wide v0, p1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->min:J

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->min:J

    .line 328
    iget-wide v0, p1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->max:J

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->max:J

    .line 329
    iget-wide v0, p1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->count:J

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->count:J

    .line 330
    iget v0, p2, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->type:I

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->type:I

    .line 332
    sget v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->TYPE_TIME:I

    const/4 v2, 0x0

    if-ne v0, v1, :cond_1

    .line 333
    const/4 v0, 0x0

    .line 334
    .local v0, "maxWidth":I
    const-string v1, "HH:mm:ss"

    .line 335
    .local v1, "str":Ljava/lang/String;
    new-instance v3, Landroid/graphics/Rect;

    invoke-direct {v3}, Landroid/graphics/Rect;-><init>()V

    .line 336
    .local v3, "rect":Landroid/graphics/Rect;
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    invoke-static {v4}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->access$500(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)Landroid/graphics/Paint;

    move-result-object v4

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v5

    invoke-virtual {v4, v1, v2, v5, v3}, Landroid/graphics/Paint;->getTextBounds(Ljava/lang/String;IILandroid/graphics/Rect;)V

    .line 337
    invoke-virtual {v3}, Landroid/graphics/Rect;->width()I

    move-result v4

    mul-int/lit8 v4, v4, 0x2

    if-le v4, v0, :cond_0

    .line 338
    invoke-virtual {v3}, Landroid/graphics/Rect;->width()I

    move-result v4

    mul-int/lit8 v0, v4, 0x2

    .line 341
    :cond_0
    :goto_0
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    invoke-static {v4}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->access$000(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)Landroid/graphics/RectF;

    move-result-object v4

    invoke-virtual {v4}, Landroid/graphics/RectF;->width()F

    move-result v4

    iget-wide v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->count:J

    long-to-float v5, v5

    div-float/2addr v4, v5

    int-to-float v5, v0

    cmpg-float v4, v4, v5

    if-gez v4, :cond_1

    .line 343
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    iget-wide v5, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->step:J

    invoke-static {v4, v5, v6}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->access$400(Lcom/mediatek/engineermode/mdmcomponent/CurveView;J)J

    move-result-wide v4

    iput-wide v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->step:J

    .line 344
    iget-wide v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->min:J

    div-long/2addr v6, v4

    long-to-double v4, v6

    invoke-static {v4, v5}, Ljava/lang/Math;->floor(D)D

    move-result-wide v4

    double-to-long v4, v4

    iget-wide v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->step:J

    mul-long/2addr v4, v6

    iput-wide v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->min:J

    .line 345
    iget-wide v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->max:J

    div-long/2addr v4, v6

    long-to-double v4, v4

    invoke-static {v4, v5}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v4

    double-to-long v4, v4

    iget-wide v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->step:J

    mul-long/2addr v4, v6

    iput-wide v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->max:J

    .line 346
    iget-wide v8, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->min:J

    sub-long/2addr v4, v8

    div-long/2addr v4, v6

    iput-wide v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->count:J

    goto :goto_0

    .line 349
    .end local v0    # "maxWidth":I
    .end local v1    # "str":Ljava/lang/String;
    .end local v3    # "rect":Landroid/graphics/Rect;
    :cond_1
    iget v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->type:I

    sget v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->TYPE_AUTO_SCALE:I

    if-ne v0, v1, :cond_3

    .line 350
    const/4 v0, 0x0

    .line 351
    .local v0, "maxHeight":I
    const-string v1, "100000"

    .line 352
    .restart local v1    # "str":Ljava/lang/String;
    new-instance v3, Landroid/graphics/Rect;

    invoke-direct {v3}, Landroid/graphics/Rect;-><init>()V

    .line 353
    .restart local v3    # "rect":Landroid/graphics/Rect;
    iget-object v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    invoke-static {v4}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->access$500(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)Landroid/graphics/Paint;

    move-result-object v4

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v5

    invoke-virtual {v4, v1, v2, v5, v3}, Landroid/graphics/Paint;->getTextBounds(Ljava/lang/String;IILandroid/graphics/Rect;)V

    .line 354
    invoke-virtual {v3}, Landroid/graphics/Rect;->height()I

    move-result v2

    mul-int/lit8 v2, v2, 0x5

    if-le v2, v0, :cond_2

    .line 355
    invoke-virtual {v3}, Landroid/graphics/Rect;->height()I

    move-result v2

    mul-int/lit8 v0, v2, 0x5

    .line 357
    :cond_2
    :goto_1
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    invoke-static {v2}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->access$000(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)Landroid/graphics/RectF;

    move-result-object v2

    invoke-virtual {v2}, Landroid/graphics/RectF;->height()F

    move-result v2

    iget-wide v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->count:J

    long-to-float v4, v4

    div-float/2addr v2, v4

    int-to-float v4, v0

    cmpg-float v2, v2, v4

    if-gez v2, :cond_3

    .line 359
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    iget-wide v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->step:J

    invoke-static {v2, v4, v5}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->access$400(Lcom/mediatek/engineermode/mdmcomponent/CurveView;J)J

    move-result-wide v4

    iput-wide v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->step:J

    .line 360
    iget-wide v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->min:J

    div-long/2addr v6, v4

    long-to-double v4, v6

    invoke-static {v4, v5}, Ljava/lang/Math;->floor(D)D

    move-result-wide v4

    double-to-long v4, v4

    iget-wide v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->step:J

    mul-long/2addr v4, v6

    iput-wide v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->min:J

    .line 361
    iget-wide v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->max:J

    div-long/2addr v4, v6

    long-to-double v4, v4

    invoke-static {v4, v5}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v4

    double-to-long v4, v4

    iget-wide v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->step:J

    mul-long/2addr v4, v6

    iput-wide v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->max:J

    .line 362
    iget-wide v8, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->min:J

    sub-long/2addr v4, v8

    div-long/2addr v4, v6

    iput-wide v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->count:J

    goto :goto_1

    .line 365
    .end local v0    # "maxHeight":I
    .end local v1    # "str":Ljava/lang/String;
    .end local v3    # "rect":Landroid/graphics/Rect;
    :cond_3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[CurveView][AxisLabel][set] minAxisLabel: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->min:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, " maxAxisLabel: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->max:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, " step: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->step:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, " count: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisLabel;->count:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "EmInfo/CurveView"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 368
    return-void
.end method
