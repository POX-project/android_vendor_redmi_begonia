.class Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;
.super Ljava/lang/Object;
.source "CurveView.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/CurveView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "Axis"
.end annotation


# instance fields
.field base:J

.field count:J

.field lastMax:J

.field max:J

.field min:J

.field step:J

.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveView;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/CurveView;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    .line 258
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 260
    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->min:J

    .line 261
    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->max:J

    .line 262
    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->step:J

    .line 263
    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->count:J

    .line 264
    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->lastMax:J

    return-void
.end method


# virtual methods
.method set(FFLcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;)V
    .locals 8
    .param p1, "dataMin"    # F
    .param p2, "dataMax"    # F
    .param p3, "config"    # Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;

    .line 268
    iget-boolean v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMin:Z

    if-eqz v0, :cond_1

    .line 269
    iget-boolean v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->fixedMin:Z

    if-eqz v0, :cond_0

    .line 270
    iget-wide v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->min:J

    long-to-float p1, v0

    goto :goto_0

    .line 272
    :cond_0
    iget-wide v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->min:J

    long-to-float v0, v0

    invoke-static {v0, p1}, Ljava/lang/Math;->min(FF)F

    move-result p1

    .line 275
    :cond_1
    :goto_0
    iget-boolean v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMax:Z

    if-eqz v0, :cond_3

    .line 276
    iget-boolean v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->fixedMax:Z

    if-eqz v0, :cond_2

    .line 277
    iget-wide v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->max:J

    long-to-float p2, v0

    goto :goto_1

    .line 279
    :cond_2
    iget-wide v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->max:J

    long-to-float v0, v0

    invoke-static {v0, p2}, Ljava/lang/Math;->max(FF)F

    move-result p2

    .line 282
    :cond_3
    :goto_1
    iget-boolean v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configStep:Z

    if-eqz v0, :cond_4

    .line 283
    iget-wide v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->step:J

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->step:J

    .line 284
    long-to-float v0, v0

    div-float v0, p1, v0

    float-to-double v0, v0

    invoke-static {v0, v1}, Ljava/lang/Math;->floor(D)D

    move-result-wide v0

    double-to-long v0, v0

    iget-wide v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->step:J

    mul-long/2addr v0, v2

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->min:J

    .line 285
    long-to-float v0, v2

    div-float v0, p2, v0

    float-to-double v0, v0

    invoke-static {v0, v1}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v0

    double-to-long v0, v0

    iget-wide v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->step:J

    mul-long/2addr v0, v2

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->max:J

    .line 286
    iget-wide v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->min:J

    sub-long/2addr v0, v4

    div-long/2addr v0, v2

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->count:J

    .line 287
    iget-boolean v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMaxCount:Z

    if-eqz v0, :cond_6

    iget-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->count:J

    iget-wide v2, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->maxCount:J

    cmp-long v0, v0, v2

    if-lez v0, :cond_6

    .line 288
    :goto_2
    iget-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->count:J

    iget-wide v2, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->maxCount:J

    cmp-long v0, v0, v2

    if-lez v0, :cond_6

    .line 289
    iget-object v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    iget-wide v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->step:J

    invoke-static {v0, v1, v2}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->access$400(Lcom/mediatek/engineermode/mdmcomponent/CurveView;J)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->step:J

    .line 290
    long-to-float v0, v0

    div-float v0, p1, v0

    float-to-double v0, v0

    invoke-static {v0, v1}, Ljava/lang/Math;->floor(D)D

    move-result-wide v0

    double-to-long v0, v0

    iget-wide v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->step:J

    mul-long/2addr v0, v2

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->min:J

    .line 291
    long-to-float v0, v2

    div-float v0, p2, v0

    float-to-double v0, v0

    invoke-static {v0, v1}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v0

    double-to-long v0, v0

    iget-wide v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->step:J

    mul-long/2addr v0, v2

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->max:J

    .line 292
    iget-wide v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->min:J

    sub-long/2addr v0, v4

    div-long/2addr v0, v2

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->count:J

    goto :goto_2

    .line 296
    :cond_4
    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->step:J

    .line 297
    const-wide/16 v2, 0x15

    iput-wide v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->count:J

    .line 298
    :goto_3
    iget-wide v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->count:J

    const-wide/16 v4, 0x14

    cmp-long v4, v2, v4

    if-lez v4, :cond_5

    .line 299
    iget-object v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveView;

    iget-wide v3, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->step:J

    invoke-static {v2, v3, v4}, Lcom/mediatek/engineermode/mdmcomponent/CurveView;->access$400(Lcom/mediatek/engineermode/mdmcomponent/CurveView;J)J

    move-result-wide v2

    iput-wide v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->step:J

    .line 300
    long-to-float v2, v2

    div-float v2, p1, v2

    float-to-double v2, v2

    invoke-static {v2, v3}, Ljava/lang/Math;->floor(D)D

    move-result-wide v2

    double-to-long v2, v2

    iget-wide v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->step:J

    mul-long/2addr v2, v4

    iput-wide v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->min:J

    .line 301
    long-to-float v2, v4

    div-float v2, p2, v2

    float-to-double v2, v2

    invoke-static {v2, v3}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v2

    double-to-long v2, v2

    iget-wide v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->step:J

    mul-long/2addr v2, v4

    iput-wide v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->max:J

    .line 302
    iget-wide v6, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->min:J

    sub-long/2addr v2, v6

    div-long/2addr v2, v4

    iput-wide v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->count:J

    goto :goto_3

    .line 304
    :cond_5
    cmp-long v0, v2, v0

    if-nez v0, :cond_6

    .line 305
    const-wide/16 v0, 0x1

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->count:J

    .line 306
    iget-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->max:J

    iget-wide v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->step:J

    sub-long/2addr v0, v2

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->min:J

    .line 309
    :cond_6
    iget-wide v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->base:J

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->base:J

    .line 310
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "[CurveView][Axis][set] min: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->min:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, " max: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->max:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, " step: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->step:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, " count: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Axis;->count:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "EmInfo/CurveView"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 312
    return-void
.end method
