.class Lcom/mediatek/ygps/SatelliteInfoManager$1;
.super Ljava/lang/Object;
.source "SatelliteInfoManager.java"

# interfaces
.implements Ljava/util/Comparator;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mediatek/ygps/SatelliteInfoManager;->updateSatelliteInfo(Lcom/mediatek/ygps/NmeaParser;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Ljava/util/Comparator<",
        "Lcom/mediatek/ygps/SatelliteInfo;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>(Lcom/mediatek/ygps/SatelliteInfoManager;)V
    .locals 0

    .line 118
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public compare(Lcom/mediatek/ygps/SatelliteInfo;Lcom/mediatek/ygps/SatelliteInfo;)I
    .locals 0

    .line 122
    iget p0, p1, Lcom/mediatek/ygps/SatelliteInfo;->mPrn:I

    iget p1, p2, Lcom/mediatek/ygps/SatelliteInfo;->mPrn:I

    sub-int/2addr p0, p1

    return p0
.end method

.method public bridge synthetic compare(Ljava/lang/Object;Ljava/lang/Object;)I
    .locals 0

    .line 118
    check-cast p1, Lcom/mediatek/ygps/SatelliteInfo;

    check-cast p2, Lcom/mediatek/ygps/SatelliteInfo;

    invoke-virtual {p0, p1, p2}, Lcom/mediatek/ygps/SatelliteInfoManager$1;->compare(Lcom/mediatek/ygps/SatelliteInfo;Lcom/mediatek/ygps/SatelliteInfo;)I

    move-result p0

    return p0
.end method
