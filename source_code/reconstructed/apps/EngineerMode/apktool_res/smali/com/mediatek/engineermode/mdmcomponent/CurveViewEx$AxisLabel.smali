.class Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;
.super Ljava/lang/Object;
.source "CurveViewEx.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;
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

.field final synthetic this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

.field type:I


# direct methods
.method constructor <init>(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;)V
    .locals 2
    .param p1, "this$0"    # Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    .line 338
    iput-object p1, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->this$0:Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 339
    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->min:J

    .line 340
    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->max:J

    .line 341
    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->step:J

    .line 342
    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->count:J

    return-void
.end method


# virtual methods
.method set(Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;)V
    .locals 2
    .param p1, "axis"    # Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;
    .param p2, "config"    # Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;

    .line 346
    iget-wide v0, p1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->step:J

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->step:J

    .line 347
    iget-wide v0, p1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->min:J

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->min:J

    .line 348
    iget-wide v0, p1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->max:J

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->max:J

    .line 349
    iget-wide v0, p1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Axis;->count:J

    iput-wide v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->count:J

    .line 350
    iget v0, p2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->type:I

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisLabel;->type:I

    .line 351
    return-void
.end method
