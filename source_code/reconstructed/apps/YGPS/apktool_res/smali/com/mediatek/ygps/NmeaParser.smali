.class public Lcom/mediatek/ygps/NmeaParser;
.super Ljava/lang/Object;
.source "NmeaParser.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/ygps/NmeaParser$NmeaUpdateViewListener;
    }
.end annotation


# static fields
.field private static final ARRAY_SYSTEM_ID:[Ljava/lang/String;


# instance fields
.field private final OTHER_TALKER:[Ljava/lang/String;

.field private mCurrentTalker:Ljava/lang/String;

.field private final mListener:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/ygps/NmeaParser$NmeaUpdateViewListener;",
            ">;"
        }
    .end annotation
.end field

.field private mLogHidden:Z

.field private mParseState:I

.field private mSatelInfoList:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/ygps/SatelliteInfo;",
            ">;>;"
        }
    .end annotation
.end field

.field private final mTalkerMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mUsedFixIdMapList:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Integer;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 7

    const-string v0, "$GP"

    const-string v1, "$GL"

    const-string v2, "$GA"

    const-string v3, "$BD"

    const-string v4, "$QZ"

    const-string v5, "$IR"

    const-string v6, "$GP_SBAS"

    .line 30
    filled-new-array/range {v0 .. v6}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/ygps/NmeaParser;->ARRAY_SYSTEM_ID:[Ljava/lang/String;

    return-void
.end method

.method constructor <init>()V
    .locals 4

    .line 97
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "$GN"

    const-string v1, "$GB"

    const-string v2, "$GQ"

    const-string v3, "$GI"

    .line 33
    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/ygps/NmeaParser;->OTHER_TALKER:[Ljava/lang/String;

    .line 36
    new-instance v0, Lcom/mediatek/ygps/NmeaParser$1;

    invoke-direct {v0, p0}, Lcom/mediatek/ygps/NmeaParser$1;-><init>(Lcom/mediatek/ygps/NmeaParser;)V

    iput-object v0, p0, Lcom/mediatek/ygps/NmeaParser;->mTalkerMap:Ljava/util/HashMap;

    const/4 v0, 0x0

    .line 43
    iput-boolean v0, p0, Lcom/mediatek/ygps/NmeaParser;->mLogHidden:Z

    const-string v0, "none"

    .line 45
    iput-object v0, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    .line 46
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/ygps/NmeaParser;->mListener:Ljava/util/ArrayList;

    .line 48
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mediatek/ygps/NmeaParser;->mUsedFixIdMapList:Ljava/util/HashMap;

    const/4 v0, -0x1

    .line 50
    iput v0, p0, Lcom/mediatek/ygps/NmeaParser;->mParseState:I

    .line 99
    invoke-static {}, Lcom/mediatek/ygps/GpsMnlSetting;->isLogHidden()Z

    move-result v0

    iput-boolean v0, p0, Lcom/mediatek/ygps/NmeaParser;->mLogHidden:Z

    .line 100
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mediatek/ygps/NmeaParser;->mSatelInfoList:Ljava/util/HashMap;

    .line 101
    invoke-static {}, Lcom/mediatek/ygps/SatelliteInfo;->getTalker()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 102
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 103
    iget-object v3, p0, Lcom/mediatek/ygps/NmeaParser;->mSatelInfoList:Ljava/util/HashMap;

    invoke-virtual {v3, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_0
    return-void
.end method

.method private addUsedFixId(ILjava/lang/String;)V
    .locals 1

    .line 83
    iget-object v0, p0, Lcom/mediatek/ygps/NmeaParser;->mUsedFixIdMapList:Ljava/util/HashMap;

    invoke-virtual {v0, p2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    if-nez v0, :cond_0

    .line 85
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 86
    iget-object p0, p0, Lcom/mediatek/ygps/NmeaParser;->mUsedFixIdMapList:Ljava/util/HashMap;

    invoke-virtual {p0, p2, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 88
    :cond_0
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method private checkTalker(Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    .line 129
    invoke-static {}, Lcom/mediatek/ygps/SatelliteInfo;->getTalker()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 130
    invoke-virtual {p1, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_0

    :cond_1
    const-string v1, "none"

    .line 136
    :goto_0
    iget-object p0, p0, Lcom/mediatek/ygps/NmeaParser;->OTHER_TALKER:[Ljava/lang/String;

    array-length v0, p0

    const/4 v2, 0x0

    :goto_1
    if-ge v2, v0, :cond_3

    aget-object v3, p0, v2

    .line 137
    invoke-virtual {p1, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_2

    move-object v1, v3

    goto :goto_2

    :cond_2
    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    :cond_3
    :goto_2
    return-object v1
.end method

.method private clearUsedFixList()V
    .locals 1

    .line 92
    iget-object p0, p0, Lcom/mediatek/ygps/NmeaParser;->mUsedFixIdMapList:Ljava/util/HashMap;

    invoke-virtual {p0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    .line 93
    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method private getCommonTalker(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 67
    iget-object p0, p0, Lcom/mediatek/ygps/NmeaParser;->mTalkerMap:Ljava/util/HashMap;

    invoke-virtual {p0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    .line 68
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "talker :"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " and commonTalker:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "YGPS/NmeaParser"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p0, :cond_0

    move-object p1, p0

    :cond_0
    return-object p1
.end method

.method private isUsedInFix(ILjava/lang/String;)Z
    .locals 1

    .line 73
    iget-object v0, p0, Lcom/mediatek/ygps/NmeaParser;->mUsedFixIdMapList:Ljava/util/HashMap;

    invoke-virtual {v0, p2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    if-nez v0, :cond_0

    .line 75
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    .line 76
    iget-object p0, p0, Lcom/mediatek/ygps/NmeaParser;->mUsedFixIdMapList:Ljava/util/HashMap;

    invoke-virtual {p0, p2, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 p0, 0x0

    return p0

    .line 79
    :cond_0
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result p0

    return p0
.end method

.method private log(Ljava/lang/String;)V
    .locals 0

    const-string p0, "YGPS/NmeaParser"

    .line 362
    invoke-static {p0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private parseFloat(Ljava/lang/String;)F
    .locals 2

    const-string v0, ""

    .line 382
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 385
    :cond_0
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/NmeaParser;->removeFirstZero(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 387
    :try_start_0
    invoke-static {p0}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v1
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 389
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "parseFloat:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "YGPS/NmeaParser"

    invoke-static {p1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return v1
.end method

.method private declared-synchronized parseGSA(Ljava/lang/String;)V
    .locals 4

    monitor-enter p0

    .line 205
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "parseGSA:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/ygps/NmeaParser;->seclog(Ljava/lang/String;)V

    .line 206
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/NmeaParser;->splitNmea(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 209
    array-length v0, p1

    const/16 v1, 0x11

    if-lt v0, v1, :cond_7

    const/4 v0, 0x2

    .line 210
    aget-object v0, p1, v0

    const-string v1, "1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 212
    monitor-exit p0

    return-void

    .line 214
    :cond_0
    :try_start_1
    array-length v0, p1

    const/16 v1, 0x13

    if-ne v0, v1, :cond_1

    const/16 v0, 0x12

    .line 215
    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    .line 216
    sget-object v1, Lcom/mediatek/ygps/NmeaParser;->ARRAY_SYSTEM_ID:[Ljava/lang/String;

    add-int/lit8 v0, v0, -0x1

    aget-object v0, v1, v0

    iput-object v0, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    :cond_1
    const-string v0, "$QZ"

    .line 218
    iget-object v1, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/16 v1, 0xf

    const/4 v2, 0x3

    if-eqz v0, :cond_4

    :goto_0
    if-ge v2, v1, :cond_8

    .line 221
    aget-object v0, p1, v2

    invoke-direct {p0, v0}, Lcom/mediatek/ygps/NmeaParser;->parseInt(Ljava/lang/String;)I

    move-result v0

    if-lez v0, :cond_3

    const/16 v3, 0xbd

    if-gt v0, v3, :cond_2

    const/16 v3, 0x37

    if-lt v0, v3, :cond_2

    const-string v3, "$L1S"

    goto :goto_1

    :cond_2
    const-string v3, "$QZ"

    .line 223
    :goto_1
    invoke-direct {p0, v0, v3}, Lcom/mediatek/ygps/NmeaParser;->addUsedFixId(ILjava/lang/String;)V

    :cond_3
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_4
    :goto_2
    if-ge v2, v1, :cond_6

    .line 229
    aget-object v0, p1, v2

    invoke-direct {p0, v0}, Lcom/mediatek/ygps/NmeaParser;->parseInt(Ljava/lang/String;)I

    move-result v0

    if-lez v0, :cond_5

    .line 231
    iget-object v3, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-direct {p0, v0, v3}, Lcom/mediatek/ygps/NmeaParser;->addUsedFixId(ILjava/lang/String;)V

    :cond_5
    add-int/lit8 v2, v2, 0x1

    goto :goto_2

    .line 234
    :cond_6
    new-instance p1, Ljava/lang/String;

    invoke-direct {p1}, Ljava/lang/String;-><init>()V

    .line 235
    iget-object v0, p0, Lcom/mediatek/ygps/NmeaParser;->mUsedFixIdMapList:Ljava/util/HashMap;

    iget-object v1, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    if-eqz v0, :cond_8

    .line 237
    iget-object v0, p0, Lcom/mediatek/ygps/NmeaParser;->mUsedFixIdMapList:Ljava/util/HashMap;

    iget-object v1, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_3
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_8

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    .line 238
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " "

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_3

    :cond_7
    const-string p1, "YGPS/NmeaParser"

    const-string v0, "GSA invalid"

    .line 247
    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 249
    :cond_8
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized parseGSV(Ljava/lang/String;)V
    .locals 10

    monitor-enter p0

    .line 298
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "parseGSV:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/ygps/NmeaParser;->seclog(Ljava/lang/String;)V

    .line 299
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/NmeaParser;->splitNmea(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    const/4 v0, -0x1

    .line 301
    array-length v1, p1

    const/4 v2, 0x4

    sub-int/2addr v1, v2

    rem-int/2addr v1, v2

    const/4 v3, 0x1

    if-eqz v1, :cond_0

    .line 303
    array-length v0, p1

    sub-int/2addr v0, v3

    aget-object v0, p1, v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    .line 305
    :cond_0
    iget-object v1, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    const-string v4, "$GP"

    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 306
    invoke-direct {p0, p1, v0}, Lcom/mediatek/ygps/NmeaParser;->parseGpGSV([Ljava/lang/String;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 307
    monitor-exit p0

    return-void

    :cond_1
    :try_start_1
    const-string v1, "$QZ"

    .line 310
    iget-object v4, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    const/4 v1, 0x5

    if-eq v0, v1, :cond_3

    :cond_2
    const-string v1, "$GQ"

    iget-object v4, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    .line 311
    invoke-virtual {v1, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    if-ne v0, v2, :cond_4

    :cond_3
    const-string v1, "$L1S"

    .line 312
    iput-object v1, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    .line 315
    :cond_4
    iget-object v1, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-direct {p0, v1}, Lcom/mediatek/ygps/NmeaParser;->getCommonTalker(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/mediatek/ygps/NmeaParser;->getSatelliteList(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v1

    if-nez v1, :cond_5

    .line 318
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "parseGSV get SVlist Error"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v0, " Current Talker:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mediatek/ygps/NmeaParser;->log(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 319
    monitor-exit p0

    return-void

    :cond_5
    :try_start_2
    const-string v4, "L1"

    const-string v5, "$BD"

    .line 322
    iget-object v6, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_7

    const-string v5, "$QZ"

    iget-object v6, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_7

    const-string v5, "$GB"

    iget-object v6, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    .line 323
    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_7

    const-string v5, "$GQ"

    iget-object v6, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_6

    goto :goto_0

    :cond_6
    const-string v5, "$GA"

    .line 327
    iget-object v6, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_8

    if-ne v0, v3, :cond_8

    const-string v4, "L5"

    goto :goto_1

    :cond_7
    :goto_0
    if-lez v0, :cond_8

    if-eq v0, v3, :cond_8

    const-string v4, "L5"

    :cond_8
    :goto_1
    add-int/lit8 v0, v2, 0x3

    .line 336
    array-length v5, p1

    if-ge v0, v5, :cond_d

    add-int/lit8 v0, v2, 0x1

    .line 337
    aget-object v2, p1, v2

    invoke-direct {p0, v2}, Lcom/mediatek/ygps/NmeaParser;->parseInt(Ljava/lang/String;)I

    move-result v2

    add-int/lit8 v5, v0, 0x1

    .line 338
    aget-object v0, p1, v0

    invoke-direct {p0, v0}, Lcom/mediatek/ygps/NmeaParser;->parseFloat(Ljava/lang/String;)F

    move-result v0

    add-int/lit8 v6, v5, 0x1

    .line 339
    aget-object v5, p1, v5

    invoke-direct {p0, v5}, Lcom/mediatek/ygps/NmeaParser;->parseFloat(Ljava/lang/String;)F

    move-result v5

    add-int/lit8 v7, v6, 0x1

    .line 340
    aget-object v6, p1, v6

    invoke-direct {p0, v6}, Lcom/mediatek/ygps/NmeaParser;->parseFloat(Ljava/lang/String;)F

    move-result v6

    if-lez v2, :cond_c

    .line 343
    new-instance v8, Lcom/mediatek/ygps/SatelliteInfo;

    iget-object v9, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-direct {p0, v9}, Lcom/mediatek/ygps/NmeaParser;->getCommonTalker(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-static {v9}, Lcom/mediatek/ygps/SatelliteInfo;->getSystem(Ljava/lang/String;)Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    move-result-object v9

    invoke-direct {v8, v2, v9}, Lcom/mediatek/ygps/SatelliteInfo;-><init>(ILcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;)V

    .line 344
    iput v6, v8, Lcom/mediatek/ygps/SatelliteInfo;->mSnr:F

    .line 345
    iput v0, v8, Lcom/mediatek/ygps/SatelliteInfo;->mElevation:F

    .line 346
    iput v5, v8, Lcom/mediatek/ygps/SatelliteInfo;->mAzimuth:F

    .line 348
    invoke-virtual {v8, v4}, Lcom/mediatek/ygps/SatelliteInfo;->setFq(Ljava/lang/String;)V

    const-string v0, "$IR"

    .line 350
    iget-object v5, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_9

    const-string v0, "$GI"

    iget-object v5, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {v0, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_a

    :cond_9
    const-string v0, "L5"

    .line 351
    invoke-virtual {v8, v0}, Lcom/mediatek/ygps/SatelliteInfo;->setFq(Ljava/lang/String;)V

    .line 353
    :cond_a
    iget-object v0, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/mediatek/ygps/NmeaParser;->getCommonTalker(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v2, v0}, Lcom/mediatek/ygps/NmeaParser;->isUsedInFix(ILjava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_b

    .line 354
    iput-boolean v3, v8, Lcom/mediatek/ygps/SatelliteInfo;->mUsedInFix:Z

    .line 356
    :cond_b
    invoke-virtual {v1, v8}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :cond_c
    move v2, v7

    goto :goto_1

    .line 359
    :cond_d
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized parseGpGSV([Ljava/lang/String;I)V
    .locals 10

    monitor-enter p0

    .line 253
    :try_start_0
    iget-object v0, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/mediatek/ygps/NmeaParser;->getSatelliteList(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v0

    const-string v1, "$GP_SBAS"

    .line 254
    invoke-virtual {p0, v1}, Lcom/mediatek/ygps/NmeaParser;->getSatelliteList(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v1

    if-eqz v0, :cond_7

    if-nez v1, :cond_0

    goto :goto_3

    :cond_0
    const/4 v2, 0x4

    :goto_0
    add-int/lit8 v3, v2, 0x3

    .line 262
    array-length v4, p1

    if-ge v3, v4, :cond_6

    add-int/lit8 v3, v2, 0x1

    .line 263
    aget-object v2, p1, v2

    invoke-direct {p0, v2}, Lcom/mediatek/ygps/NmeaParser;->parseInt(Ljava/lang/String;)I

    move-result v2

    add-int/lit8 v4, v3, 0x1

    .line 264
    aget-object v3, p1, v3

    invoke-direct {p0, v3}, Lcom/mediatek/ygps/NmeaParser;->parseFloat(Ljava/lang/String;)F

    move-result v3

    add-int/lit8 v5, v4, 0x1

    .line 265
    aget-object v4, p1, v4

    invoke-direct {p0, v4}, Lcom/mediatek/ygps/NmeaParser;->parseFloat(Ljava/lang/String;)F

    move-result v4

    add-int/lit8 v6, v5, 0x1

    .line 266
    aget-object v5, p1, v5

    invoke-direct {p0, v5}, Lcom/mediatek/ygps/NmeaParser;->parseFloat(Ljava/lang/String;)F

    move-result v5

    if-lez v2, :cond_5

    const/16 v7, 0x20

    if-gt v2, v7, :cond_1

    const-string v7, "$GP"

    goto :goto_1

    :cond_1
    const-string v7, "$GP_SBAS"

    .line 270
    :goto_1
    new-instance v8, Lcom/mediatek/ygps/SatelliteInfo;

    invoke-static {v7}, Lcom/mediatek/ygps/SatelliteInfo;->getSystem(Ljava/lang/String;)Lcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;

    move-result-object v9

    invoke-direct {v8, v2, v9}, Lcom/mediatek/ygps/SatelliteInfo;-><init>(ILcom/mediatek/ygps/SatelliteInfo$SatellitesSystem;)V

    .line 271
    iput v5, v8, Lcom/mediatek/ygps/SatelliteInfo;->mSnr:F

    .line 272
    iput v3, v8, Lcom/mediatek/ygps/SatelliteInfo;->mElevation:F

    .line 273
    iput v4, v8, Lcom/mediatek/ygps/SatelliteInfo;->mAzimuth:F

    const/16 v3, 0x8

    if-ne p2, v3, :cond_2

    const-string v3, "L5"

    .line 277
    invoke-virtual {v8, v3}, Lcom/mediatek/ygps/SatelliteInfo;->setFq(Ljava/lang/String;)V

    .line 279
    :cond_2
    invoke-direct {p0, v2, v7}, Lcom/mediatek/ygps/NmeaParser;->isUsedInFix(ILjava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_3

    const/4 v2, 0x1

    .line 280
    iput-boolean v2, v8, Lcom/mediatek/ygps/SatelliteInfo;->mUsedInFix:Z

    :cond_3
    const-string v2, "$GP"

    .line 282
    invoke-virtual {v2, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_4

    .line 283
    invoke-virtual {v0, v8}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_2

    .line 285
    :cond_4
    invoke-virtual {v1, v8}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_5
    :goto_2
    move v2, v6

    goto :goto_0

    .line 289
    :cond_6
    monitor-exit p0

    return-void

    .line 257
    :cond_7
    :goto_3
    :try_start_1
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "parseGSV get SVlist Error for Current Talker:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mediatek/ygps/NmeaParser;->log(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 258
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private parseInt(Ljava/lang/String;)I
    .locals 2

    const-string v0, ""

    .line 396
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 399
    :cond_0
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/NmeaParser;->removeFirstZero(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 401
    :try_start_0
    invoke-static {p0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result v1
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 403
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "parseInt:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "YGPS/NmeaParser"

    invoke-static {p1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return v1
.end method

.method private removeFirstZero(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 147
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result p0

    const/4 v0, 0x0

    :goto_0
    if-ge v0, p0, :cond_1

    .line 149
    invoke-virtual {p1, v0}, Ljava/lang/String;->charAt(I)C

    move-result v1

    const/16 v2, 0x30

    if-eq v1, v2, :cond_0

    goto :goto_1

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    :goto_1
    if-ge v0, p0, :cond_2

    .line 153
    invoke-virtual {p1, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    goto :goto_2

    :cond_2
    const-string p0, "0"

    :goto_2
    return-object p0
.end method

.method private reportSVupdate()V
    .locals 5

    .line 409
    iget-object v0, p0, Lcom/mediatek/ygps/NmeaParser;->mListener:Ljava/util/ArrayList;

    monitor-enter v0

    .line 410
    :try_start_0
    iget-object v1, p0, Lcom/mediatek/ygps/NmeaParser;->mListener:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    const-string v2, "YGPS/NmeaParser"

    .line 411
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "listener size:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    .line 413
    iget-object v3, p0, Lcom/mediatek/ygps/NmeaParser;->mListener:Ljava/util/ArrayList;

    invoke-virtual {v3, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/ygps/NmeaParser$NmeaUpdateViewListener;

    .line 414
    invoke-interface {v3}, Lcom/mediatek/ygps/NmeaParser$NmeaUpdateViewListener;->onViewupdateNotify()V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 416
    :cond_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method private seclog(Ljava/lang/String;)V
    .locals 0

    .line 366
    iget-boolean p0, p0, Lcom/mediatek/ygps/NmeaParser;->mLogHidden:Z

    if-nez p0, :cond_0

    const-string p0, "YGPS/NmeaParser"

    .line 367
    invoke-static {p0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void
.end method

.method private splitNmea(Ljava/lang/String;)[Ljava/lang/String;
    .locals 1

    const/16 p0, 0x2a

    .line 373
    invoke-virtual {p1, p0}, Ljava/lang/String;->indexOf(I)I

    move-result p0

    const/4 v0, -0x1

    if-eq p0, v0, :cond_0

    const/4 v0, 0x0

    .line 375
    invoke-virtual {p1, v0, p0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p0

    const-string p1, ","

    invoke-virtual {p0, p1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method


# virtual methods
.method addSVUpdateListener(Lcom/mediatek/ygps/NmeaParser$NmeaUpdateViewListener;)V
    .locals 4

    .line 424
    iget-object v0, p0, Lcom/mediatek/ygps/NmeaParser;->mListener:Ljava/util/ArrayList;

    monitor-enter v0

    :try_start_0
    const-string v1, "YGPS/NmeaParser"

    .line 425
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Add listener:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 426
    iget-object v1, p0, Lcom/mediatek/ygps/NmeaParser;->mListener:Ljava/util/ArrayList;

    invoke-virtual {v1, p1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 427
    iget-object p0, p0, Lcom/mediatek/ygps/NmeaParser;->mListener:Ljava/util/ArrayList;

    invoke-virtual {p0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 429
    :cond_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method clearSatelliteList()V
    .locals 1

    .line 111
    iget-object p0, p0, Lcom/mediatek/ygps/NmeaParser;->mSatelInfoList:Ljava/util/HashMap;

    invoke-virtual {p0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    .line 112
    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method getSatelliteList(Ljava/lang/String;)Ljava/util/ArrayList;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/ygps/SatelliteInfo;",
            ">;"
        }
    .end annotation

    .line 118
    iget-object v0, p0, Lcom/mediatek/ygps/NmeaParser;->mSatelInfoList:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 119
    iget-object p0, p0, Lcom/mediatek/ygps/NmeaParser;->mSatelInfoList:Ljava/util/HashMap;

    invoke-virtual {p0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/util/ArrayList;

    goto :goto_0

    .line 121
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "No this talker "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " SV exist"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mediatek/ygps/NmeaParser;->log(Ljava/lang/String;)V

    const/4 p0, 0x0

    :goto_0
    return-object p0
.end method

.method declared-synchronized parse(Ljava/lang/String;)V
    .locals 4

    monitor-enter p0

    .line 161
    :try_start_0
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/NmeaParser;->checkTalker(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    const-string v1, "none"

    .line 162
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 163
    monitor-exit p0

    return-void

    .line 169
    :cond_0
    :try_start_1
    iget v0, p0, Lcom/mediatek/ygps/NmeaParser;->mParseState:I

    const/4 v1, 0x3

    if-ne v0, v1, :cond_1

    const-string v0, "GSV"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "YGPS/NmeaParser"

    .line 170
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "report update for talker:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mediatek/ygps/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 171
    invoke-direct {p0}, Lcom/mediatek/ygps/NmeaParser;->reportSVupdate()V

    :cond_1
    const-string v0, "GSA"

    .line 173
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    const/4 v0, 0x2

    .line 174
    iput v0, p0, Lcom/mediatek/ygps/NmeaParser;->mParseState:I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 176
    :try_start_2
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/NmeaParser;->parseGSA(Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/NumberFormatException; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 178
    :try_start_3
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Exception in parseGSA()"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mediatek/ygps/NmeaParser;->log(Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    const-string v0, "GSV"

    .line 180
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 181
    iput v1, p0, Lcom/mediatek/ygps/NmeaParser;->mParseState:I
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 183
    :try_start_4
    invoke-direct {p0, p1}, Lcom/mediatek/ygps/NmeaParser;->parseGSV(Ljava/lang/String;)V
    :try_end_4
    .catch Ljava/lang/NumberFormatException; {:try_start_4 .. :try_end_4} :catch_1
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    goto :goto_0

    :catch_1
    move-exception p1

    .line 185
    :try_start_5
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Exception in parseGSV()"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mediatek/ygps/NmeaParser;->log(Ljava/lang/String;)V

    goto :goto_0

    :cond_3
    const-string v0, "GGA"

    .line 187
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_4

    .line 189
    invoke-direct {p0}, Lcom/mediatek/ygps/NmeaParser;->clearUsedFixList()V

    .line 190
    invoke-virtual {p0}, Lcom/mediatek/ygps/NmeaParser;->clearSatelliteList()V

    goto :goto_0

    :cond_4
    const/4 p1, 0x5

    .line 192
    iput p1, p0, Lcom/mediatek/ygps/NmeaParser;->mParseState:I
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    .line 195
    :goto_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method removeSVUpdateListener(Lcom/mediatek/ygps/NmeaParser$NmeaUpdateViewListener;)V
    .locals 4

    .line 437
    iget-object v0, p0, Lcom/mediatek/ygps/NmeaParser;->mListener:Ljava/util/ArrayList;

    monitor-enter v0

    :try_start_0
    const-string v1, "YGPS/NmeaParser"

    .line 438
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "remove listener:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 439
    iget-object p0, p0, Lcom/mediatek/ygps/NmeaParser;->mListener:Ljava/util/ArrayList;

    invoke-virtual {p0, p1}, Ljava/util/ArrayList;->remove(Ljava/lang/Object;)Z

    .line 440
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method
