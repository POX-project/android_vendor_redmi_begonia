.class Lcom/mediatek/mdml/OffsetAndSize;
.super Ljava/lang/Object;
.source "OffsetAndSize.java"


# instance fields
.field offset:I

.field size:I


# direct methods
.method constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method clear()V
    .locals 1

    .line 13
    const/4 v0, 0x0

    iput v0, p0, Lcom/mediatek/mdml/OffsetAndSize;->offset:I

    .line 14
    iput v0, p0, Lcom/mediatek/mdml/OffsetAndSize;->size:I

    .line 15
    return-void
.end method
