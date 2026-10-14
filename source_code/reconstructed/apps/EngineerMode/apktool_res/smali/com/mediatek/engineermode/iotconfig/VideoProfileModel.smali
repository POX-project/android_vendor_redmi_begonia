.class public Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;
.super Ljava/lang/Object;
.source "VideoProfileModel.java"


# instance fields
.field private Iinterval:Ljava/lang/String;

.field private Profile:Ljava/lang/String;

.field private framerate:Ljava/lang/String;

.field private height:Ljava/lang/String;

.field private isSelected:Z

.field private level:Ljava/lang/String;

.field private maxBitRate:Ljava/lang/String;

.field private minBitRate:Ljava/lang/String;

.field private name:Ljava/lang/String;

.field private quality:Ljava/lang/String;

.field private width:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 49
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 50
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->isSelected:Z

    .line 51
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "profile"    # Ljava/lang/String;
    .param p3, "level"    # Ljava/lang/String;
    .param p4, "width"    # Ljava/lang/String;
    .param p5, "height"    # Ljava/lang/String;
    .param p6, "framerate"    # Ljava/lang/String;
    .param p7, "iinterval"    # Ljava/lang/String;
    .param p8, "minbitrate"    # Ljava/lang/String;
    .param p9, "maxBitRate"    # Ljava/lang/String;

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 36
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->name:Ljava/lang/String;

    .line 37
    iput-object p2, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->Profile:Ljava/lang/String;

    .line 38
    iput-object p3, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->level:Ljava/lang/String;

    .line 39
    iput-object p4, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->width:Ljava/lang/String;

    .line 40
    iput-object p5, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->height:Ljava/lang/String;

    .line 41
    iput-object p6, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->framerate:Ljava/lang/String;

    .line 42
    iput-object p7, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->Iinterval:Ljava/lang/String;

    .line 43
    iput-object p8, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->minBitRate:Ljava/lang/String;

    .line 44
    iput-object p9, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->maxBitRate:Ljava/lang/String;

    .line 45
    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->isSelected:Z

    .line 46
    const-string v0, ""

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->quality:Ljava/lang/String;

    .line 47
    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)V
    .locals 1
    .param p1, "name"    # Ljava/lang/String;
    .param p2, "profile"    # Ljava/lang/String;
    .param p3, "level"    # Ljava/lang/String;
    .param p4, "width"    # Ljava/lang/String;
    .param p5, "height"    # Ljava/lang/String;
    .param p6, "framerate"    # Ljava/lang/String;
    .param p7, "iinterval"    # Ljava/lang/String;
    .param p8, "minbitrate"    # Ljava/lang/String;
    .param p9, "maxBitRate"    # Ljava/lang/String;
    .param p10, "isSelected"    # Z

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->name:Ljava/lang/String;

    .line 21
    iput-object p2, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->Profile:Ljava/lang/String;

    .line 22
    iput-object p3, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->level:Ljava/lang/String;

    .line 23
    iput-object p4, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->width:Ljava/lang/String;

    .line 24
    iput-object p5, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->height:Ljava/lang/String;

    .line 25
    iput-object p6, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->framerate:Ljava/lang/String;

    .line 26
    iput-object p7, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->Iinterval:Ljava/lang/String;

    .line 27
    iput-object p8, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->minBitRate:Ljava/lang/String;

    .line 28
    iput-object p9, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->maxBitRate:Ljava/lang/String;

    .line 29
    iput-boolean p10, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->isSelected:Z

    .line 30
    const-string v0, ""

    iput-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->quality:Ljava/lang/String;

    .line 31
    return-void
.end method


# virtual methods
.method public getFramerate()Ljava/lang/String;
    .locals 1

    .line 94
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->framerate:Ljava/lang/String;

    return-object v0
.end method

.method public getHeight()Ljava/lang/String;
    .locals 1

    .line 86
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->height:Ljava/lang/String;

    return-object v0
.end method

.method public getIinterval()Ljava/lang/String;
    .locals 1

    .line 102
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->Iinterval:Ljava/lang/String;

    return-object v0
.end method

.method public getLevel()Ljava/lang/String;
    .locals 1

    .line 70
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->level:Ljava/lang/String;

    return-object v0
.end method

.method public getMaxBitRate()Ljava/lang/String;
    .locals 1

    .line 118
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->maxBitRate:Ljava/lang/String;

    return-object v0
.end method

.method public getMinBitRate()Ljava/lang/String;
    .locals 1

    .line 110
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->minBitRate:Ljava/lang/String;

    return-object v0
.end method

.method public getName()Ljava/lang/String;
    .locals 1

    .line 54
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->name:Ljava/lang/String;

    return-object v0
.end method

.method public getProfile()Ljava/lang/String;
    .locals 1

    .line 62
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->Profile:Ljava/lang/String;

    return-object v0
.end method

.method public getQuality()Ljava/lang/String;
    .locals 1

    .line 135
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->quality:Ljava/lang/String;

    return-object v0
.end method

.method public getWidth()Ljava/lang/String;
    .locals 1

    .line 78
    iget-object v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->width:Ljava/lang/String;

    return-object v0
.end method

.method public isSelected()Z
    .locals 1

    .line 126
    iget-boolean v0, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->isSelected:Z

    return v0
.end method

.method public setFramerate(Ljava/lang/String;)V
    .locals 0
    .param p1, "framerate"    # Ljava/lang/String;

    .line 98
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->framerate:Ljava/lang/String;

    .line 99
    return-void
.end method

.method public setHeight(Ljava/lang/String;)V
    .locals 0
    .param p1, "height"    # Ljava/lang/String;

    .line 90
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->height:Ljava/lang/String;

    .line 91
    return-void
.end method

.method public setIinterval(Ljava/lang/String;)V
    .locals 0
    .param p1, "iinterval"    # Ljava/lang/String;

    .line 106
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->Iinterval:Ljava/lang/String;

    .line 107
    return-void
.end method

.method public setLevel(Ljava/lang/String;)V
    .locals 0
    .param p1, "level"    # Ljava/lang/String;

    .line 74
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->level:Ljava/lang/String;

    .line 75
    return-void
.end method

.method public setMaxBitRate(Ljava/lang/String;)V
    .locals 0
    .param p1, "maxBitRate"    # Ljava/lang/String;

    .line 122
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->maxBitRate:Ljava/lang/String;

    .line 123
    return-void
.end method

.method public setMinBitRate(Ljava/lang/String;)V
    .locals 0
    .param p1, "minbitrate"    # Ljava/lang/String;

    .line 114
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->minBitRate:Ljava/lang/String;

    .line 115
    return-void
.end method

.method public setName(Ljava/lang/String;)V
    .locals 0
    .param p1, "name"    # Ljava/lang/String;

    .line 58
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->name:Ljava/lang/String;

    .line 59
    return-void
.end method

.method public setProfile(Ljava/lang/String;)V
    .locals 0
    .param p1, "profile"    # Ljava/lang/String;

    .line 66
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->Profile:Ljava/lang/String;

    .line 67
    return-void
.end method

.method public setQuality(Ljava/lang/String;)V
    .locals 0
    .param p1, "quality"    # Ljava/lang/String;

    .line 139
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->quality:Ljava/lang/String;

    .line 140
    return-void
.end method

.method public setSelected(Z)V
    .locals 0
    .param p1, "isSelected"    # Z

    .line 130
    iput-boolean p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->isSelected:Z

    .line 131
    return-void
.end method

.method public setWidth(Ljava/lang/String;)V
    .locals 0
    .param p1, "width"    # Ljava/lang/String;

    .line 82
    iput-object p1, p0, Lcom/mediatek/engineermode/iotconfig/VideoProfileModel;->width:Ljava/lang/String;

    .line 83
    return-void
.end method
