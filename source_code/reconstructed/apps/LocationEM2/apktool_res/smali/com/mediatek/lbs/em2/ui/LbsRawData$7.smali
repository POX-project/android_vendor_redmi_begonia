.class Lcom/mediatek/lbs/em2/ui/LbsRawData$7;
.super Ljava/lang/Object;
.source "LbsRawData.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/lbs/em2/ui/LbsRawData;->initUI()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;


# direct methods
.method constructor <init>(Lcom/mediatek/lbs/em2/ui/LbsRawData;)V
    .locals 0

    .line 247
    iput-object p1, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 4

    .line 250
    new-instance p1, Landroid/location/GnssReflectingPlane$Builder;

    invoke-direct {p1}, Landroid/location/GnssReflectingPlane$Builder;-><init>()V

    const-wide v0, 0x4042b604394aa469L    # 37.4220039

    .line 251
    invoke-virtual {p1, v0, v1}, Landroid/location/GnssReflectingPlane$Builder;->setLatitudeDegrees(D)Landroid/location/GnssReflectingPlane$Builder;

    move-result-object p1

    const-wide v0, -0x3fa17a9e1ecef820L    # -122.0840991

    .line 252
    invoke-virtual {p1, v0, v1}, Landroid/location/GnssReflectingPlane$Builder;->setLongitudeDegrees(D)Landroid/location/GnssReflectingPlane$Builder;

    move-result-object p1

    const-wide v0, 0x406f4b3333333333L    # 250.35

    .line 253
    invoke-virtual {p1, v0, v1}, Landroid/location/GnssReflectingPlane$Builder;->setAltitudeMeters(D)Landroid/location/GnssReflectingPlane$Builder;

    move-result-object p1

    const-wide v0, 0x4069600000000000L    # 203.0

    .line 254
    invoke-virtual {p1, v0, v1}, Landroid/location/GnssReflectingPlane$Builder;->setAzimuthDegrees(D)Landroid/location/GnssReflectingPlane$Builder;

    move-result-object p1

    .line 255
    invoke-virtual {p1}, Landroid/location/GnssReflectingPlane$Builder;->build()Landroid/location/GnssReflectingPlane;

    move-result-object p1

    .line 257
    new-instance v0, Landroid/location/GnssSingleSatCorrection$Builder;

    invoke-direct {v0}, Landroid/location/GnssSingleSatCorrection$Builder;-><init>()V

    const/4 v1, 0x1

    .line 258
    invoke-virtual {v0, v1}, Landroid/location/GnssSingleSatCorrection$Builder;->setConstellationType(I)Landroid/location/GnssSingleSatCorrection$Builder;

    move-result-object v0

    const/16 v2, 0xc

    .line 259
    invoke-virtual {v0, v2}, Landroid/location/GnssSingleSatCorrection$Builder;->setSatelliteId(I)Landroid/location/GnssSingleSatCorrection$Builder;

    move-result-object v0

    const v2, 0x4ebeb47f

    .line 260
    invoke-virtual {v0, v2}, Landroid/location/GnssSingleSatCorrection$Builder;->setCarrierFrequencyHz(F)Landroid/location/GnssSingleSatCorrection$Builder;

    move-result-object v0

    const v3, 0x3f0000a8    # 0.50001f

    .line 261
    invoke-virtual {v0, v3}, Landroid/location/GnssSingleSatCorrection$Builder;->setProbabilityLineOfSight(F)Landroid/location/GnssSingleSatCorrection$Builder;

    move-result-object v0

    const v3, 0x43097aee

    .line 262
    invoke-virtual {v0, v3}, Landroid/location/GnssSingleSatCorrection$Builder;->setExcessPathLengthMeters(F)Landroid/location/GnssSingleSatCorrection$Builder;

    move-result-object v0

    const/high16 v3, 0x41cc0000    # 25.5f

    .line 263
    invoke-virtual {v0, v3}, Landroid/location/GnssSingleSatCorrection$Builder;->setExcessPathLengthUncertaintyMeters(F)Landroid/location/GnssSingleSatCorrection$Builder;

    move-result-object v0

    .line 264
    invoke-virtual {v0, p1}, Landroid/location/GnssSingleSatCorrection$Builder;->setReflectingPlane(Landroid/location/GnssReflectingPlane;)Landroid/location/GnssSingleSatCorrection$Builder;

    move-result-object p1

    .line 265
    invoke-virtual {p1}, Landroid/location/GnssSingleSatCorrection$Builder;->build()Landroid/location/GnssSingleSatCorrection;

    move-result-object p1

    .line 267
    new-instance v0, Landroid/location/GnssSingleSatCorrection$Builder;

    invoke-direct {v0}, Landroid/location/GnssSingleSatCorrection$Builder;-><init>()V

    .line 268
    invoke-virtual {v0, v1}, Landroid/location/GnssSingleSatCorrection$Builder;->setConstellationType(I)Landroid/location/GnssSingleSatCorrection$Builder;

    move-result-object v0

    const/16 v1, 0x9

    .line 269
    invoke-virtual {v0, v1}, Landroid/location/GnssSingleSatCorrection$Builder;->setSatelliteId(I)Landroid/location/GnssSingleSatCorrection$Builder;

    move-result-object v0

    .line 270
    invoke-virtual {v0, v2}, Landroid/location/GnssSingleSatCorrection$Builder;->setCarrierFrequencyHz(F)Landroid/location/GnssSingleSatCorrection$Builder;

    move-result-object v0

    const v1, 0x3f5f7cee    # 0.873f

    .line 271
    invoke-virtual {v0, v1}, Landroid/location/GnssSingleSatCorrection$Builder;->setProbabilityLineOfSight(F)Landroid/location/GnssSingleSatCorrection$Builder;

    move-result-object v0

    const v1, 0x41d25a1d    # 26.294f

    .line 272
    invoke-virtual {v0, v1}, Landroid/location/GnssSingleSatCorrection$Builder;->setExcessPathLengthMeters(F)Landroid/location/GnssSingleSatCorrection$Builder;

    move-result-object v0

    const/high16 v1, 0x41200000    # 10.0f

    .line 273
    invoke-virtual {v0, v1}, Landroid/location/GnssSingleSatCorrection$Builder;->setExcessPathLengthUncertaintyMeters(F)Landroid/location/GnssSingleSatCorrection$Builder;

    move-result-object v0

    .line 274
    invoke-virtual {v0}, Landroid/location/GnssSingleSatCorrection$Builder;->build()Landroid/location/GnssSingleSatCorrection;

    move-result-object v0

    .line 276
    new-instance v1, Ljava/util/ArrayList;

    const/4 v2, 0x2

    invoke-direct {v1, v2}, Ljava/util/ArrayList;-><init>(I)V

    .line 278
    invoke-virtual {v1, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 279
    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 281
    new-instance p1, Landroid/location/GnssMeasurementCorrections$Builder;

    invoke-direct {p1}, Landroid/location/GnssMeasurementCorrections$Builder;-><init>()V

    const-wide v2, 0x4042b60420000000L    # 37.422000885009766

    .line 282
    invoke-virtual {p1, v2, v3}, Landroid/location/GnssMeasurementCorrections$Builder;->setLatitudeDegrees(D)Landroid/location/GnssMeasurementCorrections$Builder;

    move-result-object p1

    const-wide v2, -0x3fa17a9ec0000000L    # -122.08406066894531

    .line 283
    invoke-virtual {p1, v2, v3}, Landroid/location/GnssMeasurementCorrections$Builder;->setLongitudeDegrees(D)Landroid/location/GnssMeasurementCorrections$Builder;

    move-result-object p1

    const-wide v2, 0x403e99c2a0000000L    # 30.60062599182129

    .line 284
    invoke-virtual {p1, v2, v3}, Landroid/location/GnssMeasurementCorrections$Builder;->setAltitudeMeters(D)Landroid/location/GnssMeasurementCorrections$Builder;

    move-result-object p1

    const-wide v2, 0x4022788900000000L    # 9.235420227050781

    .line 285
    invoke-virtual {p1, v2, v3}, Landroid/location/GnssMeasurementCorrections$Builder;->setHorizontalPositionUncertaintyMeters(D)Landroid/location/GnssMeasurementCorrections$Builder;

    move-result-object p1

    const-wide v2, 0x402e0bfc60000000L    # 15.023409843444824

    .line 286
    invoke-virtual {p1, v2, v3}, Landroid/location/GnssMeasurementCorrections$Builder;->setVerticalPositionUncertaintyMeters(D)Landroid/location/GnssMeasurementCorrections$Builder;

    move-result-object p1

    const-wide v2, 0xaefa362dL

    .line 287
    invoke-virtual {p1, v2, v3}, Landroid/location/GnssMeasurementCorrections$Builder;->setToaGpsNanosecondsOfWeek(J)Landroid/location/GnssMeasurementCorrections$Builder;

    move-result-object p1

    .line 288
    invoke-virtual {p1, v1}, Landroid/location/GnssMeasurementCorrections$Builder;->setSingleSatelliteCorrectionList(Ljava/util/List;)Landroid/location/GnssMeasurementCorrections$Builder;

    move-result-object p1

    .line 289
    invoke-virtual {p1}, Landroid/location/GnssMeasurementCorrections$Builder;->build()Landroid/location/GnssMeasurementCorrections;

    move-result-object p1

    .line 290
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/LbsRawData$7;->this$0:Lcom/mediatek/lbs/em2/ui/LbsRawData;

    invoke-static {p0}, Lcom/mediatek/lbs/em2/ui/LbsRawData;->access$1000(Lcom/mediatek/lbs/em2/ui/LbsRawData;)Landroid/location/LocationManager;

    move-result-object p0

    invoke-virtual {p0, p1}, Landroid/location/LocationManager;->injectGnssMeasurementCorrections(Landroid/location/GnssMeasurementCorrections;)V

    return-void
.end method
