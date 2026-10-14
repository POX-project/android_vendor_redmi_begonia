.class public Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;
.super Ljava/lang/Object;
.source "CurveView.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/CurveView;
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


# instance fields
.field color:I

.field lineType:I

.field lineWidth:I

.field name:Ljava/lang/String;

.field newLineThreadshold:I

.field nodeType:I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 408
    const/4 v0, 0x0

    sput v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CIRCLE:I

    .line 409
    const/4 v1, 0x1

    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->TYPE_CROSS:I

    .line 410
    sput v0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->LINE_SOLID:I

    .line 411
    sput v1, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->LINE_DASH:I

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 407
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 415
    const v0, -0xffff01

    iput v0, p0, Lcom/mediatek/engineermode/mdmcomponent/CurveView$Config;->color:I

    return-void
.end method
