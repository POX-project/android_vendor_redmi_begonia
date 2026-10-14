.class public Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;
.super Ljava/lang/Object;
.source "CurveViewEx.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "Config"
.end annotation


# static fields
.field static LINE_DASH:I

.field static LINE_SOLID:I

.field static TYPE_CIRCLE:I

.field static TYPE_CROSS:I

.field static TYPE_NONE:I

.field static TYPE_RHOMBUS:I

.field static TYPE_SQUARE:I

.field static TYPE_TRIANGLE:I


# instance fields
.field color:I

.field lineType:I

.field lineWidth:I

.field name:Ljava/lang/String;

.field newLineThreadshold:I

.field nodeType:I


# direct methods
.method static constructor <clinit>()V
    .locals 3

    .line 388
    const/4 v0, 0x0

    sput v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_CIRCLE:I

    .line 389
    const/4 v1, 0x1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_CROSS:I

    .line 390
    const/4 v2, 0x2

    sput v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_RHOMBUS:I

    .line 391
    const/4 v2, 0x3

    sput v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_SQUARE:I

    .line 392
    const/4 v2, 0x4

    sput v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_TRIANGLE:I

    .line 393
    const/4 v2, 0x5

    sput v2, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->TYPE_NONE:I

    .line 394
    sput v0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->LINE_SOLID:I

    .line 395
    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->LINE_DASH:I

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 387
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 399
    const v0, -0xffff01

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveViewEx$Config;->color:I

    return-void
.end method
