.class Lcom/mediatek/engineermode/wifi/WifiFormatConfig;
.super Ljava/lang/Object;
.source "WifiFormatConfig.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;,
        Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;
    }
.end annotation


# static fields
.field private static final BW_10:Ljava/lang/String; = "BW10"

.field private static final BW_160c:Ljava/lang/String; = "BW160c"

.field private static final BW_20:Ljava/lang/String; = "BW20"

.field private static final BW_40:Ljava/lang/String; = "BW40"

.field private static final BW_5:Ljava/lang/String; = "BW5"

.field private static final BW_80:Ljava/lang/String; = "BW80"

.field private static final GI_NOT_FOR_DCM:Ljava/lang/String; = "4xLTF+0.8us GI"

.field private static final RATE_11M:Ljava/lang/String; = "11M"

.field private static final RATE_12M:Ljava/lang/String; = "12M"

.field private static final RATE_18M:Ljava/lang/String; = "18M"

.field private static final RATE_1M:Ljava/lang/String; = "1M"

.field private static final RATE_24M:Ljava/lang/String; = "24M"

.field private static final RATE_2M:Ljava/lang/String; = "2M"

.field private static final RATE_36M:Ljava/lang/String; = "36M"

.field private static final RATE_48M:Ljava/lang/String; = "48M"

.field private static final RATE_54M:Ljava/lang/String; = "54M"

.field private static final RATE_5dot5M:Ljava/lang/String; = "5.5M"

.field private static final RATE_6M:Ljava/lang/String; = "6M"

.field private static final RATE_9M:Ljava/lang/String; = "9M"

.field private static final RATE_MCS0:Ljava/lang/String; = "MCS0"

.field private static final RATE_MCS0_106_DCM:Ljava/lang/String; = "MCS0-106 DCM"

.field private static final RATE_MCS0_242_DCM:Ljava/lang/String; = "MCS0-242 DCM"

.field private static final RATE_MCS0_DCM:Ljava/lang/String; = "MCS0 DCM"

.field private static final RATE_MCS1:Ljava/lang/String; = "MCS1"

.field private static final RATE_MCS10:Ljava/lang/String; = "MCS10"

.field private static final RATE_MCS11:Ljava/lang/String; = "MCS11"

.field private static final RATE_MCS12:Ljava/lang/String; = "MCS12"

.field private static final RATE_MCS13:Ljava/lang/String; = "MCS13"

.field private static final RATE_MCS14:Ljava/lang/String; = "MCS14"

.field private static final RATE_MCS15:Ljava/lang/String; = "MCS15"

.field private static final RATE_MCS1_242_DCM:Ljava/lang/String; = "MCS1-242 DCM"

.field private static final RATE_MCS1_DCM:Ljava/lang/String; = "MCS1 DCM"

.field private static final RATE_MCS2:Ljava/lang/String; = "MCS2"

.field private static final RATE_MCS3:Ljava/lang/String; = "MCS3"

.field private static final RATE_MCS32:Ljava/lang/String; = "MCS32"

.field private static final RATE_MCS4:Ljava/lang/String; = "MCS4"

.field private static final RATE_MCS5:Ljava/lang/String; = "MCS5"

.field private static final RATE_MCS6:Ljava/lang/String; = "MCS6"

.field private static final RATE_MCS7:Ljava/lang/String; = "MCS7"

.field private static final RATE_MCS8:Ljava/lang/String; = "MCS8"

.field private static final RATE_MCS9:Ljava/lang/String; = "MCS9"

.field private static final sGiGroup0:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static final sGiGroup1:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private static final sGiGroup2:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private final mMapBw:Ljava/util/LinkedHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private final mMapRate:Ljava/util/LinkedHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private mMapRuConfig:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/util/LinkedHashMap<",
            "Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;",
            "Ljava/lang/Integer;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 5

    .line 33
    const-string v0, "normal GI"

    const-string v1, "short GI"

    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->sGiGroup0:Ljava/util/List;

    .line 35
    const-string v0, "1xLTF+0.8us GI"

    const-string v1, "2xLTF+0.8us GI"

    const-string v2, "2xLTF+1.6us GI"

    const-string v3, "4xLTF+3.2us GI"

    const-string v4, "4xLTF+0.8us GI"

    filled-new-array {v0, v1, v2, v3, v4}, [Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->sGiGroup1:Ljava/util/List;

    .line 37
    const-string v0, "1x HE-LTF + 1.6us GI"

    const-string v1, "2x HE-LTF + 1.6us GI"

    const-string v2, "4x HE-LTF + 3.2us GI"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    sput-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->sGiGroup2:Ljava/util/List;

    return-void
.end method

.method constructor <init>()V
    .locals 1

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    invoke-direct {p0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->initRuConfigList()Ljava/util/HashMap;

    move-result-object v0

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->mMapRuConfig:Ljava/util/HashMap;

    .line 21
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$1;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$1;-><init>(Lcom/mediatek/engineermode/wifi/WifiFormatConfig;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->mMapBw:Ljava/util/LinkedHashMap;

    .line 73
    new-instance v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;

    invoke-direct {v0, p0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$2;-><init>(Lcom/mediatek/engineermode/wifi/WifiFormatConfig;)V

    iput-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->mMapRate:Ljava/util/LinkedHashMap;

    return-void
.end method

.method static synthetic access$000()Ljava/util/List;
    .locals 1

    .line 13
    sget-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->sGiGroup0:Ljava/util/List;

    return-object v0
.end method

.method static synthetic access$100()Ljava/util/List;
    .locals 1

    .line 13
    sget-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->sGiGroup1:Ljava/util/List;

    return-object v0
.end method

.method static synthetic access$200()Ljava/util/List;
    .locals 1

    .line 13
    sget-object v0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->sGiGroup2:Ljava/util/List;

    return-object v0
.end method

.method private initRuConfigList()Ljava/util/HashMap;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/util/LinkedHashMap<",
            "Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;",
            "Ljava/lang/Integer;",
            ">;>;"
        }
    .end annotation

    .line 133
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 135
    .local v0, "mMap":Ljava/util/HashMap;, "Ljava/util/HashMap<Ljava/lang/Integer;Ljava/util/LinkedHashMap<Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;Ljava/lang/Integer;>;>;"
    new-instance v1, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$3;

    invoke-direct {v1, p0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$3;-><init>(Lcom/mediatek/engineermode/wifi/WifiFormatConfig;)V

    .line 144
    .local v1, "dataDefault":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;Ljava/lang/Integer;>;"
    const/4 v2, 0x0

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 145
    const/4 v2, 0x3

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 146
    const/4 v2, 0x4

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 148
    const/4 v2, 0x1

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    new-instance v3, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$4;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$4;-><init>(Lcom/mediatek/engineermode/wifi/WifiFormatConfig;)V

    invoke-virtual {v0, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 158
    const/4 v2, 0x2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    new-instance v3, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$5;

    invoke-direct {v3, p0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$5;-><init>(Lcom/mediatek/engineermode/wifi/WifiFormatConfig;)V

    invoke-virtual {v0, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 168
    new-instance v2, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$6;

    invoke-direct {v2, p0}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$6;-><init>(Lcom/mediatek/engineermode/wifi/WifiFormatConfig;)V

    .line 178
    .local v2, "data160":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;Ljava/lang/Integer;>;"
    const/4 v3, 0x5

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 179
    const/4 v3, 0x6

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v0, v3, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 180
    return-object v0
.end method


# virtual methods
.method getBW20Index()I
    .locals 4

    .line 113
    const/4 v0, -0x1

    .line 114
    .local v0, "index":I
    iget-object v1, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->mMapBw:Ljava/util/LinkedHashMap;

    invoke-virtual {v1}, Ljava/util/LinkedHashMap;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 115
    .local v2, "str":Ljava/lang/String;
    add-int/lit8 v0, v0, 0x1

    .line 116
    const-string v3, "BW20"

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 117
    goto :goto_1

    .line 119
    .end local v2    # "str":Ljava/lang/String;
    :cond_0
    goto :goto_0

    .line 120
    :cond_1
    :goto_1
    return v0
.end method

.method getGiNotForDcm()Ljava/lang/String;
    .locals 1

    .line 123
    const-string v0, "4xLTF+0.8us GI"

    return-object v0
.end method

.method getMapBw()Ljava/util/LinkedHashMap;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .line 285
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->mMapBw:Ljava/util/LinkedHashMap;

    return-object v0
.end method

.method getMapRate()Ljava/util/LinkedHashMap;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .line 289
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->mMapRate:Ljava/util/LinkedHashMap;

    return-object v0
.end method

.method getPreambleConfig(ZZ)Ljava/util/ArrayList;
    .locals 6
    .param p1, "isTx"    # Z
    .param p2, "is11AxSupport"    # Z
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(ZZ)",
            "Ljava/util/ArrayList<",
            "Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;",
            ">;"
        }
    .end annotation

    .line 293
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 294
    .local v0, "list":Ljava/util/ArrayList;, "Ljava/util/ArrayList<Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;>;"
    invoke-static {}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->values()[Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    move-result-object v1

    array-length v2, v1

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_3

    aget-object v4, v1, v3

    .line 295
    .local v4, "config":Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;
    if-nez p2, :cond_0

    invoke-virtual {v4}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->is11AxItem()Z

    move-result v5

    if-nez v5, :cond_2

    :cond_0
    if-eqz p1, :cond_1

    sget-object v5, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_HE_MU:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    .line 296
    invoke-virtual {v5, v4}, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 297
    goto :goto_1

    .line 299
    :cond_1
    invoke-virtual {v0, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 294
    .end local v4    # "config":Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;
    :cond_2
    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 301
    :cond_3
    return-object v0
.end method

.method getPreambleWithGiNotForDcm()Ljava/util/List;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;",
            ">;"
        }
    .end annotation

    .line 127
    const/4 v0, 0x2

    new-array v0, v0, [Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    sget-object v1, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_HE_SU:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    const/4 v2, 0x0

    aput-object v1, v0, v2

    sget-object v1, Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;->PA_HE_ER:Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;

    const/4 v2, 0x1

    aput-object v1, v0, v2

    invoke-static {v0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0

    .line 129
    .local v0, "configArray":Ljava/util/List;, "Ljava/util/List<Lcom/mediatek/engineermode/wifi/WifiFormatConfig$PreambleConfig;>;"
    return-object v0
.end method

.method getRuConfig(I)Ljava/util/LinkedHashMap;
    .locals 2
    .param p1, "index"    # I
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/LinkedHashMap<",
            "Lcom/mediatek/engineermode/wifi/WifiFormatConfig$RuConfig;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .line 184
    iget-object v0, p0, Lcom/mediatek/engineermode/wifi/WifiFormatConfig;->mMapRuConfig:Ljava/util/HashMap;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;

    return-object v0
.end method
