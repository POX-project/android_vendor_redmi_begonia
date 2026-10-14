.class Lcom/mediatek/ygps/SatelliteInfo$1;
.super Ljava/util/LinkedHashMap;
.source "SatelliteInfo.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/ygps/SatelliteInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/util/LinkedHashMap<",
        "Ljava/lang/String;",
        "Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;",
        ">;"
    }
.end annotation


# direct methods
.method constructor <init>()V
    .locals 2

    .line 50
    invoke-direct {p0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 52
    sget-object v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_GP:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const-string v1, "$GP"

    invoke-virtual {p0, v1, v0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 53
    sget-object v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_GL:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const-string v1, "$GL"

    invoke-virtual {p0, v1, v0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 54
    sget-object v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_BD:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const-string v1, "$BD"

    invoke-virtual {p0, v1, v0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 55
    sget-object v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_GA:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const-string v1, "$GA"

    invoke-virtual {p0, v1, v0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 56
    sget-object v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_QZ:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const-string v1, "$QZ"

    invoke-virtual {p0, v1, v0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 57
    sget-object v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_L1S:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const-string v1, "$L1S"

    invoke-virtual {p0, v1, v0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 58
    sget-object v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_IR:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const-string v1, "$IR"

    invoke-virtual {p0, v1, v0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 59
    sget-object v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_SBAS:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const-string v1, "$GP_SBAS"

    invoke-virtual {p0, v1, v0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method
