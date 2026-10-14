.class public Lcom/mediatek/lbs/em2/ui/NmeaParser;
.super Ljava/lang/Object;
.source "NmeaParser.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;,
        Lcom/mediatek/lbs/em2/ui/NmeaParser$SVExtraInfro;,
        Lcom/mediatek/lbs/em2/ui/NmeaParser$NmeaUpdateViewListener;
    }
.end annotation


# static fields
.field private static final TALKER:[Ljava/lang/String;

.field private static final TALKER_COLOR:[I

.field private static sNmeaParser:Lcom/mediatek/lbs/em2/ui/NmeaParser;


# instance fields
.field private mCurrentTalker:Ljava/lang/String;

.field private mExtraInfoList:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/mediatek/lbs/em2/ui/NmeaParser$SVExtraInfro;",
            ">;"
        }
    .end annotation
.end field

.field private final mListener:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/lbs/em2/ui/NmeaParser$NmeaUpdateViewListener;",
            ">;"
        }
    .end annotation
.end field

.field private mLocRecord:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Landroid/location/Location;",
            ">;"
        }
    .end annotation
.end field

.field private mParseState:I

.field private mSatelInfoList:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/util/ArrayList;",
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
    .locals 4

    const-string v0, "$GP"

    const-string v1, "$GL"

    const-string v2, "$GA"

    const-string v3, "$BD"

    .line 18
    filled-new-array {v0, v1, v2, v3}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->TALKER:[Ljava/lang/String;

    const/4 v0, 0x4

    new-array v0, v0, [I

    .line 19
    fill-array-data v0, :array_0

    sput-object v0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->TALKER_COLOR:[I

    const/4 v0, 0x0

    .line 30
    sput-object v0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->sNmeaParser:Lcom/mediatek/lbs/em2/ui/NmeaParser;

    return-void

    :array_0
    .array-data 4
        -0xff0001
        -0x100
        -0x1
        -0xffff01
    .end array-data
.end method

.method private constructor <init>()V
    .locals 6

    .line 93
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "none"

    .line 35
    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    .line 36
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mListener:Ljava/util/ArrayList;

    .line 38
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mUsedFixIdMapList:Ljava/util/HashMap;

    const/4 v0, -0x1

    .line 40
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mParseState:I

    .line 94
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mSatelInfoList:Ljava/util/HashMap;

    .line 95
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mExtraInfoList:Ljava/util/HashMap;

    .line 96
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mLocRecord:Ljava/util/HashMap;

    .line 99
    sget-object v0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->TALKER:[Ljava/lang/String;

    array-length v1, v0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    aget-object v3, v0, v2

    .line 100
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    .line 101
    iget-object v5, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mSatelInfoList:Ljava/util/HashMap;

    invoke-virtual {v5, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 103
    new-instance v4, Lcom/mediatek/lbs/em2/ui/NmeaParser$SVExtraInfro;

    const/4 v5, 0x0

    invoke-direct {v4, p0, v5}, Lcom/mediatek/lbs/em2/ui/NmeaParser$SVExtraInfro;-><init>(Lcom/mediatek/lbs/em2/ui/NmeaParser;Lcom/mediatek/lbs/em2/ui/NmeaParser$1;)V

    .line 104
    iget-object v5, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mExtraInfoList:Ljava/util/HashMap;

    invoke-virtual {v5, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 106
    new-instance v4, Landroid/location/Location;

    const-string v5, "gps"

    invoke-direct {v4, v5}, Landroid/location/Location;-><init>(Ljava/lang/String;)V

    .line 107
    iget-object v5, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mLocRecord:Ljava/util/HashMap;

    invoke-virtual {v5, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private addUsedFixId(I)V
    .locals 2

    .line 75
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mUsedFixIdMapList:Ljava/util/HashMap;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    if-nez v0, :cond_0

    .line 77
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 78
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mUsedFixIdMapList:Ljava/util/HashMap;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {v1, p0, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 80
    :cond_0
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method private checkTalker(Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    .line 181
    sget-object p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->TALKER:[Ljava/lang/String;

    array-length v0, p0

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_1

    aget-object v2, p0, v1

    .line 182
    invoke-virtual {p1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    goto :goto_1

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    const-string v2, "none"

    :goto_1
    return-object v2
.end method

.method private checkTalkerColor(Ljava/lang/String;)I
    .locals 1

    const/4 p0, 0x0

    :goto_0
    const/4 v0, 0x4

    if-ge p0, v0, :cond_1

    .line 193
    sget-object v0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->TALKER:[Ljava/lang/String;

    aget-object v0, v0, p0

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 194
    sget-object p1, Lcom/mediatek/lbs/em2/ui/NmeaParser;->TALKER_COLOR:[I

    aget p0, p1, p0

    return p0

    :cond_0
    add-int/lit8 p0, p0, 0x1

    goto :goto_0

    :cond_1
    const/high16 p0, -0x10000

    return p0
.end method

.method private clearSatelliteList(Ljava/lang/String;)V
    .locals 1

    .line 151
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->getSatelliteList(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 153
    invoke-virtual {p0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;

    const/4 v0, 0x0

    .line 154
    iput-boolean v0, p1, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mUsedInFix:Z

    goto :goto_0

    :cond_0
    return-void
.end method

.method private clearUsedFixList()V
    .locals 2

    .line 84
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mUsedFixIdMapList:Ljava/util/HashMap;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    if-nez v0, :cond_0

    .line 86
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 87
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mUsedFixIdMapList:Ljava/util/HashMap;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {v1, p0, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void

    .line 90
    :cond_0
    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    return-void
.end method

.method public static getNMEAParser()Lcom/mediatek/lbs/em2/ui/NmeaParser;
    .locals 1

    .line 53
    sget-object v0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->sNmeaParser:Lcom/mediatek/lbs/em2/ui/NmeaParser;

    if-nez v0, :cond_0

    .line 54
    new-instance v0, Lcom/mediatek/lbs/em2/ui/NmeaParser;

    invoke-direct {v0}, Lcom/mediatek/lbs/em2/ui/NmeaParser;-><init>()V

    sput-object v0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->sNmeaParser:Lcom/mediatek/lbs/em2/ui/NmeaParser;

    .line 56
    :cond_0
    sget-object v0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->sNmeaParser:Lcom/mediatek/lbs/em2/ui/NmeaParser;

    return-object v0
.end method

.method private getSatelliteList(Ljava/lang/String;)Ljava/util/ArrayList;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;",
            ">;"
        }
    .end annotation

    .line 142
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mSatelInfoList:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 143
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mSatelInfoList:Ljava/util/HashMap;

    invoke-virtual {p0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/util/ArrayList;

    goto :goto_0

    .line 145
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

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->log(Ljava/lang/String;)V

    const/4 p0, 0x0

    :goto_0
    return-object p0
.end method

.method private getTalkerExtra(Ljava/lang/String;)Lcom/mediatek/lbs/em2/ui/NmeaParser$SVExtraInfro;
    .locals 2

    .line 171
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mExtraInfoList:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 172
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mExtraInfoList:Ljava/util/HashMap;

    invoke-virtual {p0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/mediatek/lbs/em2/ui/NmeaParser$SVExtraInfro;

    goto :goto_0

    .line 174
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "No this talker "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " Extra exist"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->log(Ljava/lang/String;)V

    const/4 p0, 0x0

    :goto_0
    return-object p0
.end method

.method private getTalkerLocation(Ljava/lang/String;)Landroid/location/Location;
    .locals 2

    .line 161
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mLocRecord:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 162
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mLocRecord:Ljava/util/HashMap;

    invoke-virtual {p0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/location/Location;

    goto :goto_0

    .line 164
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "No this talker "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " Loc exist"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->log(Ljava/lang/String;)V

    const/4 p0, 0x0

    :goto_0
    return-object p0
.end method

.method private isUsedInFix(I)Z
    .locals 2

    .line 60
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mUsedFixIdMapList:Ljava/util/HashMap;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/ArrayList;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 62
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    .line 63
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mUsedFixIdMapList:Ljava/util/HashMap;

    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {v0, p0, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return v1

    .line 66
    :cond_0
    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    .line 67
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    if-ne p1, v0, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_2
    return v1
.end method

.method private log(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method private parseDouble(Ljava/lang/String;)D
    .locals 3

    const-string v0, ""

    .line 530
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const-wide/16 v1, 0x0

    if-eqz v0, :cond_0

    return-wide v1

    .line 533
    :cond_0
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->removeFirstZero(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 535
    :try_start_0
    invoke-static {p0}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v1
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 537
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "parseDouble:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "nmeaParser"

    invoke-static {p1, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-wide v1
.end method

.method private parseFloat(Ljava/lang/String;)F
    .locals 2

    const-string v0, ""

    .line 515
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 518
    :cond_0
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->removeFirstZero(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 520
    :try_start_0
    invoke-static {p0}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v1
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 522
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "parseFloat:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "nmeaParser"

    invoke-static {p1, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return v1
.end method

.method private declared-synchronized parseGGA(Ljava/lang/String;)V
    .locals 11

    monitor-enter p0

    .line 406
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "parseGGA:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->log(Ljava/lang/String;)V

    .line 407
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 408
    invoke-virtual {p0}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->clearSatelliteList()V

    .line 409
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->getTalkerLocation(Ljava/lang/String;)Landroid/location/Location;

    move-result-object v0

    const/4 v1, 0x1

    .line 410
    aget-object v1, p1, v1

    invoke-direct {p0, v1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseDouble(Ljava/lang/String;)D

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Double;->longValue()J

    move-result-wide v1

    const/4 v3, 0x2

    .line 411
    aget-object v3, p1, v3

    invoke-direct {p0, v3}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseDouble(Ljava/lang/String;)D

    move-result-wide v3

    const/4 v5, 0x4

    .line 412
    aget-object v5, p1, v5

    invoke-direct {p0, v5}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseDouble(Ljava/lang/String;)D

    move-result-wide v5

    const/16 v7, 0x9

    .line 413
    aget-object v7, p1, v7

    invoke-direct {p0, v7}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseDouble(Ljava/lang/String;)D

    move-result-wide v7

    const/4 v9, 0x3

    .line 414
    aget-object v9, p1, v9

    const-string v10, "N"

    invoke-virtual {v9, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v9

    if-nez v9, :cond_0

    neg-double v3, v3

    :cond_0
    const/4 v9, 0x5

    .line 418
    aget-object p1, p1, v9

    const-string v9, "E"

    invoke-virtual {p1, v9}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_1

    neg-double v5, v5

    :cond_1
    if-eqz v0, :cond_2

    .line 423
    invoke-virtual {v0, v1, v2}, Landroid/location/Location;->setTime(J)V

    .line 424
    invoke-virtual {v0, v3, v4}, Landroid/location/Location;->setLatitude(D)V

    .line 425
    invoke-virtual {v0, v5, v6}, Landroid/location/Location;->setLongitude(D)V

    .line 426
    invoke-virtual {v0, v7, v8}, Landroid/location/Location;->setAltitude(D)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 428
    :cond_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized parseGSA(Ljava/lang/String;)V
    .locals 5

    monitor-enter p0

    .line 369
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "parseGSA:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->log(Ljava/lang/String;)V

    .line 370
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 372
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->getTalkerExtra(Ljava/lang/String;)Lcom/mediatek/lbs/em2/ui/NmeaParser$SVExtraInfro;

    move-result-object v0

    .line 373
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->clearUsedFixList()V

    if-eqz v0, :cond_3

    .line 374
    array-length v1, p1

    const/16 v2, 0x11

    if-lt v1, v2, :cond_3

    const/4 v1, 0x2

    .line 375
    aget-object v3, p1, v1

    const-string v4, "1"

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 377
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->clearSatelliteList(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 378
    monitor-exit p0

    return-void

    .line 380
    :cond_0
    :try_start_1
    aget-object v3, p1, v1

    iput-object v3, v0, Lcom/mediatek/lbs/em2/ui/NmeaParser$SVExtraInfro;->mfixtype:Ljava/lang/String;

    .line 381
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-direct {p0, v3}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->getSatelliteList(Ljava/lang/String;)Ljava/util/ArrayList;

    .line 382
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-direct {p0, v3}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->clearSatelliteList(Ljava/lang/String;)V

    :goto_0
    const/16 v3, 0xf

    if-ge v1, v3, :cond_2

    .line 384
    aget-object v3, p1, v1

    invoke-direct {p0, v3}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseInt(Ljava/lang/String;)I

    move-result v3

    if-lez v3, :cond_1

    .line 386
    invoke-direct {p0, v3}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->addUsedFixId(I)V

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 390
    :cond_2
    aget-object v1, p1, v3

    iput-object v1, v0, Lcom/mediatek/lbs/em2/ui/NmeaParser$SVExtraInfro;->mPdop:Ljava/lang/String;

    const/16 v1, 0x10

    .line 391
    aget-object v1, p1, v1

    iput-object v1, v0, Lcom/mediatek/lbs/em2/ui/NmeaParser$SVExtraInfro;->mHdop:Ljava/lang/String;

    .line 392
    aget-object p1, p1, v2

    iput-object p1, v0, Lcom/mediatek/lbs/em2/ui/NmeaParser$SVExtraInfro;->mVdop:Ljava/lang/String;

    goto :goto_1

    .line 395
    :cond_3
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->clearSatelliteList(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 397
    :goto_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized parseGSV(Ljava/lang/String;)V
    .locals 11

    monitor-enter p0

    .line 438
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "parseGSV:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->log(Ljava/lang/String;)V

    .line 439
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 440
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->getSatelliteList(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v0

    if-nez v0, :cond_0

    .line 443
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "parseGSV get SVlist Error"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v0, " Current Talker:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->log(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 444
    monitor-exit p0

    return-void

    :cond_0
    const/4 v1, 0x1

    .line 447
    :try_start_1
    aget-object v2, p1, v1

    invoke-direct {p0, v2}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseInt(Ljava/lang/String;)I

    move-result v2

    const/4 v3, 0x2

    .line 448
    aget-object v4, p1, v3

    invoke-direct {p0, v4}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseInt(Ljava/lang/String;)I

    move-result v4

    if-lez v2, :cond_1

    if-ne v4, v1, :cond_1

    .line 452
    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    .line 453
    iget-object v2, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mSatelInfoList:Ljava/util/HashMap;

    iget-object v4, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {v2, v4, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    const/4 v2, 0x4

    :goto_0
    add-int/lit8 v4, v2, 0x3

    .line 457
    array-length v5, p1

    if-ge v4, v5, :cond_5

    add-int/lit8 v4, v2, 0x1

    .line 458
    aget-object v2, p1, v2

    invoke-direct {p0, v2}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseInt(Ljava/lang/String;)I

    move-result v2

    add-int/lit8 v5, v4, 0x1

    .line 459
    aget-object v4, p1, v4

    invoke-direct {p0, v4}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseFloat(Ljava/lang/String;)F

    move-result v4

    add-int/lit8 v6, v5, 0x1

    .line 460
    aget-object v5, p1, v5

    invoke-direct {p0, v5}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseFloat(Ljava/lang/String;)F

    move-result v5

    .line 462
    aget-object v7, p1, v6

    const-string v8, "*"

    invoke-virtual {v7, v8}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_2

    .line 463
    aget-object v7, p1, v6

    const-string v8, "\\*"

    invoke-virtual {v7, v8}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v7

    const/4 v8, 0x0

    .line 464
    aget-object v7, v7, v8

    invoke-direct {p0, v7}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseFloat(Ljava/lang/String;)F

    move-result v7

    add-int/lit8 v6, v6, 0x1

    goto :goto_1

    :cond_2
    add-int/lit8 v7, v6, 0x1

    .line 467
    aget-object v6, p1, v6

    invoke-direct {p0, v6}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseFloat(Ljava/lang/String;)F

    move-result v6

    move v10, v7

    move v7, v6

    move v6, v10

    :goto_1
    if-lez v2, :cond_4

    .line 471
    new-instance v8, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;

    iget-object v9, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    .line 472
    invoke-direct {p0, v9}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->checkTalkerColor(Ljava/lang/String;)I

    move-result v9

    invoke-direct {v8, p0, v2, v9}, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;-><init>(Lcom/mediatek/lbs/em2/ui/NmeaParser;II)V

    .line 473
    iput v7, v8, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mSnr:F

    .line 474
    iput v4, v8, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mElevation:F

    .line 475
    iput v5, v8, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mAzimuth:F

    .line 476
    invoke-direct {p0, v2}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->isUsedInFix(I)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 477
    iput-boolean v1, v8, Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;->mUsedInFix:Z

    .line 479
    :cond_3
    invoke-virtual {v0, v8}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_4
    move v2, v6

    goto :goto_0

    .line 483
    :cond_5
    aget-object v1, p1, v1

    aget-object p1, p1, v3

    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_6

    .line 485
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "mSatelInfoList add svlist : "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " size:"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->log(Ljava/lang/String;)V

    .line 486
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mSatelInfoList:Ljava/util/HashMap;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {p1, v1, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 488
    :cond_6
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

    .line 544
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    .line 547
    :cond_0
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->removeFirstZero(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 549
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

    .line 551
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "parseDouble:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "nmeaParser"

    invoke-static {p1, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return v1
.end method

.method private declared-synchronized parseRMC(Ljava/lang/String;)V
    .locals 7

    monitor-enter p0

    .line 342
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "parseRMC:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->log(Ljava/lang/String;)V

    .line 344
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 345
    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->getLatitude([Ljava/lang/String;)D

    move-result-wide v0

    .line 346
    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->getLongitude([Ljava/lang/String;)D

    move-result-wide v2

    .line 347
    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->getCourse([Ljava/lang/String;)I

    move-result v4

    .line 348
    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->getSpeed([Ljava/lang/String;)D

    move-result-wide v5

    .line 350
    invoke-virtual {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->isStatusActive([Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 351
    iget-object p1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->getTalkerLocation(Ljava/lang/String;)Landroid/location/Location;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 353
    invoke-virtual {p1, v0, v1}, Landroid/location/Location;->setLatitude(D)V

    .line 354
    invoke-virtual {p1, v2, v3}, Landroid/location/Location;->setLongitude(D)V

    int-to-float v0, v4

    .line 355
    invoke-virtual {p1, v0}, Landroid/location/Location;->setBearing(F)V

    double-to-float v0, v5

    const/high16 v1, 0x447a0000    # 1000.0f

    mul-float/2addr v0, v1

    .line 356
    invoke-virtual {p1, v0}, Landroid/location/Location;->setSpeed(F)V

    .line 357
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mLocRecord:Ljava/util/HashMap;

    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    invoke-virtual {v0, v1, p1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 360
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private removeFirstZero(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 203
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result p0

    const/4 v0, 0x0

    :goto_0
    if-ge v0, p0, :cond_1

    .line 205
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

    .line 209
    invoke-virtual {p1, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    goto :goto_2

    :cond_2
    const-string p0, "0"

    :goto_2
    return-object p0
.end method

.method private reportSVupdate()V
    .locals 4

    .line 557
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mListener:Ljava/util/ArrayList;

    monitor-enter v0

    .line 558
    :try_start_0
    iget-object v1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mListener:Ljava/util/ArrayList;

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_0

    .line 560
    iget-object v3, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mListener:Ljava/util/ArrayList;

    invoke-virtual {v3, v2}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mediatek/lbs/em2/ui/NmeaParser$NmeaUpdateViewListener;

    .line 561
    invoke-interface {v3}, Lcom/mediatek/lbs/em2/ui/NmeaParser$NmeaUpdateViewListener;->onViewupdateNotify()V

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 563
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

.method private split(Ljava/lang/String;)[Ljava/lang/String;
    .locals 0

    const-string p0, "[,]"

    .line 500
    invoke-virtual {p1, p0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private splitLines(Ljava/lang/String;)[Ljava/lang/String;
    .locals 0

    const-string p0, "[\n]"

    .line 508
    invoke-virtual {p1, p0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public addSVUpdateListener(Lcom/mediatek/lbs/em2/ui/NmeaParser$NmeaUpdateViewListener;)V
    .locals 1

    .line 571
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mListener:Ljava/util/ArrayList;

    monitor-enter v0

    .line 572
    :try_start_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mListener:Ljava/util/ArrayList;

    invoke-virtual {p0, p1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 573
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method public clearSatelliteList()V
    .locals 1

    .line 135
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mSatelInfoList:Ljava/util/HashMap;

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

    .line 136
    invoke-virtual {v0}, Ljava/util/ArrayList;->clear()V

    goto :goto_0

    :cond_0
    return-void
.end method

.method getCourse([Ljava/lang/String;)I
    .locals 1

    const/16 v0, 0x8

    .line 304
    aget-object p1, p1, v0

    .line 305
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    if-lez v0, :cond_0

    .line 307
    :try_start_0
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseDouble(Ljava/lang/String;)D

    move-result-wide p0
    :try_end_0
    .catch Ljava/lang/NumberFormatException; {:try_start_0 .. :try_end_0} :catch_0

    double-to-int p0, p0

    goto :goto_0

    :catch_0
    const/16 p0, 0xb4

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method getLatitude([Ljava/lang/String;)D
    .locals 2

    const/4 v0, 0x3

    .line 288
    aget-object v0, p1, v0

    const/4 v1, 0x4

    .line 289
    aget-object p1, p1, v1

    .line 291
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    if-lez v1, :cond_0

    .line 292
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseDouble(Ljava/lang/String;)D

    move-result-wide v0

    const-string p0, "N"

    .line 293
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_1

    const-wide/high16 p0, -0x4010000000000000L    # -1.0

    mul-double/2addr v0, p0

    goto :goto_0

    :cond_0
    const-string p1, "Error with latatitude"

    .line 297
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->log(Ljava/lang/String;)V

    const-wide/16 v0, 0x0

    :cond_1
    :goto_0
    return-wide v0
.end method

.method getLongitude([Ljava/lang/String;)D
    .locals 2

    const/4 v0, 0x5

    .line 272
    aget-object v0, p1, v0

    const/4 v1, 0x6

    .line 273
    aget-object p1, p1, v1

    .line 275
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    if-lez v1, :cond_0

    .line 276
    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseDouble(Ljava/lang/String;)D

    move-result-wide v0

    const-string p0, "E"

    .line 277
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-nez p0, :cond_1

    const-wide/high16 p0, -0x4010000000000000L    # -1.0

    mul-double/2addr v0, p0

    goto :goto_0

    :cond_0
    const-string p1, "Error with longitude"

    .line 281
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->log(Ljava/lang/String;)V

    const-wide/16 v0, 0x0

    :cond_1
    :goto_0
    return-wide v0
.end method

.method public getSatelliteList()Ljava/util/ArrayList;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/lbs/em2/ui/NmeaParser$SatelliteInfo;",
            ">;"
        }
    .end annotation

    .line 124
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 125
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mSatelInfoList:Ljava/util/HashMap;

    invoke-virtual {p0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/ArrayList;

    .line 126
    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->addAll(Ljava/util/Collection;)Z

    goto :goto_0

    :cond_0
    return-object v0
.end method

.method getSpeed([Ljava/lang/String;)D
    .locals 4

    const/4 v0, 0x7

    .line 317
    aget-object p1, p1, v0

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseDouble(Ljava/lang/String;)D

    move-result-wide p0

    const-wide/16 v0, 0x0

    cmpl-double v2, p0, v0

    if-lez v2, :cond_0

    const-wide v2, 0x3ffda1cac083126fL    # 1.852

    mul-double/2addr p0, v2

    goto :goto_0

    :cond_0
    move-wide p0, v0

    :goto_0
    cmpg-double v2, p0, v0

    if-gez v2, :cond_1

    goto :goto_1

    :cond_1
    move-wide v0, p0

    :goto_1
    return-wide v0
.end method

.method isStatusActive([Ljava/lang/String;)Z
    .locals 0

    const/4 p0, 0x2

    .line 328
    aget-object p0, p1, p0

    const-string p1, "A"

    .line 329
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public declared-synchronized parse(Ljava/lang/String;)V
    .locals 2

    monitor-enter p0

    .line 213
    :try_start_0
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->splitLines(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 214
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "splitLines line size = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length v1, p1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->log(Ljava/lang/String;)V

    const/4 v0, 0x0

    .line 215
    :goto_0
    array-length v1, p1

    if-ge v0, v1, :cond_0

    .line 216
    aget-object v1, p1, v0

    invoke-virtual {p0, v1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseOneSentence(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 218
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized parseOneSentence(Ljava/lang/String;)V
    .locals 2

    monitor-enter p0

    .line 225
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "parseOneSentence: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->log(Ljava/lang/String;)V

    .line 226
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->checkTalker(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mCurrentTalker:Ljava/lang/String;

    .line 230
    iget v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mParseState:I

    const/4 v1, 0x3

    if-ne v0, v1, :cond_0

    const-string v0, "GSV"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 232
    invoke-direct {p0}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->reportSVupdate()V

    :cond_0
    const-string v0, "RMC"

    .line 234
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, 0x4

    .line 236
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mParseState:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 238
    :try_start_1
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseRMC(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/NumberFormatException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto/16 :goto_0

    :catch_0
    :try_start_2
    const-string p1, "Exception in parseRMC()"

    .line 240
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->log(Ljava/lang/String;)V

    goto/16 :goto_0

    :cond_1
    const-string v0, "GSA"

    .line 242
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    const/4 v0, 0x2

    .line 243
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mParseState:I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 245
    :try_start_3
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseGSA(Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/NumberFormatException; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_0

    :catch_1
    move-exception p1

    .line 247
    :try_start_4
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Exception in parseGSA()"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->log(Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    const-string v0, "GGA"

    .line 249
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    const/4 v0, 0x1

    .line 250
    iput v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mParseState:I
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 252
    :try_start_5
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseGGA(Ljava/lang/String;)V
    :try_end_5
    .catch Ljava/lang/NumberFormatException; {:try_start_5 .. :try_end_5} :catch_2
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    goto :goto_0

    :catch_2
    move-exception p1

    .line 254
    :try_start_6
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Exception in parseGGA()"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->log(Ljava/lang/String;)V

    goto :goto_0

    :cond_3
    const-string v0, "GSV"

    .line 256
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 257
    iput v1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mParseState:I
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    .line 259
    :try_start_7
    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->parseGSV(Ljava/lang/String;)V
    :try_end_7
    .catch Ljava/lang/NumberFormatException; {:try_start_7 .. :try_end_7} :catch_3
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    goto :goto_0

    :catch_3
    move-exception p1

    .line 261
    :try_start_8
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Exception in parseGSV()"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/mediatek/lbs/em2/ui/NmeaParser;->log(Ljava/lang/String;)V

    goto :goto_0

    :cond_4
    const/4 p1, 0x5

    .line 264
    iput p1, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mParseState:I
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_0

    .line 268
    :goto_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public removeSVUpdateListener(Lcom/mediatek/lbs/em2/ui/NmeaParser$NmeaUpdateViewListener;)V
    .locals 1

    .line 581
    iget-object v0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mListener:Ljava/util/ArrayList;

    monitor-enter v0

    .line 582
    :try_start_0
    iget-object p0, p0, Lcom/mediatek/lbs/em2/ui/NmeaParser;->mListener:Ljava/util/ArrayList;

    invoke-virtual {p0, p1}, Ljava/util/ArrayList;->remove(Ljava/lang/Object;)Z

    .line 583
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method
