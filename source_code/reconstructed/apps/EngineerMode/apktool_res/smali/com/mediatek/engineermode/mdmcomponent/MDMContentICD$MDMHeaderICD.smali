.class public Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD$MDMHeaderICD;
.super Ljava/lang/Object;
.source "MDMContentICD.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/engineermode/mdmcomponent/MDMContentICD;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "MDMHeaderICD"
.end annotation


# instance fields
.field check_sum:I

.field msg_id:I

.field protocol_id:I

.field reserved:I

.field timeStamp:I

.field timestamp_type:I

.field total_size:I

.field type:I

.field version:I


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 79
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
