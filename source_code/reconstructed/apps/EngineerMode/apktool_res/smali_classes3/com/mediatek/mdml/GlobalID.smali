.class Lcom/mediatek/mdml/GlobalID;
.super Ljava/lang/Object;
.source "GlobalID.java"


# instance fields
.field private idNameMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private nameIdMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>()V
    .locals 1

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 15
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mediatek/mdml/GlobalID;->idNameMap:Ljava/util/HashMap;

    .line 16
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mediatek/mdml/GlobalID;->nameIdMap:Ljava/util/HashMap;

    return-void
.end method


# virtual methods
.method clear()V
    .locals 1

    .line 19
    iget-object v0, p0, Lcom/mediatek/mdml/GlobalID;->idNameMap:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->clear()V

    .line 20
    iget-object v0, p0, Lcom/mediatek/mdml/GlobalID;->nameIdMap:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->clear()V

    .line 21
    return-void
.end method

.method public getList()[Ljava/lang/String;
    .locals 2

    .line 41
    iget-object v0, p0, Lcom/mediatek/mdml/GlobalID;->nameIdMap:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object v0

    .line 42
    .local v0, "mapKeySet":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
    invoke-interface {v0}, Ljava/util/Set;->size()I

    move-result v1

    new-array v1, v1, [Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Set;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v1

    check-cast v1, [Ljava/lang/String;

    .line 43
    .local v1, "keyArray":[Ljava/lang/String;
    invoke-static {v1}, Ljava/util/Arrays;->sort([Ljava/lang/Object;)V

    .line 44
    return-object v1
.end method

.method getName(Ljava/lang/Integer;)Ljava/lang/String;
    .locals 1
    .param p1, "value"    # Ljava/lang/Integer;

    .line 48
    iget-object v0, p0, Lcom/mediatek/mdml/GlobalID;->idNameMap:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    return-object v0
.end method

.method getValue(Ljava/lang/String;)Ljava/lang/Integer;
    .locals 1
    .param p1, "name"    # Ljava/lang/String;

    .line 52
    iget-object v0, p0, Lcom/mediatek/mdml/GlobalID;->nameIdMap:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    return-object v0
.end method

.method readLine(Ljava/lang/String;)Z
    .locals 6
    .param p1, "line"    # Ljava/lang/String;

    .line 24
    const-string v0, "[\\(\\)\\s]+"

    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    .line 25
    .local v0, "s":[Ljava/lang/String;
    array-length v1, v0

    const/4 v2, 0x0

    const/4 v3, 0x2

    if-eq v1, v3, :cond_0

    .line 26
    return v2

    .line 29
    :cond_0
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v3, v0

    if-ge v1, v3, :cond_1

    .line 30
    aget-object v3, v0, v1

    invoke-virtual {v3}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v0, v1

    .line 29
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 33
    .end local v1    # "i":I
    :cond_1
    aget-object v1, v0, v2

    .line 34
    .local v1, "name":Ljava/lang/String;
    const/4 v2, 0x1

    aget-object v3, v0, v2

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    .line 35
    .local v3, "id":I
    iget-object v4, p0, Lcom/mediatek/mdml/GlobalID;->idNameMap:Ljava/util/HashMap;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v4, v5, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 36
    iget-object v4, p0, Lcom/mediatek/mdml/GlobalID;->nameIdMap:Ljava/util/HashMap;

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v4, v1, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 37
    return v2
.end method
