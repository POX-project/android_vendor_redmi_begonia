.class Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;
.super Ljava/lang/Object;
.source "MdmBaseComponent.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "MdmBaseComponent"


# instance fields
.field private emComponentName:[Ljava/lang/String;


# direct methods
.method constructor <init>()V
    .locals 1

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 9
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;->emComponentName:[Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public getEmComponentName()[Ljava/lang/String;
    .locals 1

    .line 12
    iget-object v0, p0, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;->emComponentName:[Ljava/lang/String;

    return-object v0
.end method

.method public hasEmType(Ljava/lang/String;)Z
    .locals 3
    .param p1, "type"    # Ljava/lang/String;

    .line 24
    invoke-virtual {p0}, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;->getEmComponentName()[Ljava/lang/String;

    move-result-object v0

    .line 25
    .local v0, "types":[Ljava/lang/String;
    if-eqz v0, :cond_1

    .line 26
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, v0

    if-ge v1, v2, :cond_1

    .line 27
    aget-object v2, v0, v1

    invoke-virtual {v2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 28
    const/4 v2, 0x1

    return v2

    .line 26
    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 32
    .end local v1    # "i":I
    :cond_1
    const/4 v1, 0x0

    return v1
.end method

.method public setEmComponentName([Ljava/lang/String;)V
    .locals 0
    .param p1, "emComponentName"    # [Ljava/lang/String;

    .line 16
    iput-object p1, p0, Lcom/mediatek/engineermode/networkinfotc1/MdmBaseComponent;->emComponentName:[Ljava/lang/String;

    .line 17
    return-void
.end method

.method public update(Ljava/lang/String;Lcom/mediatek/mdml/Msg;)V
    .locals 2
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "data"    # Lcom/mediatek/mdml/Msg;

    .line 20
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "update = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MdmBaseComponent"

    invoke-static {v1, v0}, Lcom/mediatek/engineermode/Elog;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 21
    return-void
.end method
