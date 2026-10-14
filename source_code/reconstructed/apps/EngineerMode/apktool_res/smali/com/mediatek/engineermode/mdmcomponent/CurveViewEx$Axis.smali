.class Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;
.super Ljava/lang/Object;
.source "CurveViewEx.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "Axis"
.end annotation


# instance fields
.field base:J

.field count:J

.field max:J

.field min:J

.field step:J

.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    .line 302
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 304
    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->min:J

    .line 305
    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->max:J

    .line 306
    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->step:J

    .line 307
    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->count:J

    return-void
.end method


# virtual methods
.method set(FFLcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;)V
    .locals 6
    .param p1, "dataMin"    # F
    .param p2, "dataMax"    # F
    .param p3, "config"    # Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    .line 311
    iget-boolean v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->configMin:Z

    if-eqz v0, :cond_1

    .line 312
    iget-boolean v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->fixedMin:Z

    if-eqz v0, :cond_0

    .line 313
    iget-wide v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->min:J

    long-to-float p1, v0

    goto :goto_0

    .line 315
    :cond_0
    iget-wide v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->min:J

    long-to-float v0, v0

    invoke-static {v0, p1}, Ljava/lang/Math;->min(FF)F

    move-result p1

    .line 318
    :cond_1
    :goto_0
    iget-boolean v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->configMax:Z

    if-eqz v0, :cond_3

    .line 319
    iget-boolean v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->fixedMax:Z

    if-eqz v0, :cond_2

    .line 320
    iget-wide v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->max:J

    long-to-float p2, v0

    goto :goto_1

    .line 322
    :cond_2
    iget-wide v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->max:J

    long-to-float v0, v0

    invoke-static {v0, p2}, Ljava/lang/Math;->max(FF)F

    move-result p2

    .line 325
    :cond_3
    :goto_1
    iget-boolean v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->configStep:Z

    if-eqz v0, :cond_4

    .line 326
    iget-wide v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->step:J

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->step:J

    .line 327
    long-to-float v0, v0

    div-float v0, p1, v0

    float-to-double v0, v0

    invoke-static {v0, v1}, Ljava/lang/Math;->floor(D)D

    move-result-wide v0

    double-to-long v0, v0

    iget-wide v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->step:J

    mul-long/2addr v0, v2

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->min:J

    .line 328
    long-to-float v0, v2

    div-float v0, p2, v0

    float-to-double v0, v0

    invoke-static {v0, v1}, Ljava/lang/Math;->ceil(D)D

    move-result-wide v0

    double-to-long v0, v0

    iget-wide v2, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->step:J

    mul-long/2addr v0, v2

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->max:J

    .line 329
    iget-wide v4, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->min:J

    sub-long/2addr v0, v4

    div-long/2addr v0, v2

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->count:J

    .line 331
    :cond_4
    iget-wide v0, p3, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->base:J

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->base:J

    .line 332
    return-void
.end method
