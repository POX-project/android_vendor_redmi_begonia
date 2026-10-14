.class Lcom/mediatek/mdml/SimInfo;
.super Ljava/lang/Object;
.source "SimInfo.java"


# instance fields
.field private currentSimIdx:I

.field private simIdxMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>()V
    .locals 1

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 13
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mediatek/mdml/SimInfo;->simIdxMap:Ljava/util/HashMap;

    return-void
.end method


# virtual methods
.method clear()V
    .locals 1

    .line 17
    iget-object v0, p0, Lcom/mediatek/mdml/SimInfo;->simIdxMap:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->clear()V

    .line 18
    const/4 v0, -0x1

    iput v0, p0, Lcom/mediatek/mdml/SimInfo;->currentSimIdx:I

    .line 19
    return-void
.end method

.method getSimIdx(Ljava/lang/Integer;)Ljava/lang/Integer;
    .locals 1
    .param p1, "id"    # Ljava/lang/Integer;

    .line 41
    iget-object v0, p0, Lcom/mediatek/mdml/SimInfo;->simIdxMap:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    return-object v0
.end method

.method readLine(Ljava/lang/String;)Z
    .locals 4
    .param p1, "line"    # Ljava/lang/String;

    .line 34
    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    .line 35
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    .line 36
    .local v0, "id":I
    iget-object v1, p0, Lcom/mediatek/mdml/SimInfo;->simIdxMap:Ljava/util/HashMap;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    iget v3, p0, Lcom/mediatek/mdml/SimInfo;->currentSimIdx:I

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 37
    const/4 v1, 0x1

    return v1
.end method

.method readTag(Ljava/lang/String;)Z
    .locals 5
    .param p1, "tag"    # Ljava/lang/String;

    .line 22
    const-string v0, "SIM"

    .line 23
    .local v0, "simInfoPrefix":Ljava/lang/String;
    const-string v1, "_INFO"

    invoke-virtual {p1, v1}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v1

    .line 24
    .local v1, "lastIdx":I
    const-string v2, "SIM"

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v3

    const/4 v4, 0x0

    invoke-virtual {p1, v4, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    if-lez v1, :cond_0

    .line 25
    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v2

    invoke-virtual {p1, v2, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    iput v2, p0, Lcom/mediatek/mdml/SimInfo;->currentSimIdx:I

    .line 26
    const/4 v2, 0x1

    return v2

    .line 29
    :cond_0
    const/4 v2, -0x1

    iput v2, p0, Lcom/mediatek/mdml/SimInfo;->currentSimIdx:I

    .line 30
    return v4
.end method
