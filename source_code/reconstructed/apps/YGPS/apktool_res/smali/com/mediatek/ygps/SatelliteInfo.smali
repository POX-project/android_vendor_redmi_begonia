.class public Lcom/mediatek/ygps/SatelliteInfo;
.super Ljava/lang/Object;
.source "SatelliteInfo.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;
    }
.end annotation


# static fields
.field private static sMapSystem:Ljava/util/LinkedHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field mAzimuth:F

.field mElevation:F

.field private mFq:Ljava/lang/String;

.field mPrn:I

.field mSnr:F

.field mSystem:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

.field mUsedInFix:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 50
    new-instance v0, Lcom/mediatek/ygps/SatelliteInfo$1;

    invoke-direct {v0}, Lcom/mediatek/ygps/SatelliteInfo$1;-><init>()V

    sput-object v0, Lcom/mediatek/ygps/SatelliteInfo;->sMapSystem:Ljava/util/LinkedHashMap;

    return-void
.end method

.method constructor <init>(ILcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;)V
    .locals 1

    .line 95
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 83
    iput-boolean v0, p0, Lcom/mediatek/ygps/SatelliteInfo;->mUsedInFix:Z

    const-string v0, "L1"

    .line 85
    iput-object v0, p0, Lcom/mediatek/ygps/SatelliteInfo;->mFq:Ljava/lang/String;

    .line 96
    iput p1, p0, Lcom/mediatek/ygps/SatelliteInfo;->mPrn:I

    .line 97
    iput-object p2, p0, Lcom/mediatek/ygps/SatelliteInfo;->mSystem:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    return-void
.end method

.method static getSystem(Ljava/lang/String;)Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;
    .locals 1

    .line 67
    sget-object v0, Lcom/mediatek/ygps/SatelliteInfo;->sMapSystem:Ljava/util/LinkedHashMap;

    invoke-virtual {v0, p0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    return-object p0
.end method

.method static getTalker()Ljava/util/Set;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 64
    sget-object v0, Lcom/mediatek/ygps/SatelliteInfo;->sMapSystem:Ljava/util/LinkedHashMap;

    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method getColor()I
    .locals 0

    .line 74
    iget-object p0, p0, Lcom/mediatek/ygps/SatelliteInfo;->mSystem:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    invoke-static {p0}, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->access$100(Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;)I

    move-result p0

    return p0
.end method

.method getFq()Ljava/lang/String;
    .locals 0

    .line 88
    iget-object p0, p0, Lcom/mediatek/ygps/SatelliteInfo;->mFq:Ljava/lang/String;

    return-object p0
.end method

.method getIcon()I
    .locals 0

    .line 70
    iget-object p0, p0, Lcom/mediatek/ygps/SatelliteInfo;->mSystem:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    invoke-static {p0}, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->access$000(Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;)I

    move-result p0

    return p0
.end method

.method getTag()Ljava/lang/String;
    .locals 2

    .line 77
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mediatek/ygps/SatelliteInfo;->mSystem:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    invoke-static {v1}, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->access$200(Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p0, p0, Lcom/mediatek/ygps/SatelliteInfo;->mPrn:I

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method setFq(Ljava/lang/String;)V
    .locals 0

    .line 92
    iput-object p1, p0, Lcom/mediatek/ygps/SatelliteInfo;->mFq:Ljava/lang/String;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    .line 151
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "["

    .line 152
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mediatek/ygps/SatelliteInfo;->mPrn:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 153
    iget v2, p0, Lcom/mediatek/ygps/SatelliteInfo;->mSnr:F

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 154
    iget-boolean p0, p0, Lcom/mediatek/ygps/SatelliteInfo;->mUsedInFix:Z

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string p0, "]"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 155
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
