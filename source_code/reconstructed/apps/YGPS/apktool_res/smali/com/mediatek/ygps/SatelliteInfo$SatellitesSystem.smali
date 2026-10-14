.class final enum Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;
.super Ljava/lang/Enum;
.source "SatelliteInfo.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mediatek/ygps/SatelliteInfo;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4018
    name = "SatellitesSystem"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

.field public static final enum SYS_BD:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

.field public static final enum SYS_GA:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

.field public static final enum SYS_GL:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

.field public static final enum SYS_GP:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

.field public static final enum SYS_IR:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

.field public static final enum SYS_L1S:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

.field public static final enum SYS_QZ:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

.field public static final enum SYS_SBAS:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;


# instance fields
.field private mAveL1Cnr:F

.field private mAveL5Cnr:F

.field private mColor:I

.field private mIcon:I

.field private mName:Ljava/lang/String;

.field private mTag:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 15

    .line 101
    new-instance v7, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const-string v1, "SYS_GP"

    const/4 v2, 0x0

    const v3, -0xff0001

    const v4, 0x7f040004

    const-string v5, "G"

    const-string v6, "GPS"

    move-object v0, v7

    invoke-direct/range {v0 .. v6}, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;-><init>(Ljava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V

    sput-object v7, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_GP:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    .line 102
    new-instance v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const-string v9, "SYS_GL"

    const/4 v10, 0x1

    const/16 v11, -0x100

    const v12, 0x7f040003

    const-string v13, "R"

    const-string v14, "GLN"

    move-object v8, v0

    invoke-direct/range {v8 .. v14}, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;-><init>(Ljava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_GL:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    .line 103
    new-instance v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const-string v2, "SYS_GA"

    const/4 v3, 0x2

    const v4, -0xff0100

    const v5, 0x7f040002

    const-string v6, "E"

    const-string v7, "GAL"

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;-><init>(Ljava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_GA:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    .line 104
    new-instance v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const-string v9, "SYS_BD"

    const/4 v10, 0x3

    const/16 v11, -0x7f80

    const v12, 0x7f040001

    const-string v13, "B"

    const-string v14, "BD"

    move-object v8, v0

    invoke-direct/range {v8 .. v14}, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;-><init>(Ljava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_BD:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    .line 105
    new-instance v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const-string v2, "SYS_QZ"

    const/4 v3, 0x4

    const/16 v4, -0x3301

    const v5, 0x7f040006

    const-string v6, "Q"

    const-string v7, "QZS"

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;-><init>(Ljava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_QZ:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    .line 106
    new-instance v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const-string v9, "SYS_L1S"

    const/4 v10, 0x5

    const v11, -0x777778

    const v12, 0x7f040005

    const-string v13, "L"

    const-string v14, "L1S"

    move-object v8, v0

    invoke-direct/range {v8 .. v14}, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;-><init>(Ljava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_L1S:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    .line 107
    new-instance v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const-string v2, "SYS_IR"

    const/4 v3, 0x6

    const v4, -0x777800

    const v5, 0x7f040005

    const-string v6, "I"

    const-string v7, "IRNSS"

    move-object v1, v0

    invoke-direct/range {v1 .. v7}, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;-><init>(Ljava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_IR:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    .line 108
    new-instance v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const-string v9, "SYS_SBAS"

    const/4 v10, 0x7

    const v11, -0x4f4f01

    const v12, 0x7f040007

    const-string v13, "S"

    const-string v14, "SBAS"

    move-object v8, v0

    invoke-direct/range {v8 .. v14}, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;-><init>(Ljava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V

    sput-object v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_SBAS:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const/16 v1, 0x8

    new-array v1, v1, [Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    .line 100
    sget-object v2, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_GP:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_GL:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const/4 v3, 0x1

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_GA:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const/4 v3, 0x2

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_BD:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const/4 v3, 0x3

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_QZ:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const/4 v3, 0x4

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_L1S:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const/4 v3, 0x5

    aput-object v2, v1, v3

    sget-object v2, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->SYS_IR:Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    const/4 v3, 0x6

    aput-object v2, v1, v3

    const/4 v2, 0x7

    aput-object v0, v1, v2

    sput-object v1, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->$VALUES:[Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(II",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")V"
        }
    .end annotation

    .line 141
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    const/high16 p1, -0x40800000    # -1.0f

    .line 113
    iput p1, p0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->mAveL1Cnr:F

    .line 114
    iput p1, p0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->mAveL5Cnr:F

    .line 142
    iput p3, p0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->mColor:I

    .line 143
    iput p4, p0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->mIcon:I

    .line 144
    iput-object p5, p0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->mTag:Ljava/lang/String;

    .line 145
    iput-object p6, p0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->mName:Ljava/lang/String;

    return-void
.end method

.method static synthetic access$000(Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;)I
    .locals 0

    .line 100
    iget p0, p0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->mIcon:I

    return p0
.end method

.method static synthetic access$100(Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;)I
    .locals 0

    .line 100
    iget p0, p0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->mColor:I

    return p0
.end method

.method static synthetic access$200(Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;)Ljava/lang/String;
    .locals 0

    .line 100
    iget-object p0, p0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->mTag:Ljava/lang/String;

    return-object p0
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;
    .locals 1

    .line 100
    const-class v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    return-object p0
.end method

.method public static values()[Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;
    .locals 1

    .line 100
    sget-object v0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->$VALUES:[Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    invoke-virtual {v0}, [Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    return-object v0
.end method


# virtual methods
.method getCnr()Ljava/lang/String;
    .locals 7

    .line 123
    iget v0, p0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->mAveL1Cnr:F

    const/4 v1, 0x0

    cmpg-float v2, v0, v1

    const-string v3, "-"

    const/4 v4, 0x0

    const/4 v5, 0x1

    const-string v6, "%3.1f"

    if-gez v2, :cond_0

    move-object v0, v3

    goto :goto_0

    :cond_0
    new-array v2, v5, [Ljava/lang/Object;

    invoke-static {v0}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object v0

    aput-object v0, v2, v4

    invoke-static {v6, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    .line 124
    :goto_0
    iget p0, p0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->mAveL5Cnr:F

    cmpg-float v1, p0, v1

    if-gez v1, :cond_1

    goto :goto_1

    :cond_1
    new-array v1, v5, [Ljava/lang/Object;

    invoke-static {p0}, Ljava/lang/Float;->valueOf(F)Ljava/lang/Float;

    move-result-object p0

    aput-object p0, v1, v4

    invoke-static {v6, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    .line 125
    :goto_1
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "/"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method getColor()I
    .locals 0

    .line 138
    iget p0, p0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->mColor:I

    return p0
.end method

.method getName()Ljava/lang/String;
    .locals 0

    .line 134
    iget-object p0, p0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->mName:Ljava/lang/String;

    return-object p0
.end method

.method getTag()Ljava/lang/String;
    .locals 0

    .line 130
    iget-object p0, p0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->mTag:Ljava/lang/String;

    return-object p0
.end method

.method setAveL1Cnr(F)V
    .locals 0

    .line 116
    iput p1, p0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->mAveL1Cnr:F

    return-void
.end method

.method setAveL5Cnr(F)V
    .locals 0

    .line 119
    iput p1, p0, Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;->mAveL5Cnr:F

    return-void
.end method
