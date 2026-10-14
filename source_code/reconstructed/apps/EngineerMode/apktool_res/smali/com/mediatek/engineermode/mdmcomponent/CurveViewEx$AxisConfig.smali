.class public Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;
.super Ljava/lang/Object;
.source "CurveViewEx.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "AxisConfig"
.end annotation


# static fields
.field static TYPE_NORMAL:I

.field static TYPE_TIME:I


# instance fields
.field base:J

.field configMax:Z

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

.field min:J

.field step:J

.field type:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 360
    const/4 v0, 0x0

    sput v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->TYPE_NORMAL:I

    .line 361
    const/4 v0, 0x1

    sput v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$AxisConfig;->TYPE_TIME:I

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 359
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
