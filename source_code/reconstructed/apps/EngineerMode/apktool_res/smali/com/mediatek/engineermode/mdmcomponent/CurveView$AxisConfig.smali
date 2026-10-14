.class public Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;
.super Ljava/lang/Object;
.source "CurveView.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/CurveView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "AxisConfig"
.end annotation


# static fields
.field static TYPE_AUTO_SCALE:I

.field static TYPE_NORMAL:I

.field static TYPE_TIME:I


# instance fields
.field base:J

.field configMax:Z

.field configMaxCount:Z

.field configMin:Z

.field configStep:Z

.field customLabel:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field fixedMax:Z

.field fixedMin:Z

.field fixedStep:Z

.field max:J

.field maxCount:J

.field min:J

.field step:J

.field type:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 377
    const/4 v0, 0x0

    sput v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->TYPE_NORMAL:I

    .line 378
    const/4 v0, 0x1

    sput v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->TYPE_TIME:I

    .line 379
    const/4 v0, 0x3

    sput v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->TYPE_AUTO_SCALE:I

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 376
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 386
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$AxisConfig;->configMaxCount:Z

    return-void
.end method
