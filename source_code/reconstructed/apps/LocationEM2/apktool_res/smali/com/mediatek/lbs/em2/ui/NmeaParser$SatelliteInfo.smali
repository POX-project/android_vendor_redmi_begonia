.class Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;
.super Ljava/lang/Object;
.source "NmeaParser.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/lbs/em2/ui/NmeaParser;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "SatelliteInfo"
.end annotation


# instance fields
.field mAzimuth:F

.field mColor:I

.field mElevation:F

.field mPrn:I

.field mSnr:F

.field mUsedInFix:Z


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/NmeaParser;II)V
    .locals 0

    .line 646
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 p1, 0x0

    .line 640
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mSnr:F

    .line 641
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mElevation:F

    .line 642
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mAzimuth:F

    const/4 p1, 0x0

    .line 643
    iput-boolean p1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mUsedInFix:Z

    const/4 p1, -0x1

    .line 644
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mColor:I

    .line 647
    iput p2, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mPrn:I

    .line 648
    iput p3, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mColor:I

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 3

    .line 652
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "["

    .line 653
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mPrn:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 654
    iget v2, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mSnr:F

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 655
    iget v2, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mElevation:F

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 656
    iget v2, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mAzimuth:F

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 657
    iget-boolean p0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mUsedInFix:Z

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p0, "]"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 658
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
