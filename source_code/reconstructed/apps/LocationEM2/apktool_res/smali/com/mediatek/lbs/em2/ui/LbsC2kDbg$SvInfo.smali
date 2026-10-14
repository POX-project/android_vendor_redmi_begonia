.class public Lcom/mediatek/lbs/em2/ui/LbsC2kDbg$SvInfo;
.super Ljava/lang/Object;
.source "LbsC2kDbg.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "SvInfo"
.end annotation


# instance fields
.field mIndex:I

.field mPs_doppler:F

.field mSv_cno:I

.field mSv_code_ph:F

.field mSv_prn_num:I


# direct methods
.method public constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsC2kDbg;)V
    .locals 0

    .line 96
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
