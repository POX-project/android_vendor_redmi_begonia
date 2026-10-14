.class public Lcom/mediatek/engineermode/iotconfig/XCAPModel;
.super Ljava/lang/Object;
.source "XCAPModel.java"


# instance fields
.field private configed:Z

.field private name:Ljava/lang/String;

.field private selected:Z

.field private type:Ljava/lang/String;

.field private value:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "type"    # Ljava/lang/String;

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 6
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->selected:Z

    .line 7
    iput-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->configed:Z

    .line 8
    const-string v1, ""

    iput-object v1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->value:Ljava/lang/String;

    .line 33
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->name:Ljava/lang/String;

    .line 34
    iput-object p2, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->type:Ljava/lang/String;

    .line 35
    iput-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->configed:Z

    .line 36
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "value"    # Ljava/lang/String;
    .param p3, "type"    # Ljava/lang/String;

    .line 26
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 6
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->selected:Z

    .line 7
    iput-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->configed:Z

    .line 8
    const-string v0, ""

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->value:Ljava/lang/String;

    .line 27
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->name:Ljava/lang/String;

    .line 28
    iput-object p3, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->type:Ljava/lang/String;

    .line 29
    iput-object p2, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->value:Ljava/lang/String;

    .line 30
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;ZLjava/lang/String;)V
    .locals 1
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "selected"    # Z
    .param p3, "type"    # Ljava/lang/String;

    .line 38
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 6
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->selected:Z

    .line 7
    iput-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->configed:Z

    .line 8
    const-string v0, ""

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->value:Ljava/lang/String;

    .line 39
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->name:Ljava/lang/String;

    .line 40
    iput-object p3, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->type:Ljava/lang/String;

    .line 41
    iput-boolean p2, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->selected:Z

    .line 42
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->configed:Z

    .line 43
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;ZZLjava/lang/String;)V
    .locals 1
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "isConfig"    # Z
    .param p3, "selected"    # Z
    .param p4, "type"    # Ljava/lang/String;

    .line 44
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 6
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->selected:Z

    .line 7
    iput-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->configed:Z

    .line 8
    const-string v0, ""

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->value:Ljava/lang/String;

    .line 45
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->name:Ljava/lang/String;

    .line 46
    iput-object p4, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->type:Ljava/lang/String;

    .line 47
    iput-boolean p2, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->configed:Z

    .line 48
    iput-boolean p3, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->selected:Z

    .line 49
    return-void
.end method


# virtual methods
.method public getName()Ljava/lang/String;
    .locals 1

    .line 52
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->name:Ljava/lang/String;

    return-object v0
.end method

.method public getType()Ljava/lang/String;
    .locals 1

    .line 69
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->type:Ljava/lang/String;

    return-object v0
.end method

.method public getValue()Ljava/lang/String;
    .locals 2

    .line 12
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->type:Ljava/lang/String;

    const-string v1, "boolean"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 13
    iget-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->selected:Z

    if-eqz v0, :cond_0

    const-string v0, "1"

    goto :goto_0

    :cond_0
    const-string v0, "0"

    :goto_0
    return-object v0

    .line 15
    :cond_1
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->value:Ljava/lang/String;

    return-object v0
.end method

.method public isConfiged()Z
    .locals 1

    .line 78
    iget-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->configed:Z

    return v0
.end method

.method public isSelected()Z
    .locals 1

    .line 56
    iget-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->selected:Z

    return v0
.end method

.method public setConfiged(Z)V
    .locals 0
    .param p1, "isConfig"    # Z

    .line 82
    iput-boolean p1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->configed:Z

    .line 83
    return-void
.end method

.method public setName(Ljava/lang/String;)V
    .locals 0
    .param p1, "name"    # Ljava/lang/String;

    .line 23
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->name:Ljava/lang/String;

    .line 24
    return-void
.end method

.method public setSelected(Z)V
    .locals 1
    .param p1, "selected"    # Z

    .line 60
    iput-boolean p1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->selected:Z

    .line 61
    if-eqz p1, :cond_0

    const-string v0, "1"

    goto :goto_0

    :cond_0
    const-string v0, "0"

    :goto_0
    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->value:Ljava/lang/String;

    .line 62
    return-void
.end method

.method public setType(Ljava/lang/String;)V
    .locals 0
    .param p1, "type"    # Ljava/lang/String;

    .line 65
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->type:Ljava/lang/String;

    .line 66
    return-void
.end method

.method public setValue(Ljava/lang/String;)V
    .locals 0
    .param p1, "value"    # Ljava/lang/String;

    .line 19
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->value:Ljava/lang/String;

    .line 20
    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 73
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "name="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ";value="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->getValue()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ";type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 74
    invoke-virtual {p0}, Lcom/mediatek/engineermode/iotconfig/XCAPModel;->getType()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 73
    return-object v0
.end method
